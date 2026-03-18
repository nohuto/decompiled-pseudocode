/*
 * XREFs of MiDeleteBootRange @ 0x14015D2A0
 * Callers:
 *     MmFreeBootRegistry @ 0x1405BD3CC (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x140817414 (MmFreeLoaderBlock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
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
  unsigned __int64 v9; // r14
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // r13
  LONG *v12; // rbx
  KIRQL v13; // al
  PVOID *v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int8 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // r10
  __int64 v20; // rbx
  unsigned __int64 i; // r11
  unsigned __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v24; // rbx
  LONG *v25; // rbx
  KIRQL v26; // al
  unsigned __int64 v27; // rsi
  unsigned __int64 result; // rax
  KIRQL v29; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v30; // [rsp+30h] [rbp-D0h]
  _QWORD v33[5]; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+70h] [rbp-90h] BYREF
  __int16 v35; // [rsp+74h] [rbp-8Ch]
  __int64 v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]

  v2 = a2;
  v3 = a1;
  memset(v33, 0, 0x20uLL);
  v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = (((v3 + 8 * v2 - 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v4;
  v29 = v8;
  if ( v4 <= v5 )
  {
    do
    {
      v10 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v9) - 0x58000000000LL;
      MiLockPageAtDpcInline(v10);
      *(_QWORD *)(v10 + 24) ^= (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v9 += 8LL;
    }
    while ( v9 <= v5 );
    v2 = a2;
    v3 = a1;
    v8 = v29;
  }
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v8);
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v3, v2, 1, v33);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)&PsLoadedModuleResource, 1u);
  v12 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v13 = ExAcquireSpinLockExclusive(v12);
  v12[1] = 0;
  v17 = v13;
  v30 = v13;
  if ( v4 <= v5 )
  {
    do
    {
      v18 = MI_GET_PFN_FROM_PTE(v4, v14, v15, v16);
      MiLockPageAtDpcInline(v18);
      v14 = (PVOID *)(*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL);
      *(_QWORD *)(v18 + 24) = v14;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v19 = 0LL;
        v20 = (__int64)(v4 << 25) >> 16;
        v16 = v20;
        for ( i = v20 + 4096; v16 < i; v16 += 8LL )
        {
          v22 = MI_READ_PTE_LOCK_FREE(v16);
          if ( (v22 & 0xC01) != 0 )
            break;
          v23 = (v22 >> 5) & 0x1F;
          if ( v23 )
          {
            if ( v23 != 24LL )
              break;
          }
        }
        if ( v16 == i )
        {
          v14 = (PVOID *)PsLoadedModuleList;
          v16 = 1073741816LL;
          v24 = ((v20 << 25) - v19) >> 16;
          while ( 1 )
          {
            v15 = (unsigned __int64)v14[6];
            if ( v4 >= ((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
              && v4 <= (((v15 + *((unsigned int *)v14 + 16) - 1LL) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
            {
              break;
            }
            v14 = (PVOID *)*v14;
            if ( v14 == &PsLoadedModuleList )
              goto LABEL_18;
          }
          v14 = 0LL;
LABEL_18:
          if ( v14 )
          {
            MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v30);
            v36 = 20LL;
            v34 = 0;
            v35 = 0;
            v37 = 0LL;
            v38 = 0LL;
            MiInsertTbFlushEntry((__int64)&v34, v24, 512LL, 0);
            MiReturnSystemVa(v24, v24 + 0x200000, 12, (__int64)&v34);
            v25 = MiGetSharedVm((__int64)AnyMultiplexedVm);
            v26 = ExAcquireSpinLockExclusive(v25);
            v25[1] = 0;
            v17 = v26;
            v30 = v26;
          }
          else
          {
            v17 = v30;
          }
        }
      }
      v4 += 8LL;
    }
    while ( v4 <= v5 );
    v2 = a2;
  }
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v17);
  ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  MiReturnResidentAvailable(v2);
  v27 = v2 - v33[1];
  result = MiReturnCommit((__int64)&MiSystemPartition, v27);
  qword_14036D118 -= v27;
  return result;
}
