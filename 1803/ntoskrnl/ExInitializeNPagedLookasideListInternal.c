/*
 * XREFs of ExInitializeNPagedLookasideListInternal @ 0x14014B690
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x14014B650 (ExInitializeNPagedLookasideList.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 *     WmipInitializeRegistration @ 0x14089F818 (WmipInitializeRegistration.c)
 *     CcInitializeCacheManager @ 0x1408A0410 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     FsRtlInitSystem @ 0x1408C1C40 (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x1408C208C (FsRtlInitializeFileLocks.c)
 *     PopInitializeIrpWorkers @ 0x1408C6F68 (PopInitializeIrpWorkers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x14006A770 (InitializeSListHead.c)
 */

__int64 __fastcall ExInitializeNPagedLookasideListInternal(
        __int64 a1,
        PVOID (__stdcall *a2)(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag),
        void (__stdcall *a3)(PVOID P),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  PVOID (__stdcall *v12)(POOL_TYPE, SIZE_T, ULONG); // rax
  void (__stdcall *v13)(PVOID); // rax
  KIRQL v14; // bl
  _QWORD *v15; // rax
  _QWORD *v16; // rbp
  __int64 result; // rax

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_WORD *)(a1 + 18) = 256;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  v12 = ExAllocatePoolWithTag;
  if ( a2 )
    v12 = a2;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 48) = v12;
  v13 = ExFreePool;
  if ( a3 )
    v13 = a3;
  *(_QWORD *)(a1 + 56) = v13;
  *(_QWORD *)(a1 + 80) = 0LL;
  v14 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
  if ( a8 )
  {
    *(_WORD *)(a1 + 18) = -1;
    *(_WORD *)(a1 + 16) = a7;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v15 = (_QWORD *)qword_14039ED58;
  v16 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_14039ED58 != &ExNPagedLookasideListHead )
    __fastfail(3u);
  *v16 = &ExNPagedLookasideListHead;
  v16[1] = v15;
  *v15 = v16;
  qword_14039ED58 = (__int64)v16;
  KxReleaseSpinLock(&ExNPagedLookasideLock);
  result = v14;
  __writecr8(v14);
  return result;
}
