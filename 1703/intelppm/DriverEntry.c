/*
 * XREFs of DriverEntry @ 0x1C0031040
 * Callers:
 *     DriverEntry_0 @ 0x1C0003B90 (DriverEntry_0.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     WppLoadTracingSupport @ 0x1C001A914 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C001AA14 (WppInitKm.c)
 *     EvtDriverUnload @ 0x1C00255B0 (EvtDriverUnload.c)
 *     WppCleanupKm @ 0x1C00255F8 (WppCleanupKm.c)
 *     ProcLibGlobalInit @ 0x1C0031254 (ProcLibGlobalInit.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  int v4; // eax
  NTSTATUS v5; // ebx
  unsigned __int16 v7; // r9
  unsigned int v8; // r8d
  __int64 v9; // [rsp+28h] [rbp-40h]
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_ProcessorDriverTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  memset(v10, 0, 0x20uLL);
  LODWORD(v10[0]) = 32;
  v10[1] = EvtDriverDeviceAdd;
  v10[2] = EvtDriverUnload;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD, _QWORD *, _QWORD))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         0LL,
         v10,
         0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 10;
    v8 = 4;
  }
  else
  {
    dword_1C0015D94 = KeQueryActiveProcessorAffinity(&unk_1C0015DF8);
    KeInitializeAffinityEx(&unk_1C0016088);
    v4 = ProcLibGlobalInit((PDEVICE_OBJECT)DriverObject);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_4;
    }
    v7 = 11;
    v8 = 3;
  }
  LODWORD(v9) = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    v8,
    v7,
    (__int64)&WPP_741d0d3a9aa936a171bf32bced4a65e3_Traceguids,
    v9);
LABEL_4:
  if ( v5 < 0 )
  {
    EvtDriverUnload();
    WppCleanupKm((__int64)DriverObject);
  }
  return v5;
}
