/*
 * XREFs of IoInitSystemPreDrivers @ 0x1408A1BE4
 * Callers:
 *     IoInitSystem @ 0x1408A6040 (IoInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlInitializeGenericTableAvl @ 0x14006E4D0 (RtlInitializeGenericTableAvl.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     ExInitializePushLock @ 0x1400BA070 (ExInitializePushLock.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14014B690 (ExInitializeNPagedLookasideListInternal.c)
 *     KeIpiGenericCall @ 0x14016C6C0 (KeIpiGenericCall.c)
 *     IopRemoveDumpCapsuleSupport @ 0x14017E33C (IopRemoveDumpCapsuleSupport.c)
 *     IopInitializeIoRate @ 0x1401803AC (IopInitializeIoRate.c)
 *     SecureDump_PrepareForInit @ 0x140185164 (SecureDump_PrepareForInit.c)
 *     IopInitDumpCapsuleSupport @ 0x140186178 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeSystemVariableService @ 0x140186430 (IopInitializeSystemVariableService.c)
 *     VslpIumPhase4Initialize @ 0x1401866E8 (VslpIumPhase4Initialize.c)
 *     HvlPhase2Initialize @ 0x1401869A4 (HvlPhase2Initialize.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PfSnBeginBootPhase @ 0x14047892C (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x140478A90 (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x1404792DC (ExInitializeSystemLookasideList.c)
 *     RtlIsStateSeparationEnabled @ 0x140491090 (RtlIsStateSeparationEnabled.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     NtCreateEvent @ 0x1404C3A60 (NtCreateEvent.c)
 *     PoRegisterPowerSettingCallback @ 0x14051D710 (PoRegisterPowerSettingCallback.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     ExSubscribeWnfStateChange @ 0x1405751F0 (ExSubscribeWnfStateChange.c)
 *     NtQueryValueKey @ 0x14059DE50 (NtQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 *     EtwWriteStartScenario @ 0x14060C6A0 (EtwWriteStartScenario.c)
 *     TraceLoggingRegisterEx @ 0x140613338 (TraceLoggingRegisterEx.c)
 *     IoInitializeProcessor @ 0x140622290 (IoInitializeProcessor.c)
 *     EtwInitialize @ 0x1406224E0 (EtwInitialize.c)
 *     PsLocateSystemDlls @ 0x14063B20C (PsLocateSystemDlls.c)
 *     SeAuditBootConfiguration @ 0x140640FB0 (SeAuditBootConfiguration.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14064E890 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopQueryProcessorInitValues @ 0x140654D50 (IopQueryProcessorInitValues.c)
 *     CmIsStateSeparationDevModeEnabled @ 0x1406EBAC8 (CmIsStateSeparationDevModeEnabled.c)
 *     PpPagePathAssign @ 0x140726788 (PpPagePathAssign.c)
 *     HdlspKernelAddLogEntry @ 0x1408397F8 (HdlspKernelAddLogEntry.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1408989C8 (IopInitCrashDumpDuringSysInit.c)
 *     WheaInitialize @ 0x1408A29A0 (WheaInitialize.c)
 *     BootApplicationPersistentDataProcess @ 0x1408A2DC0 (BootApplicationPersistentDataProcess.c)
 *     WMIInitialize @ 0x1408A38C4 (WMIInitialize.c)
 *     KseInitialize @ 0x1408A392C (KseInitialize.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 *     SmInitSystem @ 0x1408C16B8 (SmInitSystem.c)
 *     IopInitializePassiveInterruptServices @ 0x1408C314C (IopInitializePassiveInterruptServices.c)
 *     IopCreateRootDirectories @ 0x1408C45EC (IopCreateRootDirectories.c)
 *     IopInitializeReserveIrps @ 0x1408C4968 (IopInitializeReserveIrps.c)
 *     PpLastGoodDoBootProcessing @ 0x1408C5484 (PpLastGoodDoBootProcessing.c)
 *     IopReassignSystemRoot @ 0x1408C612C (IopReassignSystemRoot.c)
 *     IopStoreArcInformation @ 0x1408C6DD0 (IopStoreArcInformation.c)
 *     PnpMarkHalDeviceNode @ 0x1408C7B78 (PnpMarkHalDeviceNode.c)
 *     KitpInitAitSampleRate @ 0x1408C7D10 (KitpInitAitSampleRate.c)
 *     PoInitDriverServices @ 0x1408C818C (PoInitDriverServices.c)
 *     IopProtectSystemPartition @ 0x1408C91B8 (IopProtectSystemPartition.c)
 *     IopInitializeSessionNotifications @ 0x1408C9B7C (IopInitializeSessionNotifications.c)
 */

