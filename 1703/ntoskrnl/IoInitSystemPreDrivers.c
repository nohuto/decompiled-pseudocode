/*
 * XREFs of IoInitSystemPreDrivers @ 0x1407FD20C
 * Callers:
 *     IoInitSystem @ 0x140809ED0 (IoInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     RtlInitializeGenericTableAvl @ 0x14004D3E0 (RtlInitializeGenericTableAvl.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140134F20 (ExInitializeNPagedLookasideListInternal.c)
 *     KeIpiGenericCall @ 0x140147FF0 (KeIpiGenericCall.c)
 *     IopInitDumpCapsuleSupport @ 0x140159548 (IopInitDumpCapsuleSupport.c)
 *     IopRemoveDumpCapsuleSupport @ 0x14015A054 (IopRemoveDumpCapsuleSupport.c)
 *     SecureDump_PrepareForInit @ 0x14015A094 (SecureDump_PrepareForInit.c)
 *     IopInitializeIoRate @ 0x140162774 (IopInitializeIoRate.c)
 *     VslpIumPhase4Initialize @ 0x140167AFC (VslpIumPhase4Initialize.c)
 *     IopInitializeSystemVariableService @ 0x140167C00 (IopInitializeSystemVariableService.c)
 *     HvlPhase2Initialize @ 0x140168040 (HvlPhase2Initialize.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 *     KeBugCheck @ 0x140181870 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PfSnBeginBootPhase @ 0x140404E20 (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x14040ECB0 (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x14040F89C (ExInitializeSystemLookasideList.c)
 *     ExSubscribeWnfStateChange @ 0x14045BC80 (ExSubscribeWnfStateChange.c)
 *     PoRegisterPowerSettingCallback @ 0x1404C2C70 (PoRegisterPowerSettingCallback.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     NtQueryValueKey @ 0x1405074B0 (NtQueryValueKey.c)
 *     NtCreateEvent @ 0x14050D940 (NtCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     EtwWriteStartScenario @ 0x140586140 (EtwWriteStartScenario.c)
 *     TraceLoggingRegisterEx @ 0x14058919C (TraceLoggingRegisterEx.c)
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 *     EtwInitialize @ 0x14059E53C (EtwInitialize.c)
 *     IoInitializeProcessor @ 0x14059E91C (IoInitializeProcessor.c)
 *     SeAuditBootConfiguration @ 0x1405AB4EC (SeAuditBootConfiguration.c)
 *     PsLocateSystemDlls @ 0x1405B8A04 (PsLocateSystemDlls.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1405D19E0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopQueryProcessorInitValues @ 0x1405D5334 (IopQueryProcessorInitValues.c)
 *     PpPagePathAssign @ 0x140694D08 (PpPagePathAssign.c)
 *     HdlspKernelAddLogEntry @ 0x14078ECDC (HdlspKernelAddLogEntry.c)
 *     IopStoreArcInformation @ 0x1407F8A30 (IopStoreArcInformation.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 *     KseInitialize @ 0x1407FBB98 (KseInitialize.c)
 *     WMIInitialize @ 0x1407FBEA0 (WMIInitialize.c)
 *     WheaInitialize @ 0x1407FC324 (WheaInitialize.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 *     PpLastGoodDoBootProcessing @ 0x14080CBD0 (PpLastGoodDoBootProcessing.c)
 *     BootApplicationPersistentDataProcess @ 0x140811C0C (BootApplicationPersistentDataProcess.c)
 *     KitpInitAitSampleRate @ 0x140812C98 (KitpInitAitSampleRate.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1408137A4 (IopInitCrashDumpDuringSysInit.c)
 *     SmInitSystem @ 0x14081FACC (SmInitSystem.c)
 *     IopCreateRootDirectories @ 0x140820A80 (IopCreateRootDirectories.c)
 *     IopInitializePassiveInterruptServices @ 0x140820B54 (IopInitializePassiveInterruptServices.c)
 *     IopReassignSystemRoot @ 0x14082144C (IopReassignSystemRoot.c)
 *     IopInitializeReserveIrps @ 0x140821E04 (IopInitializeReserveIrps.c)
 *     PnpMarkHalDeviceNode @ 0x140824460 (PnpMarkHalDeviceNode.c)
 *     PoInitDriverServices @ 0x140824A6C (PoInitDriverServices.c)
 *     IopProtectSystemPartition @ 0x140825828 (IopProtectSystemPartition.c)
 *     IopInitializeSessionNotifications @ 0x140826210 (IopInitializeSessionNotifications.c)
 */

