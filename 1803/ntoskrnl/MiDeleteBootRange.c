/*
 * XREFs of MiDeleteBootRange @ 0x140178A94
 * Callers:
 *     MmFreeBootRegistry @ 0x1406335E4 (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x1408B2894 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

unsigned __int64 __fastcall MiDeleteBootRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  unsigned __int8 v9; // r13
  unsigned __int64 v10; // rbp
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // r13
  LONG *v13; // rbx
  KIRQL v14; // al
  unsigned __int8 v15; // r15
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  unsigned __int64 result; // rax
  __int64 v19; // r10
  __int64 v20; // rbx
  unsigned __int64 v21; // r9
  unsigned __int64 i; // r11
  unsigned __int64 v23; // rax
  int v24; // eax
  PVOID *v25; // rdx
  unsigned __int64 v26; // rbx
  LONG *v27; // rbx
  KIRQL v28; // al
  char *AnyMultiplexedVm; // [rsp+30h] [rbp-68h]
  _QWORD v30[12]; // [rsp+38h] [rbp-60h] BYREF

  v2 = a2;
  v3 = a1;
  memset(v30, 0, 0x20uLL);
  v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = (((v3 + 8 * (v2 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v6 = (__int64)AnyMultiplexedVm;
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  v10 = v4;
  if ( v4 <= v5 )
  {
    do
    {
      v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v10) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      MiLockPageAtDpcInline(v11);
      *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v10 += 8LL;
    }
    while ( v10 <= v5 );
    v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v2 = a2;
    v6 = (__int64)AnyMultiplexedVm;
    v3 = a1;
  }
  MiUnlockWorkingSetExclusive(v6, v9);
  MiDeleteSystemPagableVm(v6, 0LL, v3, v2, 1, v30);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v13 = MiGetSharedVm(v6);
  v14 = ExAcquireSpinLockExclusive(v13);
  v13[1] = 0;
  v15 = v14;
  if ( v4 <= v5 )
  {
    do
    {
      v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v4) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      MiLockPageAtDpcInline(v16);
      *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v19 = 0LL;
        v20 = (__int64)(v4 << 25) >> 16;
        v21 = v20;
        for ( i = v20 + 4096; v21 < i; v21 += 8LL )
        {
          v23 = MI_READ_PTE_LOCK_FREE(v21);
          if ( (v23 & 0xC01) != 0 )
            break;
          v24 = (v23 >> 5) & 0x1F;
          if ( v24 )
          {
            if ( v24 != 24LL )
              break;
          }
        }
        if ( v21 == i )
        {
          v25 = (PVOID *)PsLoadedModuleList;
          v26 = ((v20 << 25) - v19) >> 16;
          while ( v4 < (((unsigned __int64)v25[6] >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
               || v4 > ((((unsigned __int64)v25[6] + *((unsigned int *)v25 + 16) - 1) >> 18) & 0x3FFFFFF8)
                     - 0x904C0000000LL )
          {
            v25 = (PVOID *)*v25;
            if ( v25 == &PsLoadedModuleList )
              goto LABEL_17;
          }
          v25 = 0LL;
LABEL_17:
          if ( v25 )
          {
            MiUnlockWorkingSetExclusive(v6, v15);
            MiReturnSystemVa(v26, v26 + 0x200000, 12);
            v27 = MiGetSharedVm(v6);
            v28 = ExAcquireSpinLockExclusive(v27);
            v27[1] = 0;
            v15 = v28;
          }
        }
      }
      v4 += 8LL;
    }
    while ( v4 <= v5 );
    v2 = a2;
  }
  MiUnlockWorkingSetExclusive(v6, v15);
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  MiReturnResidentAvailable(v2);
  v17 = v2 - v30[1];
  MiReturnCommit((__int64)&MiSystemPartition, v17);
  result = qword_1403CC650 - v17;
  qword_1403CC650 -= v17;
  return result;
}