char __fastcall IoInitSystemPreDrivers(_QWORD *Context)
{
  int v2; // eax
  ULONG ActiveProcessorCount; // ebx
  ULONG v4; // eax
  _DWORD *v6; // rbx
  unsigned int v7; // eax
  bool v8; // al
  unsigned int v9; // ecx
  __int64 v10; // rcx
  bool IsStateSeparationDevModeEnabled; // al
  int v12; // ecx
  KIRQL v13; // bl
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  ULONG v17; // edx
  ULONG v18; // ebx
  int SystemDlls; // eax
  _BYTE OutputBuffer[8]; // [rsp+40h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-71h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-69h] BYREF
  PVOID Object; // [rsp+58h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-29h] BYREF
  int v26; // [rsp+A0h] [rbp-19h] BYREF
  __int64 *v27; // [rsp+A8h] [rbp-11h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-9h] BYREF
  __int16 v29[6]; // [rsp+C0h] [rbp+7h] BYREF
  int v30; // [rsp+CCh] [rbp+13h]
  int v31; // [rsp+D0h] [rbp+17h]
  int v32; // [rsp+D4h] [rbp+1Bh]
  int v33; // [rsp+D8h] [rbp+1Fh]

  v26 = 0x1000000;
  OutputBuffer[0] = 0;
  v27 = IoInitSystem_deviceNameBuffer;
  ExInitializeResourceLite(&IopDriverLoadResource);
  ExInitializeResourceLite(&IopDatabaseResource);
  ExInitializeResourceLite((PERESOURCE)&IopSecurityResource);
  ExInitializeResourceLite(&IopCrashDumpLock);
  ExInitializeResourceLite(&IopLiveDumpLock);
  ExInitializePushLock(&IopFilesystemDatabaseShutdownRundown);
  qword_1403C8188 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  IopPerfIoTrackingLock = 0LL;
  qword_1403C8178 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_1403C81A8 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_1403C8198 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_1403C81C8 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_1403C81B8 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_1403C81E8 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_1403C81D8 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_1403C8208 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = (__int64)&IopFsNotifyChangeQueueHead;
  qword_1403C81F8 = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingListHead = (__int64)&IopPerfIoTrackingListHead;
  v2 = 0;
  IoStatisticsLock = 0LL;
  IopFunctionPointerLock = 0LL;
  IopDiskIoAttributionTree = 0LL;
  IopUniqueDeviceObjectNumber = 0;
  IopIrpStackProfilerFlags = 0;
  if ( !IopLargeIrpStackLocations )
  {
    IopLargeIrpStackLocations = 14;
    v2 = 1;
    IopIrpStackProfilerFlags = 1;
  }
  if ( !IopMediumIrpStackLocations )
  {
    IopMediumIrpStackLocations = 4;
    IopIrpStackProfilerFlags = v2 | 2;
  }
  if ( (unsigned int)(IopIrpCompletionTimeoutInSeconds - 2) > 0x12A )
    IopIrpCompletionTimeoutInSeconds = 300;
  IopQueryProcessorInitValues((__int64)v29);
  ExInitializeSystemLookasideList(
    (__int64)&IopCompletionLookasideList,
    512,
    56,
    544236361,
    v29[3],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopLargeIrpLookasideList,
    512,
    v32,
    1819308617,
    v29[2],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMediumIrpLookasideList,
    512,
    v31,
    1836085833,
    v29[1],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    v30,
    1936749129,
    v29[0],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMdlLookasideList,
    512,
    v33,
    543974477,
    v29[4],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeNPagedLookasideListInternal((__int64)&IopSafeCompletionLookasideList, 0LL, 0LL, 512, 32, 1934978889, 0, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideListInternal((__int64)&IopOplockFoExtLookasideList, 0LL, 0LL, 512, 48, 1950576719, 0, 0);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = 0;
  for ( ResultLength = 0; v4 < ActiveProcessorCount; ResultLength = v4 )
  {
    IoInitializeProcessor(KiProcessorBlock[v4], v29);
    v4 = ResultLength + 1;
  }
  IopErrorLogLock = 0LL;
  qword_1403C8248 = (__int64)&IopErrorLogListHead;
  IopErrorLogListHead = (__int64)&IopErrorLogListHead;
  if ( !(unsigned __int8)IopInitializeReserveIrps() )
    return 0;
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    IopIrpStackProfilerMinSizeThreshold = 400;
    IopIrpStackProfilerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)IopIrpStackProfilerDpcRoutine;
    IopIrpStackProfilerFlags |= 4u;
    IopIrpStackProfilerSampleSize = 2000;
    IopIrpStackProfilerDpc.TargetInfoAsUlong = 275;
    IopIrpStackProfilerDpc.DeferredContext = 0LL;
    IopIrpStackProfilerDpc.DpcData = 0LL;
    IopIrpStackProfilerDpc.ProcessorHistory = 0LL;
  }
  v6 = IopRevocationExtension;
  memset(IopRevocationExtension, 0, 0x58uLL);
  *v6 = 4;
  v7 = IopDiskIoAttributionBaseIoSize;
  if ( (unsigned int)IopDiskIoAttributionBaseIoSize >= 0x400000 )
  {
    v7 = 0x400000;
    IopDiskIoAttributionBaseIoSize = 0x400000;
  }
  if ( v7 <= 0x1000 )
    IopDiskIoAttributionBaseIoSize = 4096;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetServicesEventLog;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    IopErrorLogDisabledThisBoot = 1;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Start");
    v8 = NtQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           IoInitSystem_valueBuffer,
           0x20u,
           &ResultLength) < 0
      || dword_1408F26C4 != 4
      || dword_1408F26CC == 4;
    IopErrorLogDisabledThisBoot = v8;
    ObCloseHandle(KeyHandle, 0);
  }
  *(_QWORD *)&IopTimer.Header.Lock = 9LL;
  IopTimerQueueHead.Blink = &IopTimerQueueHead;
  IopTimerQueueHead.Flink = &IopTimerQueueHead;
  IopTimerLock = 0LL;
  IopTimerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)IopTimerDispatch;
  IopTimerDpc.DeferredContext = &IopTimerCount;
  IopTimer.Header.WaitListHead.Blink = &IopTimer.Header.WaitListHead;
  IopTimer.Header.WaitListHead.Flink = &IopTimer.Header.WaitListHead;
  qword_1403C8408 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_1403C8488 = (__int64)&qword_1403C8480;
  qword_1403C8480 = (__int64)&qword_1403C8480;
  qword_1403C84A8 = (__int64)&qword_1403C84A0;
  qword_1403C84A0 = (__int64)&qword_1403C84A0;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  qword_1403C84E8 = (__int64)&qword_1403C84E0;
  qword_1403C84E0 = &qword_1403C84E0;
  IopTimerDpc.TargetInfoAsUlong = 275;
  IopTimerDpc.DpcData = 0LL;
  IopTimerDpc.ProcessorHistory = 0LL;
  IopTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&IopTimer.Processor = 0LL;
  IopHardError.Parameter = 0LL;
  IopHardError.List.Flink = 0LL;
  qword_1403C8490 = 0LL;
  byte_1403C8498 = 5;
  byte_1403C849A = 8;
  dword_1403C849C = 0;
  dword_1403C84B0 = 0x7FFFFFFF;
  byte_1403C84B8 = 0;
  IopKeepAliveTracker.Parameter = 0LL;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_1403C84F0 = 0LL;
  byte_1403C8518 = 0;
  IopErrorLogSessionPending = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_EVENT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 528;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtCreateEvent(&KeyHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) < 0 )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v9 = 4;
    goto LABEL_28;
  }
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  IopLinkTrackingServiceEvent = (__int64)Object;
  IopMountCompletionEvent.Header.WaitListHead.Blink = &IopMountCompletionEvent.Header.WaitListHead;
  IopMountCompletionEvent.Header.WaitListHead.Flink = &IopMountCompletionEvent.Header.WaitListHead;
  stru_1403C85A0.Header.WaitListHead.Blink = &stru_1403C85A0.Header.WaitListHead;
  stru_1403C85A0.Header.WaitListHead.Flink = &stru_1403C85A0.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Blink = &IopLinkTrackingPortObject.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Flink = &IopLinkTrackingPortObject.Header.WaitListHead;
  LOWORD(IopMountCompletionEvent.Header.Lock) = 0;
  IopMountCompletionEvent.Header.Size = 6;
  IopMountCompletionEvent.Header.SignalState = 0;
  LOWORD(stru_1403C85A0.Header.Lock) = 0;
  stru_1403C85A0.Header.Size = 6;
  stru_1403C85A0.Header.SignalState = 0;
  LOWORD(IopLinkTrackingPortObject.Header.Lock) = 1;
  IopLinkTrackingPortObject.Header.Size = 6;
  IopLinkTrackingPortObject.Header.SignalState = 1;
  ObCloseHandle(KeyHandle, 0);
  if ( !(unsigned __int8)IopCreateRootDirectories() )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v9 = 6;
    goto LABEL_28;
  }
  if ( (int)IopInitializeSessionNotifications() < 0 )
    return 0;
  if ( (int)IopInitializePlugPlayServices(Context, 0LL) < 0 )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v9 = 7;
    goto LABEL_28;
  }
  KseInitialize(Context, 0LL);
  PoInitDriverServices();
  off_140397DF0[0]();
  PnpMarkHalDeviceNode();
  if ( !(unsigned __int8)WMIInitialize(0LL, Context) )
    return 0;
  if ( !RtlIsStateSeparationEnabled()
    || (IsStateSeparationDevModeEnabled = CmIsStateSeparationDevModeEnabled(),
        LOBYTE(v10) = 1,
        IsStateSeparationDevModeEnabled) )
  {
    LOBYTE(v10) = 0;
  }
  v12 = ExpInitializeStateSeparationPhase0(v10);
  if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073741637 )
    return 0;
  EtwInitialize(0);
  if ( EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IoTraceHandle) < 0
    || EtwRegister(&IoMgrProvider, 0LL, 0LL, &IoMgrTraceHandle) < 0 )
  {
    return 0;
  }
  SeAuditBootConfiguration(*(_QWORD *)(Context[30] + 2528LL));
  BootApplicationPersistentDataProcess(1LL);
  BapdRecordFirmwareBootStats();
  KdInitialize(2LL, 0LL, &KdpContext);
  if ( !IopErrorLogDisabledThisBoot )
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
    if ( (__int64 *)IopErrorLogListHead == &IopErrorLogListHead )
    {
      IopErrorLogSessionPending = 0;
    }
    else
    {
      IopErrorLogWorkItem.Parameter = 0LL;
      IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
      IopErrorLogWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
    }
    KxReleaseSpinLock(&IopErrorLogLock);
    __writecr8(v13);
  }
  WheaInitialize(Context, 0LL);
  if ( (int)IopStoreArcInformation(Context) < 0 )
    return 0;
  if ( (int)IopInitializePlugPlayServices(Context, 1LL) < 0 )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v9 = 8;
    goto LABEL_28;
  }
  RtlInitializeGenericTableAvl(
    &IoStatusBlockRangeTable,
    (PRTL_AVL_COMPARE_ROUTINE)IopCompareIosbRanges,
    (PRTL_AVL_ALLOCATE_ROUTINE)IopAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)IopFreeGenericTableEntry,
    0LL);
  IoStatusBlockRangeTableLock.Count = 1;
  IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Blink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
  IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Flink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
  IoStatusBlockRangeTableLock.Owner = 0LL;
  IoStatusBlockRangeTableLock.Contention = 0;
  LOWORD(IoStatusBlockRangeTableLock.Event.Header.Lock) = 1;
  IoStatusBlockRangeTableLock.Event.Header.Size = 6;
  IoStatusBlockRangeTableLock.Event.Header.SignalState = 0;
  KitpInitAitSampleRate(Context);
  if ( EtwRegister(&MS_Windows_AIT_Provider, 0LL, 0LL, &KitEtwHandle) < 0 )
    KitEtwHandle = 0LL;
  KseInitialize(Context, 1LL);
  if ( HvlPhase2Initialize((__int64)Context) < 0 )
    return 0;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KeOptimizeSpecCtrlSettings, 0LL);
  VslpIumPhase4Initialize();
  if ( PnpEtwHandle )
    EtwWriteStartScenario((PVOID *)PnpEtwHandle, &KMPnPEvt_DriverInitPhase_Start, &PnpDriverInitPhaseActivityId, 0, 0LL);
  LOWORD(ActiveConnectListLock.Header.Lock) = 1;
  qword_1403C7CE8 = (__int64)&ActiveConnectList;
  ActiveConnectList = (__int64)&ActiveConnectList;
  ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.Size = 6;
  ActiveConnectListLock.Header.SignalState = 1;
  if ( (int)IopInitializePassiveInterruptServices() < 0 )
    return 0;
  SecureDump_PrepareForInit(v14, OutputBuffer);
  if ( ForceDumpDisabled || OutputBuffer[0] )
    CapsuleDumpAllowed = 0;
  else
    IopInitDumpCapsuleSupport();
  IopInitializeIoRate(v16, v15);
  if ( !(unsigned int)IopInitializeBootDrivers(Context) )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v9 = 9;
    goto LABEL_28;
  }
  if ( !(unsigned __int8)PoInitSystem(2LL, Context) )
    KeBugCheck(0xA0u);
  SmInitSystem(1LL);
  EtwInitialize(1u);
  BootApplicationPersistentDataProcess(2LL);
  if ( VslVsmEnabled && NtPowerInformation(PlatformInformation, 0LL, 0, OutputBuffer, 1u) >= 0 && OutputBuffer[0] )
  {
    ExSubscribeWnfStateChange(
      (__int64)&VslpIumCsWnfSubscription,
      (__int64)&WNF_PO_SCENARIO_CHANGE,
      1,
      0,
      (__int64)VslpConnectedStandbyWnfCallback,
      0LL);
    PoRegisterPowerSettingCallback(
      0LL,
      &GUID_LOW_POWER_EPOCH,
      (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
      0LL,
      0LL);
    PoRegisterPowerSettingCallback(
      0LL,
      &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
      (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
      0LL,
      0LL);
  }
  IopInitializeSystemVariableService();
  if ( !ForceDumpDisabled )
  {
    EtwRegister(&LiveDumpProvGuid, (PETWENABLECALLBACK)IopLiveDumpTracingControlCallback, 0LL, &IopLiveDumpEtwRegHandle);
    TraceLoggingRegisterEx(&stru_1403983C0, 0LL, 0LL);
  }
  if ( (int)IopInitCrashDumpDuringSysInit((__int64)Context, v17) >= 0 )
    IopRemoveDumpCapsuleSupport();
  if ( !RtlIsStateSeparationEnabled() )
    PpLastGoodDoBootProcessing();
  v18 = NtGlobalFlag;
  NtGlobalFlag |= 0x40000u;
  SystemDlls = PsLocateSystemDlls();
  NtGlobalFlag = v18;
  if ( SystemDlls < 0 )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v9 = 10;
    goto LABEL_28;
  }
  PfSnBeginBootPhase(0);
  if ( !(unsigned __int8)IopReassignSystemRoot(Context, &v26) )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v9 = 12;
    goto LABEL_28;
  }
  if ( !(unsigned __int8)IopProtectSystemPartition(Context) )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v9 = 13;
LABEL_28:
    HdlspKernelAddLogEntry(v9, 0LL);
    return 0;
  }
  if ( NtVhdBootFile )
  {
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)PsLoadedModuleList + 72);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenFile(&KeyHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0) >= 0 )
    {
      if ( ObReferenceObjectByHandle(KeyHandle, 0x80u, 0LL, 0, &Object, 0LL) >= 0 )
      {
        PpPagePathAssign((struct _FILE_OBJECT *)Object);
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      }
      ZwClose(KeyHandle);
    }
  }
  if ( !(unsigned __int8)WMIInitialize(1LL, 0LL) )
    return 0;
  WheaInitialize(Context, 1LL);
  return 1;
}