char __fastcall IoInitSystemPreDrivers(_QWORD *Context)
{
  int v2; // eax
  ULONG ActiveProcessorCount; // ebx
  ULONG v4; // eax
  _DWORD *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  KIRQL v9; // bl
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  ULONG v13; // ebx
  int SystemDlls; // eax
  _BYTE OutputBuffer[8]; // [rsp+48h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-61h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-59h] BYREF
  PVOID Object; // [rsp+60h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-19h] BYREF
  int v21; // [rsp+A8h] [rbp-9h] BYREF
  __int64 *v22; // [rsp+B0h] [rbp-1h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp+7h] BYREF
  __int16 v24[6]; // [rsp+C8h] [rbp+17h] BYREF
  int v25; // [rsp+D4h] [rbp+23h]
  int v26; // [rsp+D8h] [rbp+27h]
  int v27; // [rsp+DCh] [rbp+2Bh]
  int v28; // [rsp+E0h] [rbp+2Fh]

  v21 = 0x1000000;
  OutputBuffer[0] = 0;
  v22 = IoInitSystem_deviceNameBuffer;
  ExInitializeResourceLite(&IopDriverLoadResource);
  ExInitializeResourceLite(&IopDatabaseResource);
  ExInitializeResourceLite((PERESOURCE)&IopSecurityResource);
  ExInitializeResourceLite(&IopCrashDumpLock);
  ExInitializeResourceLite(&IopLiveDumpLock);
  ExInitializePushLock(&IopFilesystemDatabaseShutdownRundown);
  qword_140368D78 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  IopPerfIoTrackingLock = 0LL;
  qword_140368D88 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_140368D98 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_140368DA8 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_140368DB8 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_140368DC8 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_140368DD8 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_140368DE8 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_140368DF8 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = (__int64)&IopFsNotifyChangeQueueHead;
  qword_140368E08 = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingListHead = (__int64)&IopPerfIoTrackingListHead;
  v2 = 0;
  IopIrpStackProfilerFlags = 0;
  IoStatisticsLock = 0LL;
  IopFunctionPointerLock = 0LL;
  IopDiskIoAttributionTree = 0LL;
  IopUniqueDeviceObjectNumber = 0;
  if ( !IopLargeIrpStackLocations )
  {
    v2 = 1;
    IopLargeIrpStackLocations = 14;
    IopIrpStackProfilerFlags = 1;
  }
  if ( !IopMediumIrpStackLocations )
  {
    IopMediumIrpStackLocations = 4;
    IopIrpStackProfilerFlags = v2 | 2;
  }
  if ( (unsigned int)(IopIrpCompletionTimeoutInSeconds - 2) > 0x12A )
    IopIrpCompletionTimeoutInSeconds = 300;
  IopQueryProcessorInitValues((__int64)v24);
  ExInitializeSystemLookasideList(
    (__int64)&IopCompletionLookasideList,
    512,
    56,
    544236361,
    v24[3],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopLargeIrpLookasideList,
    512,
    v27,
    1819308617,
    v24[2],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMediumIrpLookasideList,
    512,
    v26,
    1836085833,
    v24[1],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    v25,
    1936749129,
    v24[0],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMdlLookasideList,
    512,
    v28,
    543974477,
    v24[4],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeNPagedLookasideListInternal((__int64)&IopSafeCompletionLookasideList, 0LL, 0LL, 512, 32, 1934978889, 0, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideListInternal((__int64)&IopOplockFoExtLookasideList, 0LL, 0LL, 512, 48, 1950576719, 0, 0);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = 0;
  for ( ResultLength = 0; v4 < ActiveProcessorCount; ResultLength = v4 )
  {
    IoInitializeProcessor(KiProcessorBlock[v4], v24);
    v4 = ResultLength + 1;
  }
  IopErrorLogLock = 0LL;
  qword_140368E48 = (__int64)&IopErrorLogListHead;
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
  memset(IopRevocationExtension, 0, 0x50uLL);
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
    IopErrorLogDisabledThisBoot = NtQueryValueKey(
                                    KeyHandle,
                                    &DestinationString,
                                    KeyValuePartialInformation,
                                    IoInitSystem_valueBuffer,
                                    0x20u,
                                    &ResultLength) < 0
                               || dword_1407C5634 != 4
                               || dword_1407C563C == 4;
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
  qword_140369048 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_140369088 = (__int64)&qword_140369080;
  qword_140369080 = (__int64)&qword_140369080;
  qword_1403690A8 = (__int64)&qword_1403690A0;
  qword_1403690A0 = (__int64)&qword_1403690A0;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  qword_1403690E8 = (__int64)&qword_1403690E0;
  qword_1403690E0 = &qword_1403690E0;
  IopTimerDpc.TargetInfoAsUlong = 275;
  IopTimerDpc.DpcData = 0LL;
  IopTimerDpc.ProcessorHistory = 0LL;
  IopTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&IopTimer.Processor = 0LL;
  IopHardError.Parameter = 0LL;
  IopHardError.List.Flink = 0LL;
  qword_140369090 = 0LL;
  byte_140369098 = 5;
  byte_14036909A = 8;
  dword_14036909C = 0;
  dword_1403690B0 = 0x7FFFFFFF;
  byte_1403690B8 = 0;
  IopKeepAliveTracker.Parameter = 0LL;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_1403690F0 = 0LL;
  byte_140369118 = 0;
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
    v8 = 4;
    goto LABEL_28;
  }
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  IopLinkTrackingServiceEvent = (__int64)Object;
  IopMountCompletionEvent.Header.WaitListHead.Blink = &IopMountCompletionEvent.Header.WaitListHead;
  IopMountCompletionEvent.Header.WaitListHead.Flink = &IopMountCompletionEvent.Header.WaitListHead;
  stru_140369180.Header.WaitListHead.Blink = &stru_140369180.Header.WaitListHead;
  stru_140369180.Header.WaitListHead.Flink = &stru_140369180.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Blink = &IopLinkTrackingPortObject.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Flink = &IopLinkTrackingPortObject.Header.WaitListHead;
  LOWORD(IopMountCompletionEvent.Header.Lock) = 0;
  IopMountCompletionEvent.Header.Size = 6;
  IopMountCompletionEvent.Header.SignalState = 0;
  LOWORD(stru_140369180.Header.Lock) = 0;
  stru_140369180.Header.Size = 6;
  stru_140369180.Header.SignalState = 0;
  LOWORD(IopLinkTrackingPortObject.Header.Lock) = 1;
  IopLinkTrackingPortObject.Header.Size = 6;
  IopLinkTrackingPortObject.Header.SignalState = 1;
  ObCloseHandle(KeyHandle, 0);
  if ( !(unsigned __int8)IopCreateRootDirectories() )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v8 = 6;
    goto LABEL_28;
  }
  if ( (int)IopInitializeSessionNotifications() < 0 )
    return 0;
  if ( IopInitializePlugPlayServices((__int64)Context, 0LL) < 0 )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v8 = 7;
    goto LABEL_28;
  }
  KseInitialize((__int64)Context, 0);
  PoInitDriverServices();
  off_14033C770[0]();
  PnpMarkHalDeviceNode();
  if ( !WMIInitialize(0, (__int64)Context) )
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
    v9 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
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
    __writecr8(v9);
  }
  WheaInitialize((__int64)Context, 0);
  if ( (int)IopStoreArcInformation((__int64)Context) < 0 )
    return 0;
  if ( IopInitializePlugPlayServices((__int64)Context, 1LL) < 0 )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v8 = 8;
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
  KseInitialize((__int64)Context, 1);
  if ( HvlPhase2Initialize((__int64)Context) < 0 )
    return 0;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KeOptimizeSpecCtrlSettings, 0LL);
  VslpIumPhase4Initialize();
  if ( PnpEtwHandle )
    EtwWriteStartScenario(
      (ULONG_PTR *)PnpEtwHandle,
      &KMPnPEvt_DriverInitPhase_Start,
      &PnpDriverInitPhaseActivityId,
      0,
      0LL);
  LOWORD(ActiveConnectListLock.Header.Lock) = 1;
  qword_140368828 = (__int64)&ActiveConnectList;
  ActiveConnectList = (__int64)&ActiveConnectList;
  ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.Size = 6;
  ActiveConnectListLock.Header.SignalState = 1;
  if ( (int)IopInitializePassiveInterruptServices() < 0 )
    return 0;
  SecureDump_PrepareForInit(v10, OutputBuffer);
  if ( ForceDumpDisabled || OutputBuffer[0] )
    CapsuleDumpAllowed = 0;
  else
    IopInitDumpCapsuleSupport();
  IopInitializeIoRate(v12, v11);
  if ( !(unsigned int)IopInitializeBootDrivers((__int64)Context) )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v8 = 9;
    goto LABEL_28;
  }
  if ( !(unsigned __int8)PoInitSystem(2LL, Context) )
    KeBugCheck(0xA0u);
  SmInitSystem(1LL);
  EtwInitialize(1u);
  if ( VslVsmEnabled && NtPowerInformation(PlatformInformation, 0LL, 0, OutputBuffer, 1u) >= 0 && OutputBuffer[0] )
  {
    ExSubscribeWnfStateChange(
      (int)&VslpIumCsWnfSubscription,
      (int)&WNF_PO_SCENARIO_CHANGE,
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
    TraceLoggingRegisterEx(&stru_14033C990, 0LL, 0LL);
  }
  if ( (int)IopInitCrashDumpDuringSysInit(Context) >= 0 )
    IopRemoveDumpCapsuleSupport();
  PpLastGoodDoBootProcessing();
  v13 = NtGlobalFlag;
  NtGlobalFlag |= 0x40000u;
  SystemDlls = PsLocateSystemDlls();
  NtGlobalFlag = v13;
  if ( SystemDlls < 0 )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v8 = 10;
    goto LABEL_28;
  }
  PfSnBeginBootPhase(0);
  if ( !(unsigned __int8)IopReassignSystemRoot(Context, &v21) )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v8 = 12;
    goto LABEL_28;
  }
  if ( !(unsigned __int8)IopProtectSystemPartition(Context) )
  {
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0;
    v8 = 13;
LABEL_28:
    HdlspKernelAddLogEntry(v8, 0LL);
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
  if ( !WMIInitialize(1, 0LL) )
    return 0;
  WheaInitialize((__int64)Context, 1u);
  return 1;
}
