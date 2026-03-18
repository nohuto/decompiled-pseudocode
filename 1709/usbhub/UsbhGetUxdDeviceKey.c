/*
 * XREFs of UsbhGetUxdDeviceKey @ 0x1C00585E0
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C001E070 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     UsbhBuildUxdDeviceKey @ 0x1C0057F40 (UsbhBuildUxdDeviceKey.c)
 *     WPP_RECORDER_SF_SS @ 0x1C0058DF0 (WPP_RECORDER_SF_SS.c)
 */

__int64 __fastcall UsbhGetUxdDeviceKey(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v5; // rcx
  int v6; // edx
  int v7; // r8d
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const WCHAR *, void **); // rax
  int v10; // [rsp+28h] [rbp-79h]
  void *v11; // [rsp+48h] [rbp-59h] BYREF
  int v12; // [rsp+50h] [rbp-51h]
  __int128 *v13; // [rsp+58h] [rbp-49h]
  __int64 v14; // [rsp+60h] [rbp-41h]
  int v15; // [rsp+68h] [rbp-39h]
  __int64 v16; // [rsp+70h] [rbp-31h]
  int v17; // [rsp+78h] [rbp-29h]
  __int64 v18; // [rsp+80h] [rbp-21h]
  int v19; // [rsp+88h] [rbp-19h]
  __int64 v20; // [rsp+90h] [rbp-11h]
  __int64 v21; // [rsp+98h] [rbp-9h]
  int v22; // [rsp+A0h] [rbp-1h]
  __int64 v23; // [rsp+A8h] [rbp+7h]
  int v24; // [rsp+B0h] [rbp+Fh]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp+17h] BYREF
  __int128 v26; // [rsp+C8h] [rbp+27h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+37h]
  wchar_t v28; // [rsp+E0h] [rbp+3Fh]

  v26 = *(_OWORD *)L"VVVVPPPPRRRR";
  v28 = aVvvvpppprrrr[12];
  v27 = *(_QWORD *)L"RRRR";
  v5 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x12u,
      (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids);
  UsbhBuildUxdDeviceKey((__int64)v5, a2, (wchar_t *)&v26);
  v12 = 4;
  v11 = &UsbhQueryUxdDevice;
  v13 = &v26;
  v14 = a3;
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v23 = 0LL;
  v24 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_SS(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      19,
      v10,
      (__int64)L"usbhub\\uxd_control\\devices",
      (__int64)&v26);
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const WCHAR *, void **))MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const WCHAR *, void **))RtlQueryRegistryValues;
  return SystemRoutineAddress(1LL, L"usbhub\\uxd_control\\devices", &v11);
}
