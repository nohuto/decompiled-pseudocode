/*
 * XREFs of VfInitVerifierComponents @ 0x1407657A0
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140765668 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x14081526C (VfInitBootDriversLoaded.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     VfAvlInitializeTree @ 0x1402518D4 (VfAvlInitializeTree.c)
 *     ExSetPoolFlags @ 0x14025B0F0 (ExSetPoolFlags.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     VfHalVerifierInitialize @ 0x14076A570 (VfHalVerifierInitialize.c)
 *     VfPendingCheckForChanges @ 0x140771A44 (VfPendingCheckForChanges.c)
 *     VfMajorRegisterHandlers @ 0x140773328 (VfMajorRegisterHandlers.c)
 *     VfFaultsInitPhase0 @ 0x140775B94 (VfFaultsInitPhase0.c)
 *     VfKeCheckForChanges @ 0x140778050 (VfKeCheckForChanges.c)
 *     VfDeadlockInitialize @ 0x14077932C (VfDeadlockInitialize.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x14077BD60 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViSettingsIoCheckForChanges @ 0x14077BF00 (ViSettingsIoCheckForChanges.c)
 *     VfWdInit @ 0x14077C448 (VfWdInit.c)
 *     VfCtxInit @ 0x14077F660 (VfCtxInit.c)
 */

