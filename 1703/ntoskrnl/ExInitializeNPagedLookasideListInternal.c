/*
 * XREFs of ExInitializeNPagedLookasideListInternal @ 0x140134F20
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x140134EE0 (ExInitializeNPagedLookasideList.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     CcInitializeCacheManager @ 0x1407FE20C (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 *     WmipInitializeRegistration @ 0x1407FF844 (WmipInitializeRegistration.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 *     FsRtlInitSystem @ 0x140819368 (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x1408197BC (FsRtlInitializeFileLocks.c)
 *     PopInitializeIrpWorkers @ 0x1408236D0 (PopInitializeIrpWorkers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
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
  v13 = (_QWORD *)qword_140342FF8;
  v14 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_140342FF8 != &ExNPagedLookasideListHead )
    __fastfail(3u);
  *v14 = &ExNPagedLookasideListHead;
  v14[1] = v13;
  *v13 = v14;
  qword_140342FF8 = (__int64)v14;
  KxReleaseSpinLock(&ExNPagedLookasideLock);
  result = v12;
  __writecr8(v12);
  return result;
}
