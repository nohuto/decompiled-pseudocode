/*
 * XREFs of DriverEntry @ 0x1C0205078
 * Callers:
 *     GsDriverEntry @ 0x1C0205010 (GsDriverEntry.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C000BFA0 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     McGenEventRegister @ 0x1C0014234 (McGenEventRegister.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     MonitorCleanupGlobal @ 0x1C0036F24 (MonitorCleanupGlobal.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C010E7DC (WdmlibIoCreateDeviceSecure.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C011BB74 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C011BBC8 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?TdrInit@@YAXXZ @ 0x1C011C8F8 (-TdrInit@@YAXXZ.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1C011CE50 (-DxgDbgInit@@YAXXZ.c)
 *     MonitorInitializeGlobal @ 0x1C011CEC0 (MonitorInitializeGlobal.c)
 *     DxgkInitialPower @ 0x1C011D528 (DxgkInitialPower.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C011D57C (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx @ 0x1C011D668 (TraceLoggingRegisterEx.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C01A9F00 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DxgkCleanupPower @ 0x1C01E4FC8 (DxgkCleanupPower.c)
 *     LPMDisplayInitializeGlobal @ 0x1C020536C (LPMDisplayInitializeGlobal.c)
 *     DpiInitializeGlobalState @ 0x1C0205448 (DpiInitializeGlobalState.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS ProcessNotifyRoutine; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  NTSTATUS result; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  PETWENABLECALLBACK v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PVOID v33; // rcx
  int ReturnedProductType; // [rsp+20h] [rbp-69h]
  BOOLEAN v35; // [rsp+28h] [rbp-61h]
  _QWORD v36[2]; // [rsp+50h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  __int64 v38; // [rsp+70h] [rbp-19h] BYREF
  int v39; // [rsp+78h] [rbp-11h]
  const wchar_t *v40; // [rsp+80h] [rbp-9h]
  unsigned __int8 *v41; // [rsp+88h] [rbp-1h]
  int v42; // [rsp+90h] [rbp+7h]
  unsigned __int8 *v43; // [rsp+98h] [rbp+Fh]
  int v44; // [rsp+A0h] [rbp+17h]
  __int64 v45; // [rsp+A8h] [rbp+1Fh]
  int v46; // [rsp+B0h] [rbp+27h]
  _BYTE v47[40]; // [rsp+B8h] [rbp+2Fh] BYREF
  __int64 SystemInformation; // [rsp+F0h] [rbp+67h] BYREF

  g_pDriverObject = DriverObject;
  ProcessNotifyRoutine = PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 0);
  v5 = ProcessNotifyRoutine;
  if ( ProcessNotifyRoutine < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v27 + 24) = v5;
    WdLogEvent5_WdError(v27);
  }
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (g_OSTestSigningEnabled = 1, (SystemInformation & 0x200000000LL) == 0) )
  {
    g_OSTestSigningEnabled = 0;
  }
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_DxgkrnlPrereleaseDiagnostic__private_propertyCache,
    9011807LL,
    (__int64)&unk_1C003D424,
    0,
    ReturnedProductType);
  v38 = 0LL;
  v45 = 0LL;
  v46 = 0;
  v40 = L"IsInternalRelease";
  v39 = 288;
  v41 = &g_IsInternalRelease;
  v42 = 67108868;
  v43 = &g_IsInternalRelease;
  v44 = 4;
  memset(v47, 0, sizeof(v47));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v38, 0LL, 0LL);
  g_IsInternalRelease = g_IsInternalRelease != 0;
  g_IsInternalReleaseOrDbg = g_IsInternalRelease;
  if ( RtlGetProductInfo(0xAu, 0, 0, 0, &g_ProductType) )
  {
    g_IsMobileCore = g_ProductType == 104 || g_ProductType == 123;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v28 + 24) = 306LL;
    WdLogEvent5_WdError(v28);
  }
  WdInitialize();
  result = DpiInitializeGlobalState();
  if ( result >= 0 )
  {
    result = DXGGLOBAL::CreateGlobal(v9, v8);
    if ( result >= 0 )
    {
      result = CCD_BTL::CreateGlobal(v10);
      if ( result >= 0 )
      {
        TlgRegisterAggregateProviderEx(v12, v11);
        TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C005F850, 0LL, 0LL);
        TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
        bTracingEnabled = 0;
        McGenEventRegister(&DxgkControlGuid, v13, &DxgkControlGuid_Context, &DxgkControlGuid_Context);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v14, &EventProfilerEnter, v15, 0);
        v36[0] = &DxgkControlGuid;
        v36[1] = &Dxgk_WDI_NotifyUser;
        WdDiagInit(v36);
        RtlInitUnicodeString(&DestinationString, L"\\Device\\DxgKrnl");
        DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)DxgkInternalDeviceIoctl;
        DriverObject->DriverUnload = (PDRIVER_UNLOAD)DxgkUnload;
        v16 = WdmlibIoCreateDeviceSecure(
                DriverObject,
                0,
                &DestinationString,
                0x22u,
                0x100u,
                v35,
                &SDDL_DEVOBJ_KERNEL_ONLY,
                &GUID_SD_DXGKRNL_DRIVER_OBJECT,
                (PDEVICE_OBJECT *)&g_pDeviceObject);
        v20 = v16;
        if ( v16 < 0
          || (v21 = DxgkInitialPower(), v20 = v21, v21 < 0)
          || (v22 = MonitorInitializeGlobal(v18, v17), v20 = v22, v22 < 0)
          || (v23 = LPMDisplayInitializeGlobal(), v20 = v23, v23 < 0) )
        {
          v29 = WdLogNewEntry5_WdWarning(v18, v17, v19);
          *(_QWORD *)(v29 + 24) = v20;
          WdLogEvent5_WdWarning(v29);
        }
        else
        {
          DxgDbgInit(v18);
          TdrInit();
          v24 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
          v20 = v24;
          if ( v24 >= 0 )
          {
            LODWORD(v20) = 0;
LABEL_19:
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v25, &EventProfilerExit, v26, 0);
            return v20;
          }
          v30 = WdLogNewEntry5_WdError(v25);
          *(_QWORD *)(v30 + 24) = v20;
          WdLogEvent5_WdError(v30);
        }
        DxgkCleanupPower();
        MonitorCleanupGlobal(v32, v31);
        v33 = g_pDeviceObject;
        if ( g_pDeviceObject )
        {
          IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
          g_pDeviceObject = 0LL;
        }
        DXGGLOBAL::DestroyGlobal((__int64)v33);
        goto LABEL_19;
      }
    }
  }
  return result;
}
