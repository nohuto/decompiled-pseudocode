/*
 * XREFs of DriverEntry @ 0x1C005A740
 * Callers:
 *     DriverEntry_0 @ 0x1C0007170 (DriverEntry_0.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     McGenEventRegister @ 0x1C00172B4 (McGenEventRegister.c)
 *     WppCleanupKm @ 0x1C005AA80 (WppCleanupKm.c)
 *     WppInitKm @ 0x1C005AB14 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C005ABCC (WppLoadTracingSupport.c)
 *     Counter_Register @ 0x1C005FA6C (Counter_Register.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  _QWORD *v4; // rax
  int v5; // ebx
  PETWENABLECALLBACK v6; // rdx
  LPCGUID v7; // rcx
  __int64 SystemInformation; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+48h] [rbp-B8h] BYREF
  char v11; // [rsp+4Ch] [rbp-B4h]
  ULONG ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v15[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v16[8]; // [rsp+90h] [rbp-70h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+D0h] [rbp-30h] BYREF

  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = DriverObject;
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    *(&WPP_MAIN_CB.AlignmentRequirement + 1) = 512;
    WPP_MAIN_CB.AlignmentRequirement = 0x40000000;
  }
  RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"IoTryQueueWorkItem");
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = MmGetSystemRoutineAddress(&DestinationString);
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBXHCI;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(DriverObject, RegistryPath);
  v10 = 8;
  v11 = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v10);
  memset(v16, 0, 0x38uLL);
  v16[6] = off_1C004E250;
  LODWORD(v16[0]) = 56;
  v16[3] = 0x100000001LL;
  v16[1] = DriverCleanup;
  memset(v15, 0, sizeof(v15));
  LODWORD(v15[0]) = 32;
  v15[1] = Controller_WdfEvtDeviceAdd;
  HIDWORD(v15[3]) = 1464027224;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         v16,
         v15,
         &v13) < 0 )
    WppCleanupKm(DriverObject);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v13,
                   off_1C004E250);
  WPP_MAIN_CB.DeviceQueue.Lock = (unsigned __int64)v4;
  v4[1] = v4;
  *v4 = v4;
  KeInitializeSpinLock(v4 + 2);
  *(_DWORD *)(WPP_MAIN_CB.DeviceQueue.Lock + 24) = 0;
  SystemInformation = 8LL;
  v5 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength);
  if ( v5 >= 0 && (SystemInformation & 0x200000000LL) != 0 )
  {
    *(_BYTE *)(WPP_MAIN_CB.DeviceQueue.Lock + 28) = 1;
  }
  else
  {
    v5 = 0;
    *(_BYTE *)(WPP_MAIN_CB.DeviceQueue.Lock + 28) = 0;
  }
  imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  dword_1C004F218 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
  qword_1C004F21C = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  dword_1C004F224 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
  dword_1C004F228 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  qword_1C004F240 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 3448))(WdfDriverGlobals);
  McGenEventRegister(v7, v6, &MS_USBXHCI_ETW_PROVIDER_Context, &MS_USBXHCI_ETW_PROVIDER_Context);
  EtwSetInformation(
    MS_USBXHCI_ETW_PROVIDER_Context,
    EventProviderSetTraits,
    &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
    (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  Counter_Register();
  return v5;
}
