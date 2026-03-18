/*
 * XREFs of DriverEntry @ 0x1C00ACE60
 * Callers:
 *     GsDriverEntry @ 0x1C00ACE40 (GsDriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     AcpiDiagOverrideAttribute @ 0x1C0041184 (AcpiDiagOverrideAttribute.c)
 *     AcpiInitializeExternalResourceTranslation @ 0x1C0093724 (AcpiInitializeExternalResourceTranslation.c)
 *     WppInitKm @ 0x1C0093758 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C00937F0 (WppLoadTracingSupport.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00AB560 (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00AB858 (ACPIInitReadRegistryKeys.c)
 *     ACPIInitGetEmOverride @ 0x1C00ABA68 (ACPIInitGetEmOverride.c)
 *     AcpiDiagInitialize @ 0x1C00ABBD8 (AcpiDiagInitialize.c)
 *     ACPIGlobalInitialize @ 0x1C00ABCB0 (ACPIGlobalInitialize.c)
 *     ACPIInitializeWorker @ 0x1C00AD6B8 (ACPIInitializeWorker.c)
 *     Simulator_InitializeInterface @ 0x1C00AD7E0 (Simulator_InitializeInterface.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v4; // rax
  int v5; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp-48h] BYREF
  _BYTE SystemInformation[16]; // [rsp+48h] [rbp-40h] BYREF

  WPP_MAIN_CB.Timer = (_IO_TIMER *)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_AcpiTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  AcpiOverrideAttributes = 0;
  AcpiRetainDebugDeviceInD0 = 0;
  ACPIInitGetEmOverride();
  ACPIInitReadRegistryKeys();
  ACPIInitGetPlatformOverrides();
  if ( (AcpiOverrideAttributes & 0x10000) != 0 )
    Simulator_InitializeInterface();
  AcpiRegistryPath.Length = 0;
  v4 = (unsigned __int16)(RegistryPath->Length + 2);
  AcpiDriverObject = DriverObject;
  AcpiRegistryPath.MaximumLength = v4;
  AcpiRegistryPath.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, RegistryPath->Length + 2LL, 0x4D706341u);
  if ( AcpiRegistryPath.Buffer )
    RtlCopyUnicodeString(&AcpiRegistryPath, RegistryPath);
  else
    AcpiRegistryPath.MaximumLength = 0;
  KeInitializeDpc(&AcpiPowerDpc, (PKDEFERRED_ROUTINE)ACPIDevicePowerDpc, 0LL);
  KeInitializeDpc(&AcpiBuildDpc, (PKDEFERRED_ROUTINE)ACPIBuildDeviceDpc, 0LL);
  KeInitializeDpc(&AcpiGpeDpc, (PKDEFERRED_ROUTINE)ACPIInterruptDispatchEventDpc, 0LL);
  KeInitializeTimer(&AcpiGpeTimer);
  KeInitializeSpinLock(&AcpiDeviceTreeLock);
  KeInitializeSpinLock(&AcpiPowerLock);
  KeInitializeSpinLock(&AcpiPowerQueueLock);
  KeInitializeSpinLock(&AcpiBuildQueueLock);
  KeInitializeSpinLock(&AcpiThermalLock);
  KeInitializeSpinLock(&AcpiThermalConstraintLock);
  KeInitializeSpinLock(&AcpiFanLock);
  KeInitializeSpinLock(&AcpiButtonLock);
  KeInitializeSpinLock(&AcpiGetLock);
  KeInitializeSpinLock(&AcpiPm1EnableRegisterLock);
  AcpiOpRegionLock.Count = 1;
  AcpiOpRegionLock.Owner = 0LL;
  AcpiOpRegionLock.Contention = 0;
  KeInitializeEvent(&AcpiOpRegionLock.Event, SynchronizationEvent, 0);
  ExInitializeResourceLite(&PciRouteInterfaceLock);
  qword_1C0076F98 = (__int64)&AcpiPowerDelayedQueueList;
  AcpiPowerDelayedQueueList = (__int64)&AcpiPowerDelayedQueueList;
  qword_1C0076FA8 = (__int64)&AcpiPowerQueueList;
  AcpiPowerQueueList = (__int64)&AcpiPowerQueueList;
  qword_1C0076FB8 = (__int64)&AcpiPowerBlockedOnDependencyList;
  AcpiPowerBlockedOnDependencyList = (__int64)&AcpiPowerBlockedOnDependencyList;
  qword_1C0076FC8 = (__int64)&AcpiPowerBlockedOnPhase3List;
  AcpiPowerBlockedOnPhase3List = (__int64)&AcpiPowerBlockedOnPhase3List;
  qword_1C0076FD8 = (__int64)&AcpiPowerPhase0List;
  AcpiPowerPhase0List = (PSLIST_ENTRY)&AcpiPowerPhase0List;
  qword_1C0076FE8 = (__int64)&AcpiPowerPhase1List;
  AcpiPowerPhase1List = (__int64)&AcpiPowerPhase1List;
  qword_1C0076FF8 = (__int64)&AcpiPowerPhase2List;
  AcpiPowerPhase2List = (__int64)&AcpiPowerPhase2List;
  qword_1C0077008 = (__int64)&AcpiPowerPhase3List;
  AcpiPowerPhase3List = (__int64)&AcpiPowerPhase3List;
  qword_1C0077018 = (__int64)&AcpiPowerPhase4List;
  AcpiPowerPhase4List = (PSLIST_ENTRY)&AcpiPowerPhase4List;
  qword_1C0077028 = (__int64)&AcpiPowerPhase5List;
  AcpiPowerPhase5List = (PSLIST_ENTRY)&AcpiPowerPhase5List;
  qword_1C0077038 = (__int64)&AcpiPowerWaitWakeList;
  AcpiPowerWaitWakeList = (__int64)&AcpiPowerWaitWakeList;
  qword_1C0076888 = (__int64)&AcpiPowerWaitWakeInterruptList;
  AcpiPowerWaitWakeInterruptList = (__int64)&AcpiPowerWaitWakeInterruptList;
  qword_1C0077048 = (__int64)&AcpiPowerSynchronizeList;
  AcpiPowerSynchronizeList = (__int64)&AcpiPowerSynchronizeList;
  AcpiPowerDpcFlags = 0;
  qword_1C0077058 = (__int64)&AcpiPowerNodeList;
  AcpiPowerNodeList = (__int64)&AcpiPowerNodeList;
  qword_1C0077068 = (__int64)&AcpiDevicesWhichMightNeedEnumerationList;
  AcpiDevicesWhichMightNeedEnumerationList = (__int64)&AcpiDevicesWhichMightNeedEnumerationList;
  qword_1C00772B8 = (__int64)&AcpiBuildQueueList;
  AcpiBuildQueueList = (__int64)&AcpiBuildQueueList;
  qword_1C0077348 = (__int64)&AcpiBuildDeviceList;
  AcpiBuildDeviceList = (__int64)&AcpiBuildDeviceList;
  qword_1C00772C8 = (__int64)&AcpiBuildDelayedDependencyList;
  AcpiBuildDelayedDependencyList = (__int64)&AcpiBuildDelayedDependencyList;
  qword_1C00772D8 = (__int64)&AcpiBuildOperationRegionList;
  AcpiBuildOperationRegionList = (__int64)&AcpiBuildOperationRegionList;
  qword_1C00772E8 = (__int64)&AcpiBuildPowerResourceList;
  AcpiBuildPowerResourceList = (__int64)&AcpiBuildPowerResourceList;
  qword_1C00772F8 = (__int64)&AcpiBuildRunMethodList;
  AcpiBuildRunMethodList = (__int64)&AcpiBuildRunMethodList;
  qword_1C0077308 = (__int64)&AcpiBuildSpecialSynchronizationList;
  AcpiBuildSpecialSynchronizationList = (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList;
  qword_1C0077318 = (__int64)&AcpiBuildSynchronizationList;
  AcpiBuildSynchronizationList = (PSLIST_ENTRY)&AcpiBuildSynchronizationList;
  qword_1C0077328 = (__int64)&AcpiBuildThermalZoneList;
  AcpiBuildThermalZoneList = (__int64)&AcpiBuildThermalZoneList;
  qword_1C0077248 = (__int64)&AcpiUnresolvedEjectList;
  AcpiUnresolvedEjectList = (__int64)&AcpiUnresolvedEjectList;
  qword_1C0076908 = (__int64)&AcpiThermalList;
  AcpiThermalList = (__int64)&AcpiThermalList;
  qword_1C0076938 = (__int64)&AcpiThermalClientList;
  AcpiThermalClientList = (__int64)&AcpiThermalClientList;
  qword_1C0076918 = (__int64)&AcpiThermalUnclaimedConstraintList;
  AcpiThermalUnclaimedConstraintList = (__int64)&AcpiThermalUnclaimedConstraintList;
  qword_1C0076948 = (__int64)&AcpiThermalZoneList;
  AcpiThermalZoneList = (__int64)&AcpiThermalZoneList;
  qword_1C0076E58 = (__int64)&AcpiFanList;
  AcpiFanList = (__int64)&AcpiFanList;
  qword_1C0077238 = (__int64)&AcpiButtonList;
  AcpiButtonList = (__int64)&AcpiButtonList;
  qword_1C0077568 = (__int64)&AcpiGetListEntry;
  AcpiGetListEntry = (__int64)&AcpiGetListEntry;
  qword_1C0076A48 = (__int64)&AcpiOpRegionHandlerList;
  AcpiOpRegionHandlerList = (__int64)&AcpiOpRegionHandlerList;
  qword_1C0076E18 = (__int64)&AcpiIgnoreResourceMapValidationList;
  AcpiIgnoreResourceMapValidationList = (__int64)&AcpiIgnoreResourceMapValidationList;
  qword_1C00769D8 = (__int64)&AcpiProcessorContainerRootList;
  AcpiProcessorContainerRootList = (__int64)&AcpiProcessorContainerRootList;
  AcpiPowerCurrentPagingPathTransitions = 0;
  AcpiBuildDpcFlags = 0;
  AcpiBuildFixedButtonEnumerated = 0;
  AcpiFatalOutstanding = 0;
  AcpiGpeDpcRunning = 0;
  AcpiGpeDpcScheduled = 0;
  AcpiGpeWorkDone = 0;
  AcpiRegisteredOpRegionMask = 0;
  BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) = 0;
  ExInitializeNPagedLookasideList(&BuildRequestLookAsideList, 0LL, 0LL, 0x200u, 0x88uLL, 0x44706341u, 0x1Eu);
  ExInitializeNPagedLookasideList(
    (PNPAGED_LOOKASIDE_LIST)&RequestLookAsideList,
    0LL,
    0LL,
    0x200u,
    0x108uLL,
    0x50706341u,
    0x3Eu);
  ExInitializeNPagedLookasideList(&DeviceExtensionLookAsideList, 0LL, 0LL, 0x200u, 0x3C0uLL, 0x44706341u, 0x40u);
  ExInitializeNPagedLookasideList(&RequestDependencyLookAsideList, 0LL, 0LL, 0x200u, 0x20uLL, 0x44706341u, 0x32u);
  ExInitializeNPagedLookasideList(&ObjectDataLookAsideList, 0LL, 0LL, 0x200u, 0x28uLL, 0x4F706341u, 0x66u);
  ExInitializeNPagedLookasideList(&XswContextLookAsideList, 0LL, 0LL, 0x200u, 0x30uLL, 0x50706341u, 0x10u);
  ExInitializeNPagedLookasideList(&WakeInterruptLookAsideList, 0LL, 0LL, 0x200u, 0x60uLL, 0x50706341u, 0x10u);
  ExInitializeNPagedLookasideList(&NotificationContextLookAsideList, 0LL, 0LL, 0x200u, 0x18uLL, 0x4D706341u, 0x10u);
  KeInitializeSpinLock(&gPreAllocPciPoolSpinLock);
  memset(gPreAllocPciPool, 0, 0x240uLL);
  KeInitializeSpinLock(&gBBNResultCacheLock);
  qword_1C0076D38 = (__int64)&gBBNResultCacheListHead;
  gBBNResultCacheListHead = (__int64)&gBBNResultCacheListHead;
  ACPIInitializeWorker();
  DriverObject->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ACPIDispatchAddDevice;
  memset64(DriverObject->MajorFunction, (unsigned __int64)ACPIDispatchIrp, 0x1CuLL);
  DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))ACPIUnload;
  memset(&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0, 0xE0uLL);
  WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = 224;
  *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = ACPIFilterFastIoDetachCallback;
  DriverObject->FastIoDispatch = (_FAST_IO_DISPATCH *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  AcpiDiagInitialize();
  v5 = AcpiOverrideAttributes;
  if ( (AcpiOverrideAttributes & 4) != 0 )
  {
    AcpiDiagOverrideAttribute(0);
    v5 = AcpiOverrideAttributes;
  }
  if ( (v5 & 0x10) != 0 )
  {
    AcpiDiagOverrideAttribute(1);
    v5 = AcpiOverrideAttributes;
  }
  if ( (v5 & 0x20) != 0 )
  {
    AcpiDiagOverrideAttribute(2);
    v5 = AcpiOverrideAttributes;
  }
  if ( (v5 & 0x40) != 0 )
  {
    AcpiDiagOverrideAttribute(3);
    v5 = AcpiOverrideAttributes;
  }
  if ( (v5 & 0x80u) != 0 )
  {
    AcpiDiagOverrideAttribute(4);
    v5 = AcpiOverrideAttributes;
  }
  if ( (v5 & 0x1000) != 0 )
  {
    AcpiDiagOverrideAttribute(5);
    v5 = AcpiOverrideAttributes;
  }
  if ( (v5 & 0x8000) != 0 )
  {
    AcpiDiagOverrideAttribute(6);
    v5 = AcpiOverrideAttributes;
  }
  if ( (v5 & 0x80000) != 0 )
  {
    AcpiDiagOverrideAttribute(7);
    v5 = AcpiOverrideAttributes;
  }
  if ( (v5 & 0x100000) != 0 )
  {
    AcpiDiagOverrideAttribute(8);
    v5 = AcpiOverrideAttributes;
  }
  if ( (v5 & 0x200000) != 0 )
  {
    AcpiDiagOverrideAttribute(9);
    v5 = AcpiOverrideAttributes;
  }
  if ( (v5 & 0x400000) != 0 )
    AcpiDiagOverrideAttribute(10);
  ACPIGlobalInitialize();
  AcpiInitializeExternalResourceTranslation(DriverObject);
  qword_1C0077088 = (__int64)&AcpiDeviceFirmwareLockHandlerList;
  AcpiDeviceFirmwareLockHandlerList = (__int64)&AcpiDeviceFirmwareLockHandlerList;
  KeInitializeSpinLock(&AcpiDeviceFirmwareLockGlobalLock);
  LOBYTE(WPP_MAIN_CB.Queue.ListEntry.Flink) = 0;
  IoRegisterBootDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)BootCompleteCallback, &AcpiRegistryPath);
  if ( ZwQuerySystemInformation(SystemRegistryQuotaInformation|0x80, SystemInformation, 0x10u, &ReturnLength) >= 0 )
    BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) = SystemInformation[0] & 1;
  return 0;
}