__int64 __fastcall VfInitVerifierComponents(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _QWORD *PoolWithTag; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  _DWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 result; // rax
  int v17; // [rsp+30h] [rbp-68h]
  int v18; // [rsp+30h] [rbp-68h]
  int v19; // [rsp+30h] [rbp-68h]

  ExSetPoolFlags(0x10u);
  ViIrpDatabaseLock = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x74546F49u);
  ViIrpDatabase = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = 256LL;
    do
    {
      PoolWithTag[1] = PoolWithTag;
      *PoolWithTag = PoolWithTag;
      PoolWithTag += 2;
      --v7;
    }
    while ( v7 );
    ViIrpDatabaseAddressRanges = (__int64)PoolWithTag;
    memset(PoolWithTag, 0, 0x1000uLL);
    _InterlockedExchange(&VfIrpDatabaseInitialized, 1);
  }
  VfWdInit();
  VfKeCheckForChanges(a1);
  ViSettingsIoCheckForChanges(a1);
  if ( (a1 & 8) != 0 )
    MmTrackLockedPages = 1;
  VfPendingCheckForChanges(a1);
  if ( (MmVerifierData & 0xFBF) != 0 )
  {
    v8 = VfPoolTracesLength;
    if ( (unsigned int)VfPoolTracesLength >= 0x10000 )
    {
      v9 = 0x100000;
      if ( (unsigned int)VfPoolTracesLength <= 0x100000 )
      {
        while ( (VfPoolTracesLength & v9) == 0 )
        {
          v9 >>= 1;
          if ( v9 < 0x10000 )
            goto LABEL_16;
        }
        v8 = v9 & VfPoolTracesLength;
        VfPoolTracesLength &= v9;
      }
      else
      {
        v8 = 0x100000;
        VfPoolTracesLength = 0x100000;
      }
    }
    else
    {
      v8 = 0x10000;
      VfPoolTracesLength = 0x10000;
    }
LABEL_16:
    VfPoolTraces = (__int64)ExAllocatePoolWithTagPriority(
                              NonPagedPoolNx,
                              (unsigned __int64)v8 << 7,
                              0x54506656u,
                              HighPoolPriority);
  }
  VfFaultsInitPhase0();
  if ( (int)VfAvlInitializeTree(
              &ViLookasideAvl,
              96LL,
              0LL,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0 )
    _InterlockedExchange(&ViLookasideAllocationFailures, 1);
  else
    _InterlockedExchange(&ViLookasideInitialized, 1);
  pXdvExInitializeNPagedLookasideList(
    (int)&ViSessionDataLookaside,
    0,
    (int)VfUtilFreePoolDispatchLevel,
    512,
    2600LL,
    1936749129,
    16,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  _InterlockedExchange(&ViSessionDataInitialized, 1);
  LOWORD(v17) = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViPacketLookaside,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    256LL,
    1953526345,
    v17,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  if ( (int)VfAvlInitializeTree(
              &ViResourceAvl,
              104LL,
              0LL,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0 )
    _InterlockedExchange(&ViResourceNotTracked, 1);
  else
    _InterlockedExchange(&ViResourceInitialized, 1);
  LOWORD(v18) = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViIrpCallDriverDataList,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    192LL,
    1131442761,
    v18,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  memset(&ViMajorVerifierRoutines, 0, 0xB40uLL);
  LOBYTE(v10) = 27;
  VfMajorRegisterHandlers(
    v10,
    (unsigned int)VfPnpDumpIrpStack,
    (unsigned int)VfPnpVerifyNewRequest,
    (unsigned int)VfPnpVerifyIrpStackDownward,
    (__int64)VfPnpVerifyIrpStackUpward,
    (__int64)VfPnpIsSystemRestrictedIrp,
    (__int64)VfPnpAdvanceIrpStatus,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfPnpTestStartedPdoStack,
    0LL);
  LOBYTE(v11) = 22;
  VfMajorRegisterHandlers(
    v11,
    (unsigned int)VfPowerDumpIrpStack,
    (unsigned int)VfPowerVerifyNewRequest,
    (unsigned int)VfPowerVerifyIrpStackDownward,
    (__int64)VfPowerVerifyIrpStackUpward,
    (__int64)VfPowerIsSystemRestrictedIrp,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfPowerTestStartedPdoStack,
    0LL);
  LOBYTE(v12) = 23;
  VfMajorRegisterHandlers(
    v12,
    (unsigned int)VfWmiDumpIrpStack,
    (unsigned int)VfWmiVerifyNewRequest,
    (unsigned int)VfWmiVerifyIrpStackDownward,
    (__int64)VfWmiVerifyIrpStackUpward,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfWmiTestStartedPdoStack,
    0LL);
  LOBYTE(v13) = -1;
  VfMajorRegisterHandlers(
    v13,
    (unsigned int)ViGenericDumpIrpStack,
    (unsigned int)ViGenericVerifyNewRequest,
    (unsigned int)ViGenericVerifyIrpStackDownward,
    (__int64)ViGenericVerifyIrpStackUpward,
    0LL,
    0LL,
    (__int64)ViGenericIsValidIrpStatus,
    (__int64)ViGenericIsNewRequest,
    (__int64)ViGenericVerifyNewIrp,
    (__int64)ViGenericVerifyNewRequest,
    0LL,
    (__int64)ViGenericBuildIrpLogEntry);
  VfHalVerifierInitialize();
  ViIrpLogDatabaseLock = 0LL;
  v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64496656u);
  ViIrpLogDatabase = (__int64)v14;
  if ( v14 )
  {
    *v14 = 0;
    v15 = v14 + 2;
    v15[1] = v15;
    *v15 = v15;
  }
  ViDdiInitialized = 1;
  if ( (int)VfAvlInitializeTree(
              &ViRemLockAvl,
              32LL,
              136LL,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0 )
    _InterlockedExchange(&ViRemLockAllocationFailures, 1);
  else
    _InterlockedExchange(&ViRemLockInitialized, 1);
  if ( (int)VfAvlInitializeTree(
              &ViDevObjAvl,
              336LL,
              24LL,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0 )
    _InterlockedExchange(&ViDevObjAllocationFailures, 1);
  else
    _InterlockedExchange(&ViDevObjInitialized, 1);
  LOWORD(v19) = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViIoCallbackStateLookaside,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    8LL,
    1330202198,
    v19,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  _InterlockedExchange(&ViIoCallbacksInitialized, 1);
  VfCtxInit();
  VfDeadlockInitialize(a2, a3);
  VfSettingsApplyMiscellaneousChecks(a1);
  result = (unsigned int)MmVerifierData;
  IovUtilVerifierEnabled = 1;
  if ( (MmVerifierData & 0x10) != 0 )
    PpvUtilVerifierEnabled = 1;
  ViVerifierEnabled = 1;
  return result;
}
