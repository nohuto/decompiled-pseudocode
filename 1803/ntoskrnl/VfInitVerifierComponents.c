/*
 * XREFs of VfInitVerifierComponents @ 0x140814500
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1408143C8 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x1408AD198 (VfInitBootDriversLoaded.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     VfAvlInitializeTree @ 0x1402AB254 (VfAvlInitializeTree.c)
 *     ExSetPoolFlags @ 0x1402B8EAC (ExSetPoolFlags.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     VfHalVerifierInitialize @ 0x1408193A0 (VfHalVerifierInitialize.c)
 *     VfPendingCheckForChanges @ 0x140820994 (VfPendingCheckForChanges.c)
 *     VfMajorRegisterHandlers @ 0x140822DDC (VfMajorRegisterHandlers.c)
 *     VfPoolInitPhase0 @ 0x140824948 (VfPoolInitPhase0.c)
 *     VfFaultsInitPhase0 @ 0x140824BF0 (VfFaultsInitPhase0.c)
 *     VfKeCheckForChanges @ 0x140827290 (VfKeCheckForChanges.c)
 *     VfDeadlockInitialize @ 0x1408285F8 (VfDeadlockInitialize.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x14082B024 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViSettingsIoCheckForChanges @ 0x14082B1F4 (ViSettingsIoCheckForChanges.c)
 *     VfIrpDatabaseInit @ 0x14082B65C (VfIrpDatabaseInit.c)
 *     VfWdInit @ 0x14082B7BC (VfWdInit.c)
 *     VfCtxInit @ 0x14082EB84 (VfCtxInit.c)
 */

__int64 __fastcall VfInitVerifierComponents(unsigned int a1, unsigned int a2, unsigned int a3)
{
  bool v6; // sf
  volatile __int32 *v7; // rcx
  volatile __int32 *v8; // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  _DWORD *PoolWithTag; // rax
  _QWORD *v14; // rax
  volatile __int32 *v15; // rcx
  volatile __int32 *v16; // rcx
  __int64 result; // rax
  __int16 v18; // [rsp+30h] [rbp-68h]
  int v19; // [rsp+30h] [rbp-68h]
  int v20; // [rsp+30h] [rbp-68h]
  int v21; // [rsp+30h] [rbp-68h]

  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 0x10) != 0 || (VfFlightOptions & 9) != 0 )
    ExSetPoolFlags(0x10u);
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 0x10) != 0 )
    VfIrpDatabaseInit();
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 0x10) != 0 )
    VfWdInit();
  VfKeCheckForChanges(a1);
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 0x10) != 0 )
    ViSettingsIoCheckForChanges(a1);
  if ( (a1 & 8) != 0 )
    MmTrackLockedPages = 1;
  VfPendingCheckForChanges(a1);
  VfPoolInitPhase0();
  VfFaultsInitPhase0();
  v6 = (int)VfAvlInitializeTree(
              &ViLookasideAvl,
              96LL,
              0LL,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0;
  v7 = &ViLookasideInitialized;
  if ( v6 )
    v7 = &ViLookasideAllocationFailures;
  _InterlockedExchange(v7, 1);
  v18 = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViSessionDataLookaside,
    0,
    (int)VfUtilFreePoolDispatchLevel,
    512,
    2600LL,
    1936749129,
    v18,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  _InterlockedExchange(&ViSessionDataInitialized, 1);
  LOWORD(v19) = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViPacketLookaside,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    256LL,
    1953526345,
    v19,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  v6 = (int)VfAvlInitializeTree(
              &ViResourceAvl,
              104LL,
              0LL,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0;
  v8 = &ViResourceInitialized;
  if ( v6 )
    v8 = &ViResourceNotTracked;
  _InterlockedExchange(v8, 1);
  LOWORD(v20) = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViIrpCallDriverDataList,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    192LL,
    1131442761,
    v20,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  memset(&ViMajorVerifierRoutines, 0, 0xB40uLL);
  LOBYTE(v9) = 27;
  VfMajorRegisterHandlers(
    v9,
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
  LOBYTE(v10) = 22;
  VfMajorRegisterHandlers(
    v10,
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
  LOBYTE(v11) = 23;
  VfMajorRegisterHandlers(
    v11,
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
  LOBYTE(v12) = -1;
  VfMajorRegisterHandlers(
    v12,
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
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64496656u);
  ViIrpLogDatabase = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    v14 = PoolWithTag + 2;
    v14[1] = v14;
    *v14 = v14;
  }
  ViDdiInitialized = 1;
  v6 = (int)VfAvlInitializeTree(
              &ViRemLockAvl,
              32LL,
              136LL,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0;
  v15 = &ViRemLockInitialized;
  if ( v6 )
    v15 = &ViRemLockAllocationFailures;
  _InterlockedExchange(v15, 1);
  v6 = (int)VfAvlInitializeTree(
              &ViDevObjAvl,
              336LL,
              24LL,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0;
  v16 = &ViDevObjInitialized;
  if ( v6 )
    v16 = &ViDevObjAllocationFailures;
  _InterlockedExchange(v16, 1);
  LOWORD(v21) = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViIoCallbackStateLookaside,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    8LL,
    1330202198,
    v21,
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
