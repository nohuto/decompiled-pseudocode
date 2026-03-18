/*
 * XREFs of DriverEntry @ 0x1C0077010
 * Callers:
 *     DriverEntry_0 @ 0x1C0038A70 (DriverEntry_0.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001008 (RtlStringCchPrintfA.c)
 *     McGenEventRegister @ 0x1C0001250 (McGenEventRegister.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBREG_QueryGlobalUsbLtmSettings @ 0x1C002C70C (HUBREG_QueryGlobalUsbLtmSettings.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 *     WppLoadTracingSupport @ 0x1C0065008 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C0065364 (WppInitKm.c)
 *     WppCleanupKm @ 0x1C006541C (WppCleanupKm.c)
 *     HUBREG_QueryGlobalHubValues @ 0x1C0070114 (HUBREG_QueryGlobalHubValues.c)
 *     HUBREG_QueryGlobalUsb20HardwareLpmSettings @ 0x1C0071418 (HUBREG_QueryGlobalUsb20HardwareLpmSettings.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v3; // rbx
  NTSTATUS v5; // edi
  __int64 v6; // rax
  PWDF_DRIVER_GLOBALS v7; // rcx
  ETWENABLECALLBACK *v8; // rdx
  const GUID *v9; // rcx
  int v10; // eax
  __int64 v12; // [rsp+28h] [rbp-D8h]
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  char v14; // [rsp+44h] [rbp-BCh]
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v18[7]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v19[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-40h] BYREF
  int v21; // [rsp+C8h] [rbp-38h]
  int v22; // [rsp+CCh] [rbp-34h]
  __int64 v23; // [rsp+D0h] [rbp-30h]
  char v24; // [rsp+D8h] [rbp-28h]
  int v25; // [rsp+DCh] [rbp-24h]
  char pszDest[16]; // [rsp+E0h] [rbp-20h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+F0h] [rbp-10h] BYREF

  g_Usbhub3DriverObject = (__int64)DriverObject;
  VersionInformation.dwOSVersionInfoSize = 276;
  v3 = 0LL;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    ExDefaultNonPagedPoolType = NonPagedPoolNx;
    ExDefaultMdlProtection = 0x40000000;
  }
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBHUB3;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  v13 = 8;
  v14 = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v13);
  memset(v19, 0, sizeof(v19));
  LODWORD(v19[0]) = 32;
  v19[1] = HUBFDO_EvtDeviceAdd;
  HIDWORD(v19[3]) = 1999849557;
  memset(v18, 0, sizeof(v18));
  v18[6] = off_1C005B110;
  v18[1] = DriverCleanup;
  LODWORD(v18[0]) = 56;
  v18[3] = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         v18,
         v19,
         &v15);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v15,
           off_1C005B110);
    v20 = 48LL;
    v25 = 16;
    pszDest[0] = 0;
    v3 = v6;
    v23 = 0LL;
    v24 = 0;
    v21 = 1024;
    v22 = 512;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "hub driver");
    v5 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v20, v3 + 64);
    if ( v5 < 0 )
      return v5;
    memset(v18, 0, sizeof(v18));
    v18[4] = v15;
    LODWORD(v18[0]) = 56;
    v18[3] = 0x100000001LL;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64))(WdfFunctions_01015 + 2496))(
           WdfDriverGlobals,
           v18,
           v3 + 32);
    if ( v5 < 0 )
      return v5;
    v7 = WdfDriverGlobals;
    *(_QWORD *)(v3 + 24) = v3 + 16;
    *(_QWORD *)(v3 + 16) = v3 + 16;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64))(WdfFunctions_01015 + 2496))(
           v7,
           v18,
           v3 + 56);
    if ( v5 < 0 )
      return v5;
    *(_QWORD *)(v3 + 48) = v3 + 40;
    *(_QWORD *)(v3 + 40) = v3 + 40;
    McGenEventRegister(v9, v8, &MS_USBHUB3_ETW_PROVIDER_Context, &MS_USBHUB3_ETW_PROVIDER_Context);
    v10 = SleepstudyHelper_Initialize(v3 + 96, DriverObject);
    if ( v10 < 0 )
    {
      *(_BYTE *)(v3 + 92) = 0;
      LODWORD(v12) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 64),
        4u,
        2u,
        0xAu,
        (__int64)&WPP_f9045adce2703848065a033171d3f259_Traceguids,
        v12);
    }
    else
    {
      *(_BYTE *)(v3 + 92) = 1;
    }
    EtwSetInformation(
      MS_USBHUB3_ETW_PROVIDER_Context,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    HUBREG_QueryGlobalHubValues(v3);
    HUBREG_QueryGlobalUsb20HardwareLpmSettings(v3);
    HUBREG_QueryGlobalUsbLtmSettings(v3);
    RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
    WPP_MAIN_CB.Queue.ListEntry.Flink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoGetActivityIdIrp");
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoSetActivityIdIrp");
    g_IoSetActivityIdIrp = (__int64 (__fastcall *)(_QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
    v16 = 0LL;
    if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
    {
      ((void (__fastcall *)(const wchar_t *, const wchar_t *, __int64 *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
        L"USBHUB:GLOBAL_FLAGS",
        L"USBHUB",
        &v16);
      if ( (v16 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v3 + 4), 0x20000u);
    }
    imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    qword_1C005E540 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 3448))(WdfDriverGlobals);
    dword_1C005E510 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
    qword_1C005E514 = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
    dword_1C005E51C = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
    dword_1C005E520 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  }
  else
  {
    WppCleanupKm((__int64)DriverObject);
  }
  if ( v5 >= 0 && v3 )
  {
    LODWORD(v12) = *(_DWORD *)(v3 + 4);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 64),
      4u,
      2u,
      0xBu,
      (__int64)&WPP_f9045adce2703848065a033171d3f259_Traceguids,
      v12);
  }
  return v5;
}
