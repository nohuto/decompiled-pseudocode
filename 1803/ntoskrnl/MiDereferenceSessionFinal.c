/*
 * XREFs of MiDereferenceSessionFinal @ 0x1405ECD70
 * Callers:
 *     MiDereferenceSession @ 0x140577AC4 (MiDereferenceSession.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiDetachProcessFromSession @ 0x140070DA4 (MiDetachProcessFromSession.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x1401404D0 (MiPartitionIdToPointer.c)
 *     MiDeleteSessionAddressSpace @ 0x140153D40 (MiDeleteSessionAddressSpace.c)
 *     MiSessionUnlinkProcess @ 0x140153E64 (MiSessionUnlinkProcess.c)
 *     ExCleanupSessionHeapManager @ 0x1401541E4 (ExCleanupSessionHeapManager.c)
 *     MiFreeSessionSpaceMap @ 0x140154204 (MiFreeSessionSpaceMap.c)
 *     MiUnlinkSessionWorkingSet @ 0x140154238 (MiUnlinkSessionWorkingSet.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiReturnPartitionResidentAvailable @ 0x140265758 (MiReturnPartitionResidentAvailable.c)
 *     ExDeferredFreePool @ 0x1402EA030 (ExDeferredFreePool.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ExpWnfDeleteScopeById @ 0x140511974 (ExpWnfDeleteScopeById.c)
 *     ExDrainPoolLookasideList @ 0x1405ECFB8 (ExDrainPoolLookasideList.c)
 *     MiCheckSessionPoolAllocations @ 0x1405ED054 (MiCheckSessionPoolAllocations.c)
 *     MiSessionUnloadAllImages @ 0x1405ED214 (MiSessionUnloadAllImages.c)
 */

unsigned __int64 MiDereferenceSessionFinal()
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 Process; // rbp
  unsigned __int64 v2; // rdi
  ULONG_PTR *v3; // rsi
  void (__fastcall *v4)(_QWORD); // rax
  struct _KTHREAD *v5; // rax
  int v6; // eax
  __int64 v7; // r14
  __int64 v8; // r12
  ULONG_PTR v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 result; // rax
  void *v16; // rcx
  int v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v18[4]; // [rsp+38h] [rbp-40h] BYREF

  memset(v18, 0, sizeof(v18));
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v2 = *(_QWORD *)(Process + 1024);
  v3 = (ULONG_PTR *)MiPartitionIdToPointer(*(_WORD *)(v2 + 3182));
  MiUnlinkSessionWorkingSet(v2);
  if ( *(_QWORD *)(v2 + 80) )
  {
    KeSetEvent(*(PRKEVENT *)(v2 + 72), 1, 0);
    ObCloseHandle(*(HANDLE *)(v2 + 80), 0);
  }
  v4 = *(void (__fastcall **)(_QWORD))(v2 + 7872);
  if ( (unsigned __int64)v4 > 1 )
    v4(0LL);
  MiSessionUnloadAllImages();
  v17 = *(_DWORD *)(v2 + 8);
  v5 = KeGetCurrentThread();
  --v5->KernelApcDisable;
  ExpWnfDeleteScopeById(1u, &v17, 4u);
  KeLeaveCriticalRegion();
  MiFreeSessionSpaceMap();
  v6 = *(_DWORD *)(v2 + 4);
  if ( (v6 & 1) != 0 )
  {
    v7 = 0LL;
    v8 = 21LL;
    do
    {
      ExDrainPoolLookasideList((PSLIST_HEADER)(v7 + v2 + 256));
      v7 += 128LL;
      --v8;
    }
    while ( v8 );
    ExDeferredFreePool((_DWORD *)(v2 + 3456), 0);
    v9 = *(_QWORD *)(v2 + 8104);
    if ( v9 )
      KeBugCheckEx(0xECu, *(unsigned int *)(v2 + 8), v9, 0LL, 0LL);
    ExCleanupSessionHeapManager();
    *(_DWORD *)(v2 + 4) |= 0x200u;
    MiCheckSessionPoolAllocations();
    v6 = *(_DWORD *)(v2 + 4);
  }
  if ( (v6 & 0x300) == 0x100 )
    ExCleanupSessionHeapManager();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB628, 0LL);
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB628, v10, v11, v12);
  KeAbPostRelease((ULONG_PTR)&qword_1403CB628);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( *(_QWORD *)(Process + 832) )
  {
    MiSessionUnlinkProcess(v13, Process);
    *(_QWORD *)(Process + 832) = 0LL;
  }
  MiDeleteSessionAddressSpace(v2, v18);
  MiDetachProcessFromSession(0);
  v14 = v18[3] - v18[1];
  if ( v3 == &MiSystemPartition )
    MiReturnResidentAvailable(v18[0]);
  else
    MiReturnPartitionResidentAvailable((__int64)v3, v18[0]);
  if ( v3 == &MiSystemPartition )
    MiReturnResidentAvailable(*(_QWORD *)(v2 + 3120));
  else
    MiReturnPartitionResidentAvailable((__int64)v3, *(_QWORD *)(v2 + 3120));
  result = MiReturnCommit((__int64)v3, v14);
  v16 = *(void **)(v2 + 8304);
  if ( v16 )
    result = ObfDereferenceObjectWithTag(v16, 0x73536D4Du);
  *(_QWORD *)(v2 + 8304) = 0LL;
  return result;
}
