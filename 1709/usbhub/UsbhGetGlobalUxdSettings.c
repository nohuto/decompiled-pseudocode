/*
 * XREFs of UsbhGetGlobalUxdSettings @ 0x1C0020A90
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C001E070 (UsbhUpdateUxdSettings.c)
 *     UsbhRegPnpStart @ 0x1C0020720 (UsbhRegPnpStart.c)
 *     UsbhDeleteUxdSettings @ 0x1C0058228 (UsbhDeleteUxdSettings.c)
 *     UsbhUxdShutdown @ 0x1C0058CEC (UsbhUxdShutdown.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C004E24C (WPP_RECORDER_SF_SD.c)
 */

__int64 __fastcall UsbhGetGlobalUxdSettings(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64)); // rax
  unsigned int v4; // eax
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // esi
  _QWORD *v8; // rbx
  int v10; // [rsp+20h] [rbp-E0h]
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall *v13)(int, int, int, int, __int64, __int64); // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+68h] [rbp-98h]
  const wchar_t *v15; // [rsp+70h] [rbp-90h]
  _QWORD *v16; // [rsp+78h] [rbp-88h] BYREF
  int v17; // [rsp+80h] [rbp-80h]
  _QWORD *v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v20)(int, int, int, int, __int64, __int64); // [rsp+98h] [rbp-68h]
  int v21; // [rsp+A0h] [rbp-60h]
  const wchar_t *v22; // [rsp+A8h] [rbp-58h]
  char *v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+B8h] [rbp-48h]
  char *v25; // [rsp+C0h] [rbp-40h]
  int v26; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v27)(int, int, int, int, __int64, __int64); // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  const wchar_t *v29; // [rsp+E0h] [rbp-20h]
  _QWORD *v30; // [rsp+E8h] [rbp-18h]
  int v31; // [rsp+F0h] [rbp-10h]
  _QWORD *v32; // [rsp+F8h] [rbp-8h]
  int v33; // [rsp+100h] [rbp+0h]
  __int64 (__fastcall *v34)(int, int, int, int, __int64, __int64); // [rsp+108h] [rbp+8h]
  int v35; // [rsp+110h] [rbp+10h]
  const wchar_t *v36; // [rsp+118h] [rbp+18h]
  char *v37; // [rsp+120h] [rbp+20h]
  int v38; // [rsp+128h] [rbp+28h]
  int *v39; // [rsp+130h] [rbp+30h]
  int v40; // [rsp+138h] [rbp+38h]
  __int64 v41; // [rsp+140h] [rbp+40h]
  int v42; // [rsp+148h] [rbp+48h]
  __int128 v43; // [rsp+150h] [rbp+50h]
  int v44; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]
  int v46; // [rsp+170h] [rbp+70h]

  v16 = a2;
  v11 = 0;
  *a2 = 0LL;
  a2[1] = 0LL;
  v13 = UsbhQueryGlobalHubValue;
  v15 = L"UxdGlobalDeleteOnShutdown";
  v2 = 280;
  v14 = 0;
  v22 = L"UxdGlobalDeleteOnReload";
  v23 = (char *)a2 + 4;
  v25 = (char *)a2 + 4;
  v29 = L"UxdGlobalDeleteOnDisconnect";
  v30 = a2 + 1;
  v32 = a2 + 1;
  v36 = L"UxdGlobalEnable";
  v37 = (char *)a2 + 12;
  v39 = &v11;
  v17 = 4;
  v18 = a2;
  v19 = 4;
  v20 = UsbhQueryGlobalHubValue;
  v21 = 0;
  v24 = 4;
  v26 = 4;
  v27 = UsbhQueryGlobalHubValue;
  v28 = 0;
  v31 = 4;
  v33 = 4;
  v34 = UsbhQueryGlobalHubValue;
  v35 = 0;
  v38 = 4;
  v40 = 4;
  v41 = 0LL;
  v42 = 0;
  v43 = 0LL;
  v44 = 0;
  v45 = 0LL;
  v46 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      61,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids);
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64)))MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64)))RtlQueryRegistryValues;
  v10 = 0;
  v4 = SystemRoutineAddress(1LL, L"usbhub\\uxd_control\\policy", &v13);
  v7 = v4;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      62,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      v4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v5,
      63,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      (__int64)L"usbhub\\uxd_control\\policy");
  v8 = &v16;
  do
  {
    if ( !*(v8 - 3) )
      break;
    if ( *((_DWORD *)v8 + 2) == 4 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_SD(WPP_GLOBAL_Control->DeviceExtension, *(_DWORD *)*v8, v5, v6, v10, *(v8 - 1), *(_DWORD *)*v8);
    v8 += 7;
    v2 -= 56;
  }
  while ( v2 >= 0x38 );
  return v7;
}
