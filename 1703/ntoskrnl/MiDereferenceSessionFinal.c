/*
 * XREFs of MiDereferenceSessionFinal @ 0x14057A664
 * Callers:
 *     MiDereferenceSession @ 0x14044DF60 (MiDereferenceSession.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140031BC0 (MiPartitionIdToPointer.c)
 *     MiGetTopPteAddress @ 0x140063BE8 (MiGetTopPteAddress.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiUnlinkSessionWorkingSet @ 0x14013E1D4 (MiUnlinkSessionWorkingSet.c)
 *     MiFreeSessionSpaceMap @ 0x14013E238 (MiFreeSessionSpaceMap.c)
 *     MiDeleteSessionAddressSpace @ 0x14013E414 (MiDeleteSessionAddressSpace.c)
 *     MiSessionUnlinkProcess @ 0x14013E8E4 (MiSessionUnlinkProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiReturnPartitionResidentAvailable @ 0x14021F5AC (MiReturnPartitionResidentAvailable.c)
 *     ExDeferredFreePool @ 0x140285C90 (ExDeferredFreePool.c)
 *     ExpWnfDeleteScopeById @ 0x1404997D0 (ExpWnfDeleteScopeById.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     MiSessionUnloadAllImages @ 0x14057A5E0 (MiSessionUnloadAllImages.c)
 *     ExDrainPoolLookasideList @ 0x14057A8E0 (ExDrainPoolLookasideList.c)
 *     MiCheckSessionPoolAllocations @ 0x14057A97C (MiCheckSessionPoolAllocations.c)
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
  _QWORD *TopPteAddress; // rax
  ULONG_PTR *v11; // r11
  unsigned __int64 v12; // r10
  unsigned __int64 result; // rax
  void *v14; // rcx
  int v15; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v16[4]; // [rsp+38h] [rbp-40h] BYREF

  memset(v16, 0, sizeof(v16));
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
  v15 = *(_DWORD *)(v2 + 8);
  v5 = KeGetCurrentThread();
  --v5->KernelApcDisable;
  ExpWnfDeleteScopeById(1u, (__int64)&v15, 4u);
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
    ExDeferredFreePool((int *)(v2 + 3456), 0);
    v8 = *(_QWORD *)(v2 + 7976);
    if ( v8 )
      KeBugCheckEx(0xECu, *(unsigned int *)(v2 + 8), v8, 0LL, 0LL);
    MiCheckSessionPoolAllocations();
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036C160, 0LL);
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036C160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036C160);
  KeAbPostRelease((ULONG_PTR)&qword_14036C160);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( *(_QWORD *)(Process + 832) )
  {
    MiSessionUnlinkProcess(v9, Process);
    *(_QWORD *)(Process + 832) = 0LL;
  }
  MiDeleteSessionAddressSpace(v2, v16);
  TopPteAddress = (_QWORD *)MiGetTopPteAddress(qword_14036C178);
  *TopPteAddress = 0LL;
  if ( MiPteInShadowRange((unsigned __int64)TopPteAddress) )
    MiWritePteShadow();
  if ( v3 == &MiSystemPartition )
    MiReturnResidentAvailable(v16[0]);
  else
    MiReturnPartitionResidentAvailable((__int64)v3, v16[0]);
  if ( v3 == v11 )
    MiReturnResidentAvailable(*(_QWORD *)(v2 + 3120));
  else
    MiReturnPartitionResidentAvailable((__int64)v3, *(_QWORD *)(v2 + 3120));
  result = MiReturnCommit((__int64)v3, v12);
  v14 = *(void **)(v2 + 8176);
  if ( v14 )
    result = ObfDereferenceObjectWithTag(v14, 0x73536D4Du);
  *(_QWORD *)(v2 + 8176) = 0LL;
  return result;
}
