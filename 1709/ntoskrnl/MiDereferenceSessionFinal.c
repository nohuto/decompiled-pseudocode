/*
 * XREFs of MiDereferenceSessionFinal @ 0x1406E2C84
 * Callers:
 *     MiDereferenceSession @ 0x14058B274 (MiDereferenceSession.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiGetTopPteAddress @ 0x1400B7D00 (MiGetTopPteAddress.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x14012862C (MiPartitionIdToPointer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiFreeSessionSpaceMap @ 0x140213C9C (MiFreeSessionSpaceMap.c)
 *     MiDeleteSessionAddressSpace @ 0x140221670 (MiDeleteSessionAddressSpace.c)
 *     MiSessionUnlinkProcess @ 0x140221C34 (MiSessionUnlinkProcess.c)
 *     MiUnlinkSessionWorkingSet @ 0x140221CFC (MiUnlinkSessionWorkingSet.c)
 *     MiReturnPartitionResidentAvailable @ 0x14022AC50 (MiReturnPartitionResidentAvailable.c)
 *     ExDeferredFreePool @ 0x1402B2010 (ExDeferredFreePool.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     ExpWnfDeleteScopeById @ 0x1404FCB94 (ExpWnfDeleteScopeById.c)
 *     MiCheckSessionPoolAllocations @ 0x1406E3020 (MiCheckSessionPoolAllocations.c)
 *     MiSessionUnloadAllImages @ 0x1406ED444 (MiSessionUnloadAllImages.c)
 *     ExDrainPoolLookasideList @ 0x140757D88 (ExDrainPoolLookasideList.c)
 */

unsigned __int64 MiDereferenceSessionFinal()
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 Process; // r14
  unsigned __int64 v2; // rsi
  ULONG_PTR *v3; // rbp
  void (__fastcall *v4)(_QWORD); // rax
  struct _KTHREAD *v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  ULONG_PTR v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *TopPteAddress; // rax
  ULONG_PTR *v13; // r11
  unsigned __int64 v14; // r10
  unsigned __int64 result; // rax
  void *v16; // rcx
  int v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v18[4]; // [rsp+38h] [rbp-40h] BYREF

  memset(v18, 0, sizeof(v18));
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v2 = *(_QWORD *)(Process + 1024);
  v3 = (ULONG_PTR *)MiPartitionIdToPointer(*(_WORD *)(v2 + 3180));
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
  ExpWnfDeleteScopeById(1u, (__int64)&v17, 4u);
  KeLeaveCriticalRegion();
  MiFreeSessionSpaceMap();
  if ( (*(_DWORD *)(v2 + 4) & 1) != 0 )
  {
    v6 = 0LL;
    v7 = 21LL;
    do
    {
      ExDrainPoolLookasideList((PSLIST_HEADER)(v6 + v2 + 256));
      v6 += 128LL;
      --v7;
    }
    while ( v7 );
    ExDeferredFreePool((_DWORD *)(v2 + 3456), 0);
    v8 = *(_QWORD *)(v2 + 7976);
    if ( v8 )
      KeBugCheckEx(0xECu, *(unsigned int *)(v2 + 8), v8, 0LL, 0LL);
    MiCheckSessionPoolAllocations();
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403884A0, 0LL);
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403884A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403884A0);
  KeAbPostRelease((ULONG_PTR)&qword_1403884A0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( *(_QWORD *)(Process + 832) )
  {
    MiSessionUnlinkProcess(v9, Process);
    *(_QWORD *)(Process + 832) = 0LL;
  }
  MiDeleteSessionAddressSpace(v2, v18, v10, v11);
  TopPteAddress = (_QWORD *)MiGetTopPteAddress(qword_1403884B8);
  *TopPteAddress = 0LL;
  if ( (unsigned __int64)TopPteAddress >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)TopPteAddress <= 0xFFFFF6FB7DBED7F8uLL )
  {
    MiWritePteShadow();
  }
  if ( v3 == &MiSystemPartition )
    MiReturnResidentAvailable(v18[0]);
  else
    MiReturnPartitionResidentAvailable((__int64)v3, v18[0]);
  if ( v3 == v13 )
    MiReturnResidentAvailable(*(_QWORD *)(v2 + 3120));
  else
    MiReturnPartitionResidentAvailable((__int64)v3, *(_QWORD *)(v2 + 3120));
  result = MiReturnCommit((__int64)v3, v14);
  v16 = *(void **)(v2 + 8176);
  if ( v16 )
    result = ObfDereferenceObjectWithTag(v16, 0x73536D4Du);
  *(_QWORD *)(v2 + 8176) = 0LL;
  return result;
}
