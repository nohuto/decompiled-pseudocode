/*
 * XREFs of MiDeleteBootRange @ 0x140142F9C
 * Callers:
 *     MmFreeBootRegistry @ 0x1405BF31C (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x1408383C8 (MmFreeLoaderBlock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

unsigned __int64 __fastcall MiDeleteBootRange(ULONG_PTR a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  ULONG_PTR v3; // r13
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r12
  char *AnyMultiplexedVm; // r15
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  __int64 v9; // rdx
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // r13
  LONG *v13; // rbx
  KIRQL v14; // al
  PVOID *v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  KIRQL v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r10
  __int64 v21; // rbx
  unsigned __int64 i; // r11
  unsigned __int64 PteShadow; // rax
  int v24; // eax
  unsigned __int64 v25; // rbx
  LONG *v26; // rbx
  KIRQL v27; // al
  unsigned __int64 v28; // rsi
  unsigned __int64 result; // rax
  KIRQL v30; // [rsp+30h] [rbp-D0h]
  KIRQL v31; // [rsp+30h] [rbp-D0h]
  _QWORD v34[5]; // [rsp+48h] [rbp-B8h] BYREF
  int v35; // [rsp+70h] [rbp-90h] BYREF
  __int16 v36; // [rsp+74h] [rbp-8Ch]
  __int64 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]

  v2 = a2;
  v3 = a1;
  memset(v34, 0, 0x20uLL);
  v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = (((v3 + 8 * v2 - 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v4;
  v30 = v8;
  if ( v4 <= v5 )
  {
    do
    {
      v11 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v10) - 0x58000000000LL;
      MiLockPageAtDpcInline(v11);
      *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v10 += 8LL;
    }
    while ( v10 <= v5 );
    v2 = a2;
    v3 = a1;
    v8 = v30;
  }
  LOBYTE(v9) = v8;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v9);
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v3, v2, 1, v34);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v13 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v14 = ExAcquireSpinLockExclusive(v13);
  v13[1] = 0;
  v18 = v14;
  v31 = v14;
  if ( v4 <= v5 )
  {
    do
    {
      v19 = MI_GET_PFN_FROM_PTE(v4, v15, v16, v17);
      MiLockPageAtDpcInline(v19);
      v15 = (PVOID *)(*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL);
      *(_QWORD *)(v19 + 24) = v15;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v20 = 0LL;
        v21 = (__int64)(v4 << 25) >> 16;
        v17 = v21;
        for ( i = v21 + 4096; v17 < i; v17 += 8LL )
        {
          PteShadow = *(_QWORD *)v17;
          if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(v17, *(_QWORD *)v17);
          if ( (PteShadow & 0xC01) != 0 )
            break;
          v24 = (PteShadow >> 5) & 0x1F;
          if ( v24 )
          {
            if ( v24 != 24LL )
              break;
          }
        }
        if ( v17 == i )
        {
          v15 = (PVOID *)PsLoadedModuleList;
          v17 = 1073741816LL;
          v25 = ((v21 << 25) - v20) >> 16;
          while ( 1 )
          {
            v16 = (unsigned __int64)v15[6];
            if ( v4 >= ((v16 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
              && v4 <= (((v16 + *((unsigned int *)v15 + 16) - 1LL) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
            {
              break;
            }
            v15 = (PVOID *)*v15;
            if ( v15 == &PsLoadedModuleList )
              goto LABEL_21;
          }
          v15 = 0LL;
LABEL_21:
          if ( v15 )
          {
            LOBYTE(v15) = v31;
            MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, (__int64)v15);
            v37 = 20LL;
            v35 = 0;
            v36 = 0;
            v38 = 0LL;
            v39 = 0LL;
            MiInsertTbFlushEntry(&v35, v25, 512LL, 0);
            MiReturnSystemVa(v25, v25 + 0x200000, 12, (__int64)&v35);
            v26 = MiGetSharedVm((__int64)AnyMultiplexedVm);
            v27 = ExAcquireSpinLockExclusive(v26);
            v26[1] = 0;
            v18 = v27;
            v31 = v27;
          }
          else
          {
            v18 = v31;
          }
        }
      }
      v4 += 8LL;
    }
    while ( v4 <= v5 );
    v2 = a2;
  }
  LOBYTE(v15) = v18;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, (__int64)v15);
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  MiReturnResidentAvailable(v2);
  v28 = v2 - v34[1];
  result = MiReturnCommit((__int64)&MiSystemPartition, v28);
  qword_1403893D8 -= v28;
  return result;
}
