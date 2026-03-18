/*
 * XREFs of ExInitializeNPagedLookasideListInternal @ 0x140146390
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x140146350 (ExInitializeNPagedLookasideList.c)
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 *     CcInitializeCacheManager @ 0x140842C3C (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x140843824 (FsRtlInitializeFileLocks.c)
 *     WmipInitializeRegistration @ 0x140844394 (WmipInitializeRegistration.c)
 *     PopInitializeIrpWorkers @ 0x140850B84 (PopInitializeIrpWorkers.c)
 *     FsRtlInitSystem @ 0x140851150 (FsRtlInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x1400B46E0 (InitializeSListHead.c)
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
  KIRQL v12; // bl
  _QWORD *v13; // rax
  _QWORD *v14; // rbp
  __int64 result; // rax

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_WORD *)(a1 + 18) = 256;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  if ( !a2 )
    a2 = ExAllocatePoolWithTag;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( !a3 )
    a3 = ExFreePool;
  *(_QWORD *)(a1 + 56) = a3;
  v12 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
  if ( a8 )
  {
    *(_WORD *)(a1 + 18) = -1;
    *(_WORD *)(a1 + 16) = a7;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v13 = (_QWORD *)qword_14035B708;
  v14 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_14035B708 != &ExNPagedLookasideListHead )
    __fastfail(3u);
  *v14 = &ExNPagedLookasideListHead;
  v14[1] = v13;
  *v13 = v14;
  qword_14035B708 = (__int64)v14;
  KxReleaseSpinLock(&ExNPagedLookasideLock);
  result = v12;
  __writecr8(v12);
  return result;
}
