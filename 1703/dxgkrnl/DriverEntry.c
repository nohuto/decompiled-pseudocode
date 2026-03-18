/*
 * XREFs of DriverEntry @ 0x1C01EB008
 * Callers:
 *     GsDriverEntry @ 0x1C01EBB30 (GsDriverEntry.c)
 * Callees:
 *     ?Feature_DxgkrnlPrereleaseDiagnostic__private_IsEnabled@@YAHXZ @ 0x1C0011AA0 (-Feature_DxgkrnlPrereleaseDiagnostic__private_IsEnabled@@YAHXZ.c)
 *     McGenEventRegister @ 0x1C0011B58 (McGenEventRegister.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     MonitorCleanupGlobal @ 0x1C0045D8C (MonitorCleanupGlobal.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C011A5A4 (WdmlibIoCreateDeviceSecure.c)
 *     ?TdrInit@@YAXXZ @ 0x1C011B95C (-TdrInit@@YAXXZ.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1C011C51C (-DxgDbgInit@@YAXXZ.c)
 *     MonitorInitializeGlobal @ 0x1C011C58C (MonitorInitializeGlobal.c)
 *     DxgkInitialPower @ 0x1C011CBF4 (DxgkInitialPower.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C011CC48 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx @ 0x1C011CD2C (TraceLoggingRegisterEx.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C011CF28 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C011D064 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C01952D8 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DxgkCleanupPower @ 0x1C01CABF0 (DxgkCleanupPower.c)
 *     LPMDisplayInitializeGlobal @ 0x1C01EB2E4 (LPMDisplayInitializeGlobal.c)
 *     DpiInitializeGlobalState @ 0x1C01EB3C4 (DpiInitializeGlobalState.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS ProcessNotifyRoutine; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rcx
  NTSTATUS result; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  PETWENABLECALLBACK v23; // rdx
  LPCGUID v24; // rcx
  PVOID v25; // r8
  PREGHANDLE v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r8
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  PVOID v53; // rcx
  BOOLEAN v54; // [rsp+30h] [rbp-61h]
  _QWORD v55[2]; // [rsp+58h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  __int64 v57; // [rsp+78h] [rbp-19h] BYREF
  int v58; // [rsp+80h] [rbp-11h]
  KDEVICE_QUEUE *p_DeviceQueue; // [rsp+88h] [rbp-9h]
  unsigned __int8 *v60; // [rsp+90h] [rbp-1h]
  int v61; // [rsp+98h] [rbp+7h]
  unsigned __int8 *v62; // [rsp+A0h] [rbp+Fh]
  int v63; // [rsp+A8h] [rbp+17h]
  __int64 v64; // [rsp+B0h] [rbp+1Fh]
  int v65; // [rsp+B8h] [rbp+27h]
  _BYTE v66[40]; // [rsp+C0h] [rbp+2Fh] BYREF
  __int64 SystemInformation; // [rsp+100h] [rbp+6Fh] BYREF

  SystemInformation = (__int64)RegistryPath;
  g_pDriverObject = DriverObject;
  ProcessNotifyRoutine = PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 0);
  v6 = ProcessNotifyRoutine;
  if ( ProcessNotifyRoutine < 0 )
  {
    v42 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v42 + 24) = v6;
    WdLogEvent5_WdError(v42);
  }
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (g_OSTestSigningEnabled = 1, (SystemInformation & 0x200000000LL) == 0) )
  {
    g_OSTestSigningEnabled = 0;
  }
  if ( (unsigned int)Feature_DxgkrnlPrereleaseDiagnostic__private_IsEnabled(v8, v7, v9, v10) )
    g_IsInternalRelease = 1;
  v57 = 0LL;
  v64 = 0LL;
  v65 = 0;
  p_DeviceQueue = &DeviceObject.DeviceQueue;
  v58 = 288;
  v60 = &g_IsInternalRelease;
  v61 = 67108868;
  v62 = &g_IsInternalRelease;
  v63 = 4;
  memset(v66, 0, sizeof(v66));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v57, 0LL, 0LL);
  g_IsInternalRelease = g_IsInternalRelease != 0;
  g_IsInternalReleaseOrDbg = g_IsInternalRelease;
  if ( RtlGetProductInfo(0xAu, 0, 0, 0, &g_ProductType) )
  {
    g_IsMobileCore = g_ProductType == 104 || g_ProductType == 123;
  }
  else
  {
    v43 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v43 + 24) = 307LL;
    WdLogEvent5_WdError(v43);
  }
  WdInitialize();
  result = DpiInitializeGlobalState();
  if ( result >= 0 )
  {
    result = DXGGLOBAL::CreateGlobal(v15, v14, v16, v17);
    if ( result >= 0 )
    {
      result = CCD_BTL::CreateGlobal(v19, v18, v20, v21);
      if ( result >= 0 )
      {
        TlgRegisterAggregateProviderEx(v22);
        TraceLoggingRegisterEx((TraceLoggingHProvider)dword_1C006E850, 0LL, 0LL);
        TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
        bTracingEnabled = 0;
        McGenEventRegister(v24, v23, v25, v26);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v27, &EventProfilerEnter, v28, 0);
        v55[0] = &DeviceObject.Queue.Wcb.BufferChainingDpc;
        v55[1] = &DeviceObject.Queue.Wcb.DeviceObject;
        WdDiagInit(v55);
        RtlInitUnicodeString(&DestinationString, (PCWSTR)&DeviceObject.Queue.Wcb.NumberOfChannels);
        DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)DxgkInternalDeviceIoctl;
        DriverObject->DriverUnload = (PDRIVER_UNLOAD)DxgkUnload;
        v29 = WdmlibIoCreateDeviceSecure(
                DriverObject,
                0,
                &DestinationString,
                0x22u,
                0x100u,
                v54,
                &SDDL_DEVOBJ_KERNEL_ONLY,
                (LPCGUID)&DeviceObject.Queue,
                (PDEVICE_OBJECT *)&g_pDeviceObject);
        v34 = v29;
        if ( v29 < 0
          || (v35 = DxgkInitialPower(), v34 = v35, v35 < 0)
          || (v36 = MonitorInitializeGlobal(v31, v30, v32, v33), v34 = v36, v36 < 0)
          || (v37 = LPMDisplayInitializeGlobal(), v34 = v37, v37 < 0) )
        {
          v44 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
          *(_QWORD *)(v44 + 24) = v34;
          WdLogEvent5_WdWarning(v44);
        }
        else
        {
          DxgDbgInit(v31, v30, v32, v33);
          TdrInit();
          v38 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
          v34 = v38;
          if ( v38 >= 0 )
          {
            LODWORD(v34) = 0;
LABEL_21:
            if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(v40, &EventProfilerExit, v41, 0);
            return v34;
          }
          v45 = WdLogNewEntry5_WdError(v40, v39);
          *(_QWORD *)(v45 + 24) = v34;
          WdLogEvent5_WdError(v45);
        }
        DxgkCleanupPower();
        MonitorCleanupGlobal(v47, v46, v48, v49);
        v53 = g_pDeviceObject;
        if ( g_pDeviceObject )
        {
          IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
          g_pDeviceObject = 0LL;
        }
        DXGGLOBAL::DestroyGlobal((__int64)v53, v50, v51, v52);
        goto LABEL_21;
      }
    }
  }
  return result;
}
