/*
 * XREFs of DriverEntry @ 0x1C01129E0
 * Callers:
 *     GsDriverEntry @ 0x1C0111080 (GsDriverEntry.c)
 * Callees:
 *     ndisVerifierInitialization @ 0x1C001382C (ndisVerifierInitialization.c)
 *     NdisAllocateNetBufferPool @ 0x1C0013860 (NdisAllocateNetBufferPool.c)
 *     ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1C0013A24 (-ndisRegisterPDCounterSets@@YAXXZ.c)
 *     NdisAllocatePacketPoolEx @ 0x1C0013C50 (NdisAllocatePacketPoolEx.c)
 *     McGenEventRegister @ 0x1C0014158 (McGenEventRegister.c)
 *     NdisAllocateNetBufferListPool @ 0x1C001A000 (NdisAllocateNetBufferListPool.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     __report_rangecheckfailure @ 0x1C0078060 (__report_rangecheckfailure.c)
 *     ndisInitializeStackTraces @ 0x1C00A8B90 (ndisInitializeStackTraces.c)
 *     ndisDoesSystemSupportSriov @ 0x1C00A8BE4 (ndisDoesSystemSupportSriov.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00A8CE8 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     WppInitKm @ 0x1C00A8E0C (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C00A8E78 (WppLoadTracingSupport.c)
 *     ndisCreateSecurityDescriptorEx @ 0x1C00A918C (ndisCreateSecurityDescriptorEx.c)
 *     ndisAllocateEventLog @ 0x1C00A9B24 (ndisAllocateEventLog.c)
 *     ndisCreateSecurityDescriptor @ 0x1C00A9F88 (ndisCreateSecurityDescriptor.c)
 *     TraceLoggingRegisterEx @ 0x1C00BE5C4 (TraceLoggingRegisterEx.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1C00F0954 (--0KPushLock@@QEAA@XZ.c)
 *     ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C0111008 (-ndisInitializeWatchdogSubsystem@@YAXXZ.c)
 *     ?ndisSetupDeviceInitialize@@YAXXZ @ 0x1C0111038 (-ndisSetupDeviceInitialize@@YAXXZ.c)
 *     NdisDllInitialize @ 0x1C01110A0 (NdisDllInitialize.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0111198 (-ndisNblTrackerInitialize@@YAXXZ.c)
 *     ndisReadRegistry @ 0x1C0111404 (ndisReadRegistry.c)
 *     ndisInitializeThreadPool @ 0x1C0111ECC (ndisInitializeThreadPool.c)
 *     ndisCmInitialize @ 0x1C0111F78 (ndisCmInitialize.c)
 *     ndisGetProcessorInfo @ 0x1C01120C0 (ndisGetProcessorInfo.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C0112758 (-ndisBindInitialize@@YAJXZ.c)
 *     ndisVBusNmrInitializeClient @ 0x1C01127F4 (ndisVBusNmrInitializeClient.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C01128C4 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     NetPacketPoolInitialize @ 0x1C0112980 (NetPacketPoolInitialize.c)
 *     ndisCreateGenericSD @ 0x1C0113678 (ndisCreateGenericSD.c)
 *     ndisCreateAcl @ 0x1C0113730 (ndisCreateAcl.c)
 *     CreateDeviceDriverSecurityDescriptor @ 0x1C01139BC (CreateDeviceDriverSecurityDescriptor.c)
 *     ndisInitializePeriodicReceives @ 0x1C0113E38 (ndisInitializePeriodicReceives.c)
 *     ndisIfInitialize @ 0x1C011412C (ndisIfInitialize.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  unsigned __int8 i; // al
  __int64 v5; // rcx
  ETWENABLECALLBACK *v6; // rdx
  PETWENABLECALLBACK v7; // rdx
  ETWENABLECALLBACK *v8; // rdx
  const struct _TlgProvider_t *v9; // rcx
  void *v10; // r8
  __int64 v11; // rbx
  ACL *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  NTSTATUS ProcessorInfo; // edi
  char *v19; // rdi
  NTSTATUS v20; // eax
  unsigned __int8 v21; // al
  ULONG RecommendedSharedDataAlignment; // eax
  int v23; // eax
  unsigned int v24; // edi
  struct _NDIS_RCV_TRACKER_ARRAY *PoolWithTag; // rax
  SIZE_T v26; // rax
  SIZE_T v27; // rax
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
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  KPushLock *v44; // rax
  __int64 v45; // rbx
  _QWORD *v46; // rcx
  int v48; // eax
  NTSTATUS v49; // eax
  NTSTATUS v50; // eax
  int DeviceCharacteristics; // [rsp+20h] [rbp-268h]
  int DeviceCharacteristicsa; // [rsp+20h] [rbp-268h]
  int DeviceCharacteristicsb; // [rsp+20h] [rbp-268h]
  int DeviceCharacteristicsc; // [rsp+20h] [rbp-268h]
  unsigned __int8 v55[8]; // [rsp+40h] [rbp-248h] BYREF
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+48h] [rbp-240h] BYREF
  struct _NET_BUFFER_POOL_PARAMETERS v57; // [rsp+58h] [rbp-230h] BYREF
  int Status; // [rsp+68h] [rbp-220h] BYREF
  int v59; // [rsp+70h] [rbp-218h] BYREF
  const wchar_t *v60; // [rsp+78h] [rbp-210h]
  int v61; // [rsp+80h] [rbp-208h] BYREF
  const wchar_t *v62; // [rsp+88h] [rbp-200h]
  int v63; // [rsp+90h] [rbp-1F8h] BYREF
  const wchar_t *v64; // [rsp+98h] [rbp-1F0h]
  int v65; // [rsp+A0h] [rbp-1E8h] BYREF
  const wchar_t *v66; // [rsp+A8h] [rbp-1E0h]
  _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-1D8h] BYREF
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+C0h] [rbp-1C8h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v69; // [rsp+F0h] [rbp-198h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v70; // [rsp+120h] [rbp-168h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v71; // [rsp+150h] [rbp-138h] BYREF
  _BYTE v72[8]; // [rsp+180h] [rbp-108h] BYREF
  _UNICODE_STRING SymbolicLinkName; // [rsp+188h] [rbp-100h] BYREF
  _UNICODE_STRING v74; // [rsp+198h] [rbp-F0h] BYREF
  struct _KEVENT Event; // [rsp+1A8h] [rbp-E0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1C0h] [rbp-C8h] BYREF
  struct _KDPC Dpc; // [rsp+1F0h] [rbp-98h] BYREF
  __int64 v78; // [rsp+230h] [rbp-58h] BYREF
  _BYTE OutputBuffer[32]; // [rsp+238h] [rbp-50h] BYREF

  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  v55[0] = 0;
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
    WPP_SF_(0xBu, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
  McGenEventRegister(&NDIS_PROVIDER_ID, v6, &NDIS_PROVIDER_ID_Context, &Microsoft_Windows_NDISHandle);
  McGenEventRegister(
    &SLEEPSTUDY_ETW_PROVIDER,
    v7,
    &SLEEPSTUDY_ETW_PROVIDER_Context,
    &Microsoft_Windows_SleepStudyHandle);
  if ( Microsoft_Windows_Networking_CorrelationHandle
    || !EtwRegister(
          &Microsoft_Windows_Networking_CorrelationId,
          (PETWENABLECALLBACK)Microsoft_Windows_Networking_Correlation_EtwEnableCallback,
          0LL,
          &Microsoft_Windows_Networking_CorrelationHandle) )
  {
    Microsoft_Windows_Networking_ProviderId = (__int128)NDIS_PROVIDER_ID;
  }
  TraceLoggingRegisterEx(v9, v8, v10);
  DbgSetDebugFilterState(0x78u, 0xFFFFFFFF, 1u);
  ndisRegistryPath.Length = 0;
  ndisRegistryPath.MaximumLength = RegistryPath->Length;
  ndisRegistryPath.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, RegistryPath->Length + 2LL, 0x2020444Eu);
  RtlCopyUnicodeString(&ndisRegistryPath, RegistryPath);
  ndisDriverObject = DriverObject;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\Ndis");
  NdisDllInitialize();
  ndisNblTrackerInitialize();
  NetPacketPoolInitialize();
  v11 = 16LL;
  if ( IoCreateDevice(DriverObject, 0, &DestinationString, 0x12u, 0x100u, 0, &ndisDeviceObject) < 0 )
    goto LABEL_11;
  RtlInitUnicodeString(&SymbolicLinkName, L"\\Global??\\NDIS");
  IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
  ndisDeviceObject->Flags |= 0x10u;
  memset64(DriverObject->MajorFunction, (unsigned __int64)ndisDispatchRequest, 0x1CuLL);
  ndisCreateSecurityDescriptor(ndisDeviceObject, &ndisSecurityDescriptor, 0xBFu);
  ndisCreateSecurityDescriptorEx(v12);
  CreateDeviceDriverSecurityDescriptor(DriverObject, v13, 0LL);
  CreateDeviceDriverSecurityDescriptor(DriverObject->DeviceObject, v14, 0LL);
  LOBYTE(v15) = 1;
  CreateDeviceDriverSecurityDescriptor(ndisDeviceObject, v16, v15);
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
  v17 = ndisInitializeThreadPool();
  ProcessorInfo = v17;
  if ( v17 >= 0 )
  {
LABEL_11:
    KeBootTime.QuadPart = MEMORY[0xFFFFF78000000014];
    PoolAgingTicks.HighPart = 0;
    PoolAgingTicks.LowPart = 0x23C34600 / KeQueryTimeIncrement();
    ndisInitializeStackTraces();
    ndisWorkItemLog = (struct _NDIS_EVENT_LOG *)ndisAllocateEventLog(0, 7);
    if ( (ndisFlags & 0x100) == 0 )
      ndisVerifierInitialization();
    v19 = (char *)&ndisAbortedRequests;
    do
    {
      memset(v19, 0, 0xB0uLL);
      v19 += 248;
      --v11;
    }
    while ( v11 );
    RtlInitUnicodeString(&v74, L"\\CallBack\\NdisBindUnbind");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v74;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 592;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v20 = ExCreateCallback((PCALLBACK_OBJECT *)&ndisBindUnbindCallbackObject, &ObjectAttributes, 1u, 1u);
    if ( v20 < 0 )
      DbgPrint("Ndis: failed to create a Callback object. Status %lx\n", v20);
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_ACDC_POWER_SOURCE,
           (PPOWER_SETTING_CALLBACK)ndisPowerStateCallback,
           0LL,
           &ndisPowerStateCallbackHandle) < 0 )
      DbgPrint("Ndis: failed to register a power state Callback routine\n");
    if ( ZwPowerInformation(SystemBatteryState, 0LL, 0, OutputBuffer, 0x20u) < 0 )
      goto LABEL_22;
    if ( OutputBuffer[0] )
    {
      ndisAcOnLine = 1;
      if ( OutputBuffer[0] == 1 )
      {
LABEL_22:
        if ( ZwPowerInformation(PlatformInformation, 0LL, 0, v55, 1u) < 0 )
        {
          v21 = ndisAoAcCapable;
        }
        else
        {
          v21 = v55[0];
          ndisAoAcCapable = v55[0];
        }
        if ( v21 || ndisAoAcTest )
        {
          v78 = WNF_PO_SCENARIO_CHANGE;
          v48 = ExSubscribeWnfStateChange(v72, &v78, 1LL, 0LL, ndisWnfPdcCallback, 0LL);
          if ( v48 < 0 && (unsigned __int8)byte_1C0092614 >= 2u )
            WPP_SF_d(0xDu, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, v48);
          v49 = PoRegisterPowerSettingCallback(
                  0LL,
                  &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                  (PPOWER_SETTING_CALLBACK)ndisCsResiliencyCallback,
                  0LL,
                  0LL);
          if ( v49 < 0 && (unsigned __int8)byte_1C0092614 >= 2u )
            WPP_SF_d(0xEu, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, v49);
          v50 = PoRegisterPowerSettingCallback(
                  0LL,
                  &GUID_LOW_POWER_EPOCH,
                  (PPOWER_SETTING_CALLBACK)ndisLowPowerEpochCallback,
                  0LL,
                  0LL);
          if ( v50 < 0 && (unsigned __int8)byte_1C0092614 >= 2u )
            WPP_SF_d(0xFu, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, v50);
          ndisDefaultPnPCapabilities &= ~0x10u;
        }
        qword_1C0093EA0 = (__int64)&ndisGlobalPacketPoolList;
        ndisGlobalPacketPoolList.Flink = &ndisGlobalPacketPoolList;
        qword_1C0093E80 = (__int64)&ndisGlobalNetBufferPoolList;
        ndisGlobalNetBufferPoolList.Flink = &ndisGlobalNetBufferPoolList;
        qword_1C0093E60 = (__int64)&ndisGlobalNetBufferListPoolList;
        ndisGlobalNetBufferListPoolList.Flink = &ndisGlobalNetBufferListPoolList;
        qword_1C0092938 = (__int64)&ndisGlobalTimerList;
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
        *(_QWORD *)&v57.PoolTag = 1684948046LL;
        v57.Header = (_NDIS_OBJECT_HEADER)786816;
        ndisNetBufferPool = (struct _NDIS_NET_BUFFER_POOL *)NdisAllocateNetBufferPool(0LL, &v57);
        if ( !ndisNetBufferPool )
          DbgPrint("NDIS: failed to create ndis net buffer special pool.\n");
        v23 = ndisInitializePeriodicReceives();
        if ( v23 < 0 && (_BYTE)ndisWppEnabledLevelPerFlag )
          WPP_SF_d(0x10u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, v23);
        v24 = 2096 * ndisMaxNumberOfProcessors;
        PoolWithTag = (struct _NDIS_RCV_TRACKER_ARRAY *)ExAllocatePoolWithTag(
                                                          NonPagedPoolNx,
                                                          2096 * ndisMaxNumberOfProcessors,
                                                          0x2020444Eu);
        ndisPerProcRcvTrackers = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v24);
        }
        else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        {
          WPP_SF_(0x4Fu, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
        }
        NdisAllocatePacketPoolEx(&Status, &ndisSendPacketPool, 0xFFFFu, 0, 0x20u);
        NdisAllocatePacketPoolEx(&Status, &ndisRecvPacketPool, 0xFFFFu, 0, 0x30u);
        v26 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
        ExInitializeNPagedLookasideList(
          &ndisRcv100BytesLL,
          0LL,
          0LL,
          0x200u,
          ((v26 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
          0x7254444Eu,
          0);
        v27 = MmSizeOfMdl((PVOID)0xFFF, 0x5EAuLL);
        ExInitializeNPagedLookasideList(
          &ndisRcv1514BytesLL,
          0LL,
          0LL,
          0x200u,
          ((v27 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1514,
          0x7254444Eu,
          0);
        ndisSetupDeviceInitialize();
        AllUsersAclRead = (PACL)ndisCreateAcl(v29, v28, v30, v31, DeviceCharacteristics, 1, 0x80000001);
        AllUsersAclWrite = (PACL)ndisCreateAcl(v33, v32, v34, v35, DeviceCharacteristicsa, 1, 0x40000002u);
        AllUsersAclReadWrite = (PACL)ndisCreateAcl(v37, v36, v38, v39, DeviceCharacteristicsb, 1, 0xC0000013);
        AdminsAcl = (PACL)ndisCreateAcl(v41, v40, v42, v43, DeviceCharacteristicsc, 0, 0xC0000013);
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
            WPP_SF_(0x11u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
        }
        else
        {
          qsort(ndisRssProcessors, WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey, 4uLL, ndisCompareProcNumInit);
          qword_1C0092148 = (__int64)KeRegisterProcessorChangeCallback(
                                       (PPROCESSOR_CALLBACK_FUNCTION)ndisCpuHotAddHandler,
                                       0LL,
                                       0);
          if ( qword_1C0092148 )
          {
            ProcessorInfo = ndisBindInitialize();
            if ( ProcessorInfo >= 0 )
            {
              v44 = (KPushLock *)ExAllocatePoolWithTag(PagedPool, 0x2040uLL, 0x6741444Eu);
              v45 = (__int64)v44;
              if ( v44 )
              {
                KPushLock::KPushLock(v44);
                v46[1029] = 0LL;
                ++v46;
                v46[1] = v46;
                *v46 = v46;
                *(_DWORD *)(v45 + 24) = 0x10000;
                *(_QWORD *)(v45 + 32) = v45 + 40;
                RtlClearAllBits((PRTL_BITMAP)(v45 + 24));
                RtlSetBit((PRTL_BITMAP)(v45 + 24), 0);
                *(_QWORD *)(v45 + 8248) = v45 + 8240;
                *(_QWORD *)(v45 + 8240) = v45 + 8240;
              }
              else
              {
                v45 = 0LL;
              }
              qword_1C00926D0 = v45;
              if ( v45 )
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
                v59 = 6029402;
                v60 = L"Per Processor Network Interface Card Activity";
                memset(&Info, 0, sizeof(Info));
                Info.CounterCount = 25;
                Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterNetworkInterfaceCounterSet'::`2'::Descriptors;
                Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisCounterSetProviderCallback;
                Info.Name = (const _UNICODE_STRING *)&v59;
                Info.Version = 256;
                Info.CallbackContext = (void *)1;
                PcwRegister(&ndisNetworkInterfaceCounterSet, &Info);
                v61 = 4980810;
                v62 = L"Per Processor Network Activity Cycles";
                memset(&v69, 0, sizeof(v69));
                v69.Version = 256;
                v69.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterNetworkActivityCyclesCounterSet'::`2'::Descriptors;
                v69.CounterCount = 13;
                v69.Name = (const _UNICODE_STRING *)&v61;
                v69.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisCounterSetProviderCallback;
                v69.CallbackContext = (void *)2;
                PcwRegister(&ndisNetworkActivityCyclesCounterSet, &v69);
                v63 = 5374032;
                v64 = L"Physical Network Interface Card Activity";
                memset(&v70, 0, sizeof(v70));
                v70.Version = 256;
                v70.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterPhysicalNICCounterSet'::`2'::Descriptors;
                v70.CounterCount = 5;
                v70.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisPhysicalNicPcwProviderCallback;
                v70.CallbackContext = (void *)3;
                v70.Name = (const _UNICODE_STRING *)&v63;
                PcwRegister(&ndisPhysicalNICCounterSet, &v70);
                v65 = 1835034;
                v66 = L"RDMA Activity";
                memset(&v71, 0, sizeof(v71));
                v71.Version = 256;
                v71.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterNetworkDirectCounterSet'::`2'::Descriptors;
                v71.CounterCount = 10;
                v71.CallbackContext = 0LL;
                v71.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisNdkPcwProviderCallback;
                v71.Name = (const _UNICODE_STRING *)&v65;
                PcwRegister(&ndisNetworkDirectCounterSet, &v71);
                ndisRegisterPDCounterSets();
                word_1C00916CE = ndisNblTrackerMode;
                word_1C00916D0 = ndisMaxNumberOfProcessors;
                qword_1C00916D8 = (__int64)&ndisGlobalNetBufferListPoolList;
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
    }
    else if ( !OutputBuffer[1] )
    {
      ndisAcOnLine = 1;
      goto LABEL_22;
    }
    ndisAcOnLine = 0;
    goto LABEL_22;
  }
  if ( (unsigned __int8)byte_1C0092614 >= 2u )
    WPP_SF_d(0xCu, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, v17);
  return ProcessorInfo;
}
