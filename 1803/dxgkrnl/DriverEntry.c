/*
 * XREFs of DriverEntry @ 0x1C023F078
 * Callers:
 *     GsDriverEntry @ 0x1C023F010 (GsDriverEntry.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McGenEventRegister @ 0x1C0030F00 (McGenEventRegister.c)
 *     MonitorCleanupGlobal @ 0x1C004707C (MonitorCleanupGlobal.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1C018F144 (-DxgDbgInit@@YAXXZ.c)
 *     TraceLoggingRegisterEx @ 0x1C01974D8 (TraceLoggingRegisterEx.c)
 *     ?TdrInit@@YAXXZ @ 0x1C0199D44 (-TdrInit@@YAXXZ.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C019D420 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C019DB90 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C01EB5F0 (WdmlibIoCreateDeviceSecure.c)
 *     DxgkCleanupPower @ 0x1C02058C8 (DxgkCleanupPower.c)
 *     DxgkInitIoMmu @ 0x1C020596C (DxgkInitIoMmu.c)
 *     DxgkInitialPower @ 0x1C02059B4 (DxgkInitialPower.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C02279A8 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     MonitorInitializeGlobal @ 0x1C022E574 (MonitorInitializeGlobal.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C023D15C (TlgRegisterAggregateProviderEx.c)
 *     ?LPMDisplayInitializeGlobal@@YAJXZ @ 0x1C023F45C (-LPMDisplayInitializeGlobal@@YAJXZ.c)
 *     DpiInitializeGlobalState @ 0x1C023F534 (DpiInitializeGlobalState.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS ProcessNotifyRoutine; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  bool v7; // al
  NTSTATUS result; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  ETWENABLECALLBACK *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // r9
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  PDEVICE_OBJECT v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r8
  int DeviceCharacteristics; // [rsp+20h] [rbp-89h]
  BOOLEAN v43; // [rsp+28h] [rbp-81h]
  int v44; // [rsp+50h] [rbp-59h] BYREF
  __int64 v45; // [rsp+58h] [rbp-51h]
  _QWORD v46[2]; // [rsp+60h] [rbp-49h] BYREF
  UNICODE_STRING DefaultSDDLString; // [rsp+70h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-29h] BYREF
  __int64 v49; // [rsp+90h] [rbp-19h] BYREF
  int v50; // [rsp+98h] [rbp-11h]
  const wchar_t *v51; // [rsp+A0h] [rbp-9h]
  unsigned __int8 *v52; // [rsp+A8h] [rbp-1h]
  int v53; // [rsp+B0h] [rbp+7h]
  unsigned __int8 *v54; // [rsp+B8h] [rbp+Fh]
  int v55; // [rsp+C0h] [rbp+17h]
  __int64 v56; // [rsp+C8h] [rbp+1Fh]
  int v57; // [rsp+D0h] [rbp+27h]
  _BYTE v58[40]; // [rsp+D8h] [rbp+2Fh] BYREF
  __int64 SystemInformation; // [rsp+110h] [rbp+67h] BYREF

  g_pDriverObject = DriverObject;
  ProcessNotifyRoutine = PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 0);
  v5 = ProcessNotifyRoutine;
  if ( ProcessNotifyRoutine < 0 )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdError(v6);
  }
  SystemInformation = 8LL;
  v7 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) >= 0
    && (SystemInformation & 0x200000000LL) != 0;
  g_OSTestSigningEnabled = v7;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_DxgkrnlPrereleaseDiagnostic__private_propertyCache,
    9011807LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C005D764,
    0,
    DeviceCharacteristics);
  v49 = 0LL;
  v56 = 0LL;
  v57 = 0;
  v51 = L"IsInternalRelease";
  v50 = 288;
  v52 = &g_IsInternalRelease;
  v53 = 67108868;
  v54 = &g_IsInternalRelease;
  v55 = 4;
  memset(v58, 0, sizeof(v58));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v49, 0LL, 0LL);
  g_IsInternalRelease = g_IsInternalRelease != 0;
  g_IsInternalReleaseOrDbg = g_IsInternalRelease;
  WdInitialize();
  result = DpiInitializeGlobalState();
  if ( result >= 0 )
  {
    result = DXGGLOBAL::CreateGlobal(v10, v9, v11, v12);
    if ( result >= 0 )
    {
      result = CCD_BTL::CreateGlobal(v13);
      if ( result >= 0 )
      {
        TlgRegisterAggregateProviderEx();
        TraceLoggingRegisterEx(
          (TraceLoggingHProvider)&dword_1C0079BB0,
          (TLG_PENABLECALLBACK)EnableDxgkrnlTelemetryProviderCallback,
          0LL);
        TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
        TraceLoggingRegisterEx(
          (TraceLoggingHProvider)&dword_1C0079B30,
          (TLG_PENABLECALLBACK)EnableDriverDiagnosticsNotificationsTelemetryProviderCallback,
          0LL);
        TraceLoggingRegisterEx(
          (TraceLoggingHProvider)&dword_1C0079B70,
          (TLG_PENABLECALLBACK)EnableDisplayTelemetryProviderCallback,
          0LL);
        v14 = ExSubscribeWnfStateChange(
                &gScreenStudyEventSubscription,
                &WNF_SRUM_SCREENONSTUDY_SESSION,
                1LL,
                0LL,
                WnfScreenOnCallback,
                0LL);
        v17 = v14;
        if ( v14 < 0 )
        {
          v18 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v18 + 24) = v17;
          WdLogEvent5_WdError(v18);
          gScreenStudyEventSubscription = 0LL;
        }
        bTracingEnabled = 0;
        McGenEventRegister(&DxgkControlGuid, v15, &DxgkControlGuid_Context, &DxgkControlGuid_Context);
        v45 = 0LL;
        v44 = 0;
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v19, &EventProfilerEnter, v20, 0);
        DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 0);
        v46[0] = &DxgkControlGuid;
        v46[1] = &Dxgk_WDI_NotifyUser;
        WdDiagInit(v46);
        RtlInitUnicodeString(&DestinationString, L"\\Device\\DxgKrnl");
        DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)DxgkDeviceIoctl;
        DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)DxgkInternalDeviceIoctl;
        DriverObject->DriverUnload = (PDRIVER_UNLOAD)DxgkUnload;
        RtlInitUnicodeString(&DefaultSDDLString, L"D:P(A;;GRGW;;;S-1-5-83-0)");
        v21 = WdmlibIoCreateDeviceSecure(
                DriverObject,
                0,
                &DestinationString,
                0x22u,
                0x100u,
                v43,
                &DefaultSDDLString,
                &GUID_SD_DXGKRNL_DRIVER_OBJECT,
                &g_pDeviceObject);
        v25 = v21;
        if ( v21 < 0
          || (v27 = DxgkInitialPower(), v25 = v27, v27 < 0)
          || (v29 = MonitorInitializeGlobal(v23, v22, v24, v28), v25 = v29, v29 < 0)
          || (v30 = LPMDisplayInitializeGlobal(), v25 = v30, v30 < 0) )
        {
          v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
          *(_QWORD *)(v26 + 24) = v25;
          WdLogEvent5_WdWarning(v26);
        }
        else
        {
          DxgkInitIoMmu();
          DxgDbgInit(v31);
          TdrInit();
          v32 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
          v25 = v32;
          if ( v32 >= 0 )
          {
            LODWORD(v25) = 0;
LABEL_26:
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
            if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v40, &EventProfilerExit, v41, v44);
            return v25;
          }
          v34 = WdLogNewEntry5_WdError(v33);
          *(_QWORD *)(v34 + 24) = v25;
          WdLogEvent5_WdError(v34);
        }
        DxgkCleanupPower();
        MonitorCleanupGlobal(v36, v35, v37, v38);
        v39 = g_pDeviceObject;
        if ( g_pDeviceObject )
        {
          IoDeleteDevice(g_pDeviceObject);
          g_pDeviceObject = 0LL;
        }
        DXGGLOBAL::DestroyGlobal((__int64)v39);
        goto LABEL_26;
      }
    }
  }
  return result;
}
