/*
 * XREFs of VfInitVerifierComponents @ 0x1407A7380
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1407A7248 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x1408353DC (VfInitBootDriversLoaded.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     VfAvlInitializeTree @ 0x140278144 (VfAvlInitializeTree.c)
 *     ExSetPoolFlags @ 0x1402848EC (ExSetPoolFlags.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     VfHalVerifierInitialize @ 0x1407AC230 (VfHalVerifierInitialize.c)
 *     VfPendingCheckForChanges @ 0x1407B37E4 (VfPendingCheckForChanges.c)
 *     VfMajorRegisterHandlers @ 0x1407B50E8 (VfMajorRegisterHandlers.c)
 *     VfPoolInitPhase0 @ 0x1407B7714 (VfPoolInitPhase0.c)
 *     VfFaultsInitPhase0 @ 0x1407B7990 (VfFaultsInitPhase0.c)
 *     VfKeCheckForChanges @ 0x1407B9F30 (VfKeCheckForChanges.c)
 *     VfDeadlockInitialize @ 0x1407BB248 (VfDeadlockInitialize.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x1407BDC6C (VfSettingsApplyMiscellaneousChecks.c)
 *     ViSettingsIoCheckForChanges @ 0x1407BDE1C (ViSettingsIoCheckForChanges.c)
 *     VfWdInit @ 0x1407BE370 (VfWdInit.c)
 *     VfCtxInit @ 0x1407C1644 (VfCtxInit.c)
 */

__int64 __fastcall VfInitVerifierComponents(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _QWORD *PoolWithTag; // rax
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 result; // rax
  __int16 v15; // [rsp+30h] [rbp-68h]
  int v16; // [rsp+30h] [rbp-68h]
  int v17; // [rsp+30h] [rbp-68h]
  int v18; // [rsp+30h] [rbp-68h]

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
  VfPoolInitPhase0();
  VfFaultsInitPhase0();
  if ( (int)VfAvlInitializeTree(
              &ViLookasideAvl,
              96LL,
              0LL,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0 )
    _InterlockedExchange(&ViLookasideAllocationFailures, 1);
  else
    _InterlockedExchange(&ViLookasideInitialized, 1);
  v15 = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViSessionDataLookaside,
    0,
    (int)VfUtilFreePoolDispatchLevel,
    512,
    2600LL,
    1936749129,
    v15,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  _InterlockedExchange(&ViSessionDataInitialized, 1);
  LOWORD(v16) = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViPacketLookaside,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    256LL,
    1953526345,
    v16,
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
  LOWORD(v17) = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViIrpCallDriverDataList,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    192LL,
    1131442761,
    v17,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  memset(&ViMajorVerifierRoutines, 0, 0xB40uLL);
  LOBYTE(v8) = 27;
  VfMajorRegisterHandlers(
    v8,
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
  LOBYTE(v9) = 22;
  VfMajorRegisterHandlers(
    v9,
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
  LOBYTE(v10) = 23;
  VfMajorRegisterHandlers(
    v10,
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
  LOBYTE(v11) = -1;
  VfMajorRegisterHandlers(
    v11,
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
  v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64496656u);
  ViIrpLogDatabase = (__int64)v12;
  if ( v12 )
  {
    *v12 = 0;
    v13 = v12 + 2;
    v13[1] = v13;
    *v13 = v13;
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
  LOWORD(v18) = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViIoCallbackStateLookaside,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    8LL,
    1330202198,
    v18,
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
