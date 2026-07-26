/*
 * XREFs of DriverEntry @ 0x1C011D0D0
 * Callers:
 *     GsDriverEntry @ 0x1C011C010 (GsDriverEntry.c)
 * Callees:
 *     InitializeTelemetryAssertsKM @ 0x1C00149C8 (InitializeTelemetryAssertsKM.c)
 *     ndisVerifierInitialization @ 0x1C0014C54 (ndisVerifierInitialization.c)
 *     NdisAllocateNetBufferPool @ 0x1C0014C80 (NdisAllocateNetBufferPool.c)
 *     NdisAllocateNetBufferListPool @ 0x1C0014E20 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocatePacketPoolEx @ 0x1C0015A30 (NdisAllocatePacketPoolEx.c)
 *     McGenEventRegister @ 0x1C001604C (McGenEventRegister.c)
 *     ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1C0016074 (-ndisRegisterPDCounterSets@@YAXXZ.c)
 *     ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C002463C (-ndisWppExtendedCallback@@YAXEKE@Z.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00AC490 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ndisCreateSecurityDescriptorEx @ 0x1C00B4A28 (ndisCreateSecurityDescriptorEx.c)
 *     ndisCreateSecurityDescriptor @ 0x1C00B4A88 (ndisCreateSecurityDescriptor.c)
 *     ndisInitializeStackTraces @ 0x1C00B5634 (ndisInitializeStackTraces.c)
 *     ndisAllocateEventLog @ 0x1C00B5688 (ndisAllocateEventLog.c)
 *     WppInitKm @ 0x1C00B5B3C (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C00B5BA8 (WppLoadTracingSupport.c)
 *     ndisDoesSystemSupportSriov @ 0x1C00B5D40 (ndisDoesSystemSupportSriov.c)
 *     TraceLoggingRegisterEx @ 0x1C00CA8C0 (TraceLoggingRegisterEx.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1C00FC8C0 (--0KPushLock@@QEAA@XZ.c)
 *     ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C011C078 (-ndisInitializeWatchdogSubsystem@@YAXXZ.c)
 *     NdisDllInitialize @ 0x1C011C0B0 (NdisDllInitialize.c)
 *     NetPacketPoolInitialize @ 0x1C011C1B0 (NetPacketPoolInitialize.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C011C20C (-ndisNblTrackerInitialize@@YAXXZ.c)
 *     ndisReadRegistry @ 0x1C011C400 (ndisReadRegistry.c)
 *     ndisIfInitialize @ 0x1C011CAC0 (ndisIfInitialize.c)
 *     ndisCmInitialize @ 0x1C011CF88 (ndisCmInitialize.c)
 *     ndisCreateGenericSD @ 0x1C011DD48 (ndisCreateGenericSD.c)
 *     ndisCreateAcl @ 0x1C011DE00 (ndisCreateAcl.c)
 *     CreateDeviceDriverSecurityDescriptor @ 0x1C011E08C (CreateDeviceDriverSecurityDescriptor.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C011E508 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ndisVBusNmrInitializeClient @ 0x1C011E5B8 (ndisVBusNmrInitializeClient.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C011E688 (-ndisBindInitialize@@YAJXZ.c)
 *     ndisGetProcessorInfo @ 0x1C011E710 (ndisGetProcessorInfo.c)
 *     ndisInitializePeriodicReceives @ 0x1C011EDC8 (ndisInitializePeriodicReceives.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  ETWENABLECALLBACK *v4; // rdx
  PETWENABLECALLBACK v5; // rdx
  ETWENABLECALLBACK *v6; // rdx
  void *v7; // r8
  ETWENABLECALLBACK *v8; // rdx
  void *v9; // r8
  ACL *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  char *v15; // rdi
  __int64 v16; // rbx
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
  ndisWppExtendedCallback(0, 0, 0);
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
    WPP_SF_(0xBu, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids);
  McGenEventRegister(&NDIS_PROVIDER_ID, v4, NDIS_PROVIDER_ID_Context, NDIS_PROVIDER_ID_Context);
  McGenEventRegister(&SLEEPSTUDY_ETW_PROVIDER, v5, SLEEPSTUDY_ETW_PROVIDER_Context, SLEEPSTUDY_ETW_PROVIDER_Context);
  if ( Microsoft_Windows_Networking_CorrelationHandle
    || !EtwRegister(
          &Microsoft_Windows_Networking_CorrelationId,
          (PETWENABLECALLBACK)Microsoft_Windows_Networking_Correlation_EtwEnableCallback,
          0LL,
          &Microsoft_Windows_Networking_CorrelationHandle) )
  {
    Microsoft_Windows_Networking_ProviderId = (__int128)NDIS_PROVIDER_ID;
  }
  TraceLoggingRegisterEx(&hProvider, v6, v7);
  InitializeTelemetryAssertsKM((const void **)RegistryPath, v8, v9);
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
  if ( IoCreateDevice(DriverObject, 0, &DestinationString, 0x12u, 0x100u, 0, &ndisDeviceObject) >= 0 )
  {
    RtlInitUnicodeString(&SymbolicLinkName, L"\\Global??\\NDIS");
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
    ndisDeviceObject->Flags |= 0x10u;
    memset64(DriverObject->MajorFunction, (unsigned __int64)ndisDispatchRequest, 0x1CuLL);
    ndisCreateSecurityDescriptor(ndisDeviceObject, &ndisSecurityDescriptor, 0xBFu);
    ndisCreateSecurityDescriptorEx(v10);
    CreateDeviceDriverSecurityDescriptor(DriverObject, v11, 0LL);
    CreateDeviceDriverSecurityDescriptor(DriverObject->DeviceObject, v12, 0LL);
    LOBYTE(v13) = 1;
    CreateDeviceDriverSecurityDescriptor(ndisDeviceObject, v14, v13);
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
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) &= ~0x400u;
  }
  KeBootTime.QuadPart = MEMORY[0xFFFFF78000000014];
  PoolAgingTicks.HighPart = 0;
  PoolAgingTicks.LowPart = 0x23C34600 / KeQueryTimeIncrement();
  ndisInitializeStackTraces();
  ndisWorkItemLog = (struct _NDIS_EVENT_LOG *)ndisAllocateEventLog(0, 7);
  if ( (WORD2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x100) == 0 )
    ndisVerifierInitialization();
  v15 = (char *)&ndisAbortedRequests;
  v16 = 16LL;
  do
  {
    memset(v15, 0, 0xB0uLL);
    v15 += 248;
    --v16;
  }
  while ( v16 );
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
        goto LABEL_19;
    }
    else if ( !OutputBuffer[1] )
    {
      ndisAcOnLine = 1;
      goto LABEL_19;
    }
    ndisAcOnLine = 0;
  }
LABEL_19:
  if ( ZwPowerInformation(PlatformInformation, 0LL, 0, v52, 1u) >= 0 )
    ndisAoAcCapable = v52[0];
  if ( ndisAoAcCapable || ndisAoAcTest )
  {
    v75 = WNF_PO_SCENARIO_CHANGE;
    v45 = ExSubscribeWnfStateChange(v69, &v75, 1LL, 0LL, ndisWnfPdcCallback, 0LL);
    if ( v45 < 0 && (unsigned __int8)byte_1C0099614 >= 2u )
      WPP_SF_d(0xCu, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, v45);
    v46 = PoRegisterPowerSettingCallback(
            0LL,
            &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
            (PPOWER_SETTING_CALLBACK)ndisCsResiliencyCallback,
            0LL,
            0LL);
    if ( v46 < 0 && (unsigned __int8)byte_1C0099614 >= 2u )
      WPP_SF_d(0xDu, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, v46);
    v47 = PoRegisterPowerSettingCallback(
            0LL,
            &GUID_LOW_POWER_EPOCH,
            (PPOWER_SETTING_CALLBACK)ndisLowPowerEpochCallback,
            0LL,
            0LL);
    if ( v47 < 0 && (unsigned __int8)byte_1C0099614 >= 2u )
      WPP_SF_d(0xEu, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, v47);
    ndisDefaultPnPCapabilities &= ~0x10u;
  }
  qword_1C009AE00 = (__int64)&ndisGlobalPacketPoolList;
  ndisGlobalPacketPoolList.Flink = &ndisGlobalPacketPoolList;
  qword_1C009ADE8 = (__int64)&ndisGlobalNetBufferPoolList;
  ndisGlobalNetBufferPoolList.Flink = &ndisGlobalNetBufferPoolList;
  qword_1C009ADC8 = (__int64)&ndisGlobalNetBufferListPoolList;
  ndisGlobalNetBufferListPoolList.Flink = &ndisGlobalNetBufferListPoolList;
  qword_1C0099998 = (__int64)&ndisGlobalTimerList;
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
  ndisNetBufferPool = (struct _NDIS_NET_BUFFER_POOL *)NdisAllocateNetBufferPool(0LL, &v54);
  if ( !ndisNetBufferPool )
    DbgPrint("NDIS: failed to create ndis net buffer special pool.\n");
  v19 = ndisInitializePeriodicReceives();
  if ( v19 < 0 && (_BYTE)ndisWppEnabledLevelPerFlag )
    WPP_SF_d(0xFu, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, v19);
  v20 = 2096 * ndisMaxNumberOfProcessors;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 2096 * ndisMaxNumberOfProcessors, 0x2020444Eu);
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v20);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
  {
    WPP_SF_(0x4Cu, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids);
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
      WPP_SF_(0x10u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids);
  }
  else
  {
    qsort(
      WPP_MAIN_CB.Queue.Wcb.DeviceRoutine,
      *((unsigned int *)&WPP_MAIN_CB.Queue.Wcb.1 + 5),
      4uLL,
      ndisCompareProcNumInit);
    qword_1C0099128 = (__int64)KeRegisterProcessorChangeCallback(
                                 (PPROCESSOR_CALLBACK_FUNCTION)ndisCpuHotAddHandler,
                                 0LL,
                                 0);
    if ( qword_1C0099128 )
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
        qword_1C00996C8 = v42;
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
          word_1C009870E = ndisNblTrackerMode;
          word_1C0098710 = ndisMaxNumberOfProcessors;
          qword_1C0098718 = (__int64)&ndisGlobalNetBufferListPoolList;
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
