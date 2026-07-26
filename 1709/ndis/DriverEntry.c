/*
 * XREFs of DriverEntry @ 0x1C011A0D0
 * Callers:
 *     GsDriverEntry @ 0x1C011A010 (GsDriverEntry.c)
 * Callees:
 *     NdisAllocateNetBufferListPool @ 0x1C001AC70 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocatePacketPoolEx @ 0x1C0020AD0 (NdisAllocatePacketPoolEx.c)
 *     McGenEventRegister @ 0x1C002103C (McGenEventRegister.c)
 *     ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1C0021064 (-ndisRegisterPDCounterSets@@YAXXZ.c)
 *     InitializeTelemetryAssertsKM @ 0x1C0021ED8 (InitializeTelemetryAssertsKM.c)
 *     NdisAllocateNetBufferPool @ 0x1C0022B30 (NdisAllocateNetBufferPool.c)
 *     ndisVerifierInitialization @ 0x1C0023164 (ndisVerifierInitialization.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0024620 (__report_rangecheckfailure.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     ndisCreateSecurityDescriptor @ 0x1C00C1720 (ndisCreateSecurityDescriptor.c)
 *     ndisAllocateEventLog @ 0x1C00C1FEC (ndisAllocateEventLog.c)
 *     WppInitKm @ 0x1C00C827C (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C00C82E8 (WppLoadTracingSupport.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00C8480 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ndisDoesSystemSupportSriov @ 0x1C00C85A4 (ndisDoesSystemSupportSriov.c)
 *     TraceLoggingRegisterEx @ 0x1C00C927C (TraceLoggingRegisterEx.c)
 *     ndisCreateSecurityDescriptorEx @ 0x1C00C96A4 (ndisCreateSecurityDescriptorEx.c)
 *     ndisInitializeStackTraces @ 0x1C00C9764 (ndisInitializeStackTraces.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1C00F9C84 (--0KPushLock@@QEAA@XZ.c)
 *     ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C011A078 (-ndisInitializeWatchdogSubsystem@@YAXXZ.c)
 *     ?ndisSetupDeviceInitialize@@YAXXZ @ 0x1C011A0A8 (-ndisSetupDeviceInitialize@@YAXXZ.c)
 *     ndisCreateGenericSD @ 0x1C011AD68 (ndisCreateGenericSD.c)
 *     ndisCreateAcl @ 0x1C011AE20 (ndisCreateAcl.c)
 *     CreateDeviceDriverSecurityDescriptor @ 0x1C011B0AC (CreateDeviceDriverSecurityDescriptor.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C011B528 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     NetPacketPoolInitialize @ 0x1C011B5E0 (NetPacketPoolInitialize.c)
 *     ndisVBusNmrInitializeClient @ 0x1C011B63C (ndisVBusNmrInitializeClient.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C011B70C (-ndisBindInitialize@@YAJXZ.c)
 *     ndisGetProcessorInfo @ 0x1C011B794 (ndisGetProcessorInfo.c)
 *     ndisCmInitialize @ 0x1C011BE38 (ndisCmInitialize.c)
 *     ndisIfInitialize @ 0x1C011BF80 (ndisIfInitialize.c)
 *     ndisInitializePeriodicReceives @ 0x1C011C448 (ndisInitializePeriodicReceives.c)
 *     NdisDllInitialize @ 0x1C011C750 (NdisDllInitialize.c)
 *     ndisReadRegistry @ 0x1C011C848 (ndisReadRegistry.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C011D38C (-ndisNblTrackerInitialize@@YAXXZ.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  unsigned __int8 i; // al
  __int64 v5; // rcx
  ETWENABLECALLBACK *v6; // rdx
  PETWENABLECALLBACK v7; // rdx
  ETWENABLECALLBACK *v8; // rdx
  void *v9; // r8
  __int64 v10; // rbx
  ACL *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  char *v16; // rdi
  NTSTATUS v17; // eax
  ULONG RecommendedSharedDataAlignment; // eax
  int v19; // eax
  unsigned int v20; // edi
  PVOID PoolWithTag; // rax
  SIZE_T v22; // rax
  SIZE_T v23; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  NTSTATUS ProcessorInfo; // edi
  KPushLock *v41; // rax
  __int64 v42; // rbx
  _QWORD *v43; // rcx
  int v45; // eax
  NTSTATUS v46; // eax
  NTSTATUS v47; // eax
  int DeviceCharacteristics; // [rsp+20h] [rbp-268h]
  int DeviceCharacteristicsa; // [rsp+20h] [rbp-268h]
  int DeviceCharacteristicsb; // [rsp+20h] [rbp-268h]
  int DeviceCharacteristicsc; // [rsp+20h] [rbp-268h]
  unsigned __int8 v52[8]; // [rsp+40h] [rbp-248h] BYREF
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+48h] [rbp-240h] BYREF
  struct _NET_BUFFER_POOL_PARAMETERS v54; // [rsp+58h] [rbp-230h] BYREF
  int Status; // [rsp+68h] [rbp-220h] BYREF
  int v56; // [rsp+70h] [rbp-218h] BYREF
  const wchar_t *v57; // [rsp+78h] [rbp-210h]
  int v58; // [rsp+80h] [rbp-208h] BYREF
  const wchar_t *v59; // [rsp+88h] [rbp-200h]
  int v60; // [rsp+90h] [rbp-1F8h] BYREF
  const wchar_t *v61; // [rsp+98h] [rbp-1F0h]
  int v62; // [rsp+A0h] [rbp-1E8h] BYREF
  const wchar_t *v63; // [rsp+A8h] [rbp-1E0h]
  _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-1D8h] BYREF
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+C0h] [rbp-1C8h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v66; // [rsp+F0h] [rbp-198h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v67; // [rsp+120h] [rbp-168h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v68; // [rsp+150h] [rbp-138h] BYREF
  _BYTE v69[8]; // [rsp+180h] [rbp-108h] BYREF
  _UNICODE_STRING SymbolicLinkName; // [rsp+188h] [rbp-100h] BYREF
  _UNICODE_STRING v71; // [rsp+198h] [rbp-F0h] BYREF
  struct _KEVENT Event; // [rsp+1A8h] [rbp-E0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1C0h] [rbp-C8h] BYREF
  struct _KDPC Dpc; // [rsp+1F0h] [rbp-98h] BYREF
  __int64 v75; // [rsp+230h] [rbp-58h] BYREF
  _BYTE OutputBuffer[32]; // [rsp+238h] [rbp-50h] BYREF

  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  v52[0] = 0;
  for ( i = 0; i < 0x20u; ++i )
  {
    v5 = i;
    if ( i >= 0x20uLL )
      _report_rangecheckfailure();
    *((_BYTE *)&ndisWppEnabledLevelPerFlag + v5) = 0;
  }
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_NDISTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm();
  traceInited = 1;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xBu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids);
  McGenEventRegister(&NDIS_PROVIDER_ID, v6, NDIS_PROVIDER_ID_Context, NDIS_PROVIDER_ID_Context);
  McGenEventRegister(&SLEEPSTUDY_ETW_PROVIDER, v7, SLEEPSTUDY_ETW_PROVIDER_Context, SLEEPSTUDY_ETW_PROVIDER_Context);
  if ( Microsoft_Windows_Networking_CorrelationHandle
    || !EtwRegister(
          &Microsoft_Windows_Networking_CorrelationId,
          (PETWENABLECALLBACK)Microsoft_Windows_Networking_Correlation_EtwEnableCallback,
          0LL,
          &Microsoft_Windows_Networking_CorrelationHandle) )
  {
    Microsoft_Windows_Networking_ProviderId = (__int128)NDIS_PROVIDER_ID;
  }
  TraceLoggingRegisterEx(&hProvider, v8, v9);
  InitializeTelemetryAssertsKM((const void **)RegistryPath);
  DbgSetDebugFilterState(0x78u, 0xFFFFFFFF, 1u);
  ndisRegistryPath.Length = 0;
  ndisRegistryPath.MaximumLength = RegistryPath->Length;
  ndisRegistryPath.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                         PagedPool,
                                         (unsigned int)RegistryPath->Length + 2,
                                         0x2020444Eu);
  RtlCopyUnicodeString(&ndisRegistryPath, RegistryPath);
  ndisDriverObject = DriverObject;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\Ndis");
  NdisDllInitialize();
  ndisNblTrackerInitialize();
  NetPacketPoolInitialize();
  v10 = 16LL;
  if ( IoCreateDevice(DriverObject, 0, &DestinationString, 0x12u, 0x100u, 0, &ndisDeviceObject) >= 0 )
  {
    RtlInitUnicodeString(&SymbolicLinkName, L"\\Global??\\NDIS");
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
    ndisDeviceObject->Flags |= 0x10u;
    memset64(DriverObject->MajorFunction, (unsigned __int64)ndisDispatchRequest, 0x1CuLL);
    ndisCreateSecurityDescriptor(ndisDeviceObject, &ndisSecurityDescriptor, 0xBFu);
    ndisCreateSecurityDescriptorEx(v11);
    CreateDeviceDriverSecurityDescriptor(DriverObject, v12, 0LL);
    CreateDeviceDriverSecurityDescriptor(DriverObject->DeviceObject, v13, 0LL);
    LOBYTE(v14) = 1;
    CreateDeviceDriverSecurityDescriptor(ndisDeviceObject, v15, v14);
    IoWMIRegistrationControl(ndisDeviceObject, 1u);
    DriverObject->DriverUnload = 0LL;
    KeInitializeSpinLock(&ndisGlobalLock);
    KeInitializeSpinLock(&ndisMiniDriverListLock);
    KeInitializeSpinLock(&ndisProtocolListLock);
    KeInitializeSpinLock(&ndisMiniportListLock);
    KeInitializeSpinLock(&ndisGlobalPacketPoolListLock);
    KeInitializeSpinLock(&ndisGlobalNetBufferPoolListLock);
    KeInitializeSpinLock(&ndisGlobalNetBufferListPoolListLock);
    KeInitializeSpinLock(&ndisGlobalOpenListLock);
    KeInitializeSpinLock(&ndisGlobalFilterListLock);
    KeInitializeSpinLock(&ndisFilterDriverListLock);
    KeInitializeSpinLock(&ndisAbortedRequestsListLock);
    KeInitializeSpinLock(&ndisGlobalTimerListLock);
    ndisDmaAlignment = 8;
    ndisTimeIncrement = KeQueryTimeIncrement();
    ExInitializeResourceLite(&SharedMemoryResource);
    ndisReadRegistry();
    ndisFlags &= ~0x400u;
  }
  KeBootTime.QuadPart = MEMORY[0xFFFFF78000000014];
  PoolAgingTicks.HighPart = 0;
  PoolAgingTicks.LowPart = 0x23C34600 / KeQueryTimeIncrement();
  ndisInitializeStackTraces();
  ndisWorkItemLog = (struct _NDIS_EVENT_LOG *)ndisAllocateEventLog(0, 7);
  if ( (ndisFlags & 0x100) == 0 )
    ndisVerifierInitialization();
  v16 = (char *)&ndisAbortedRequests;
  do
  {
    memset(v16, 0, 0xB0uLL);
    v16 += 248;
    --v10;
  }
  while ( v10 );
  RtlInitUnicodeString(&v71, L"\\CallBack\\NdisBindUnbind");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v71;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 592;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = ExCreateCallback((PCALLBACK_OBJECT *)&ndisBindUnbindCallbackObject, &ObjectAttributes, 1u, 1u);
  if ( v17 < 0 )
    DbgPrint("Ndis: failed to create a Callback object. Status %lx\n", v17);
  if ( PoRegisterPowerSettingCallback(
         0LL,
         &GUID_ACDC_POWER_SOURCE,
         (PPOWER_SETTING_CALLBACK)ndisPowerStateCallback,
         0LL,
         &ndisPowerStateCallbackHandle) < 0 )
    DbgPrint("Ndis: failed to register a power state Callback routine\n");
  if ( ZwPowerInformation(SystemBatteryState, 0LL, 0, OutputBuffer, 0x20u) >= 0 )
  {
    if ( OutputBuffer[0] )
    {
      ndisAcOnLine = 1;
      if ( OutputBuffer[0] == 1 )
        goto LABEL_22;
    }
    else if ( !OutputBuffer[1] )
    {
      ndisAcOnLine = 1;
      goto LABEL_22;
    }
    ndisAcOnLine = 0;
  }
LABEL_22:
  if ( ZwPowerInformation(PlatformInformation, 0LL, 0, v52, 1u) >= 0 )
    ndisAoAcCapable = v52[0];
  if ( ndisAoAcCapable || ndisAoAcTest )
  {
    v75 = WNF_PO_SCENARIO_CHANGE;
    v45 = ExSubscribeWnfStateChange(v69, &v75, 1LL, 0LL, ndisWnfPdcCallback, 0LL);
    if ( v45 < 0 && (unsigned __int8)byte_1C0098754 >= 2u )
      WPP_SF_d(0xCu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, v45);
    v46 = PoRegisterPowerSettingCallback(
            0LL,
            &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
            (PPOWER_SETTING_CALLBACK)ndisCsResiliencyCallback,
            0LL,
            0LL);
    if ( v46 < 0 && (unsigned __int8)byte_1C0098754 >= 2u )
      WPP_SF_d(0xDu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, v46);
    v47 = PoRegisterPowerSettingCallback(
            0LL,
            &GUID_LOW_POWER_EPOCH,
            (PPOWER_SETTING_CALLBACK)ndisLowPowerEpochCallback,
            0LL,
            0LL);
    if ( v47 < 0 && (unsigned __int8)byte_1C0098754 >= 2u )
      WPP_SF_d(0xEu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, v47);
    ndisDefaultPnPCapabilities &= ~0x10u;
  }
  qword_1C0099F18 = (__int64)&ndisGlobalPacketPoolList;
  ndisGlobalPacketPoolList.Flink = &ndisGlobalPacketPoolList;
  qword_1C0099EF8 = (__int64)&ndisGlobalNetBufferPoolList;
  ndisGlobalNetBufferPoolList.Flink = &ndisGlobalNetBufferPoolList;
  qword_1C0098B08 = (__int64)&ndisGlobalNetBufferListPoolList;
  ndisGlobalNetBufferListPoolList.Flink = &ndisGlobalNetBufferListPoolList;
  qword_1C0098C20 = (__int64)&ndisGlobalTimerList;
  ndisGlobalTimerList.Flink = &ndisGlobalTimerList;
  KeInitializeMutex(&ndisPnPMutex, 0xFFFFu);
  KeInitializeMutex(&ndisPeriodicReceivesMutex, 0xFFFFu);
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&ndisPcwMutex);
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  ndisPcwOffsetToPerCpuData = (RecommendedSharedDataAlignment + 255) & ~(RecommendedSharedDataAlignment - 1);
  if ( RecommendedSharedDataAlignment < 0x1C0 )
    RecommendedSharedDataAlignment = 448;
  ndisPcwPerCpuDataStride = RecommendedSharedDataAlignment;
  ndisInitializeWatchdogSubsystem();
  Parameters.DataSize = 0;
  Parameters.Header = (_NDIS_OBJECT_HEADER)1048960;
  *(_DWORD *)&Parameters.ProtocolId = 256;
  Parameters.PoolTag = 1684948046;
  ndisNetBufferListPool = NdisAllocateNetBufferListPool(0LL, &Parameters);
  if ( !ndisNetBufferListPool )
    DbgPrint("NDIS: failed to create ndis net buffer list special pool.\n");
  *(_QWORD *)&v54.PoolTag = 1684948046LL;
  v54.Header = (_NDIS_OBJECT_HEADER)786816;
  ndisNetBufferPool = NdisAllocateNetBufferPool(0LL, &v54);
  if ( !ndisNetBufferPool )
    DbgPrint("NDIS: failed to create ndis net buffer special pool.\n");
  v19 = ndisInitializePeriodicReceives();
  if ( v19 < 0 && (_BYTE)ndisWppEnabledLevelPerFlag )
    WPP_SF_d(0xFu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, v19);
  v20 = 2096 * ndisMaxNumberOfProcessors;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 2096 * ndisMaxNumberOfProcessors, 0x2020444Eu);
  WPP_MAIN_CB.Queue.Wcb.DeviceContext = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v20);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
  {
    WPP_SF_(0x4Cu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids);
  }
  NdisAllocatePacketPoolEx(&Status, &ndisSendPacketPool, 0xFFFFu, 0, 0x20u);
  NdisAllocatePacketPoolEx(&Status, &ndisRecvPacketPool, 0xFFFFu, 0, 0x30u);
  v22 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
  ExInitializeNPagedLookasideList(
    &ndisRcv100BytesLL,
    0LL,
    0LL,
    0x200u,
    ((v22 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
    0x7254444Eu,
    0);
  v23 = MmSizeOfMdl((PVOID)0xFFF, 0x5EAuLL);
  ExInitializeNPagedLookasideList(
    &ndisRcv1514BytesLL,
    0LL,
    0LL,
    0x200u,
    ((v23 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1514,
    0x7254444Eu,
    0);
  ndisSetupDeviceInitialize();
  AllUsersAclRead = (PACL)ndisCreateAcl(v25, v24, v26, v27, DeviceCharacteristics, 1, 0x80000001);
  AllUsersAclWrite = (PACL)ndisCreateAcl(v29, v28, v30, v31, DeviceCharacteristicsa, 1, 0x40000002u);
  AllUsersAclReadWrite = (PACL)ndisCreateAcl(v33, v32, v34, v35, DeviceCharacteristicsb, 1, 0xC0000013);
  AdminsAcl = (PACL)ndisCreateAcl(v37, v36, v38, v39, DeviceCharacteristicsc, 0, 0xC0000013);
  ndisCreateGenericSD(AllUsersAclRead, &AllUsersReadSecurityDescriptor);
  ndisCreateGenericSD(AllUsersAclWrite, &AllUsersWriteSecurityDescriptor);
  ndisCreateGenericSD(AllUsersAclReadWrite, &AllUsersReadWriteSecurityDescriptor);
  ndisCreateGenericSD(AdminsAcl, &AdminsSecurityDescriptor);
  ndisIfInitialize();
  ndisCmInitialize();
  IoRegisterBootDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)ndisBootDriverReinit, 0LL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  memset(&DpcWatchdogCount, 0, 0x28uLL);
  memset(&DpcTimeCount, 0, 0x28uLL);
  KeInitializeDpc(&Dpc, ndisGetDpcWatchdogInfo, &Event);
  KeSetImportanceDpc(&Dpc, HighImportance);
  KeInsertQueueDpc(&Dpc, 0LL, 0LL);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  ProcessorInfo = ndisGetProcessorInfo();
  if ( ProcessorInfo < 0 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_(0x10u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids);
  }
  else
  {
    qsort(
      *(void **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink),
      4uLL,
      ndisCompareProcNumInit);
    qword_1C00982A8 = (__int64)KeRegisterProcessorChangeCallback(
                                 (PPROCESSOR_CALLBACK_FUNCTION)ndisCpuHotAddHandler,
                                 0LL,
                                 0);
    if ( qword_1C00982A8 )
    {
      ProcessorInfo = ndisBindInitialize();
      if ( ProcessorInfo >= 0 )
      {
        v41 = (KPushLock *)ExAllocatePoolWithTag(PagedPool, 0x2040uLL, 0x6741444Eu);
        v42 = (__int64)v41;
        if ( v41 )
        {
          KPushLock::KPushLock(v41);
          v43[1029] = 0LL;
          ++v43;
          v43[1] = v43;
          *v43 = v43;
          *(_DWORD *)(v42 + 24) = 0x10000;
          *(_QWORD *)(v42 + 32) = v42 + 40;
          RtlClearAllBits((PRTL_BITMAP)(v42 + 24));
          RtlSetBit((PRTL_BITMAP)(v42 + 24), 0);
          *(_QWORD *)(v42 + 8248) = v42 + 8240;
          *(_QWORD *)(v42 + 8240) = v42 + 8240;
        }
        else
        {
          v42 = 0LL;
        }
        qword_1C00987F8 = v42;
        if ( v42 )
        {
          ProcessorInfo = 0;
          ndisVBusNmrInitializeClient();
          IoRegisterPlugPlayNotification(
            EventCategoryDeviceInterfaceChange,
            0,
            &GUID_DEVINTERFACE_NET,
            DriverObject,
            (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)ndisMiniportDeviceReadyNotification,
            0LL,
            &ndisMiniportDeviceReadyRegistrationHandle);
          v56 = 6029402;
          v57 = L"Per Processor Network Interface Card Activity";
          memset(&Info, 0, sizeof(Info));
          Info.CounterCount = 25;
          Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterNetworkInterfaceCounterSet'::`2'::Descriptors;
          Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisCounterSetProviderCallback;
          Info.Name = (const _UNICODE_STRING *)&v56;
          Info.Version = 256;
          Info.CallbackContext = (void *)1;
          PcwRegister(&ndisNetworkInterfaceCounterSet, &Info);
          v58 = 4980810;
          v59 = L"Per Processor Network Activity Cycles";
          memset(&v66, 0, sizeof(v66));
          v66.Version = 256;
          v66.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterNetworkActivityCyclesCounterSet'::`2'::Descriptors;
          v66.CounterCount = 13;
          v66.Name = (const _UNICODE_STRING *)&v58;
          v66.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisCounterSetProviderCallback;
          v66.CallbackContext = (void *)2;
          PcwRegister(&ndisNetworkActivityCyclesCounterSet, &v66);
          v60 = 5374032;
          v61 = L"Physical Network Interface Card Activity";
          memset(&v67, 0, sizeof(v67));
          v67.Version = 256;
          v67.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterPhysicalNICCounterSet'::`2'::Descriptors;
          v67.CounterCount = 5;
          v67.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisPhysicalNicPcwProviderCallback;
          v67.CallbackContext = (void *)3;
          v67.Name = (const _UNICODE_STRING *)&v60;
          PcwRegister(&ndisPhysicalNICCounterSet, &v67);
          v62 = 1835034;
          v63 = L"RDMA Activity";
          memset(&v68, 0, sizeof(v68));
          v68.Version = 256;
          v68.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterNetworkDirectCounterSet'::`2'::Descriptors;
          v68.CounterCount = 10;
          v68.CallbackContext = 0LL;
          v68.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisNdkPcwProviderCallback;
          v68.Name = (const _UNICODE_STRING *)&v62;
          PcwRegister(&ndisNetworkDirectCounterSet, &v68);
          ndisRegisterPDCounterSets();
          word_1C00977EE = ndisNblTrackerMode;
          word_1C00977F0 = ndisMaxNumberOfProcessors;
          qword_1C00977F8 = (__int64)&ndisGlobalNetBufferListPoolList;
          NetioSetTriageBlock(0LL, &ndisGlobalTriageBlock);
          ndisDoesSystemSupportSriov();
          KeInitializeEvent(&g_WdiLoadInProgress, NotificationEvent, 0);
          KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_WdiLoadLock);
          ndisMpHookNmrInitializeClient();
          RtlRunOnceInitialize(&ndisNsiInitOnceBlock);
        }
        else
        {
          return -1073741670;
        }
      }
    }
    else
    {
      return -1073741823;
    }
  }
  return ProcessorInfo;
}
