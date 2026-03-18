/*
 * XREFs of UsbhGetGlobalUxdSettings @ 0x1C001C3D0
 * Callers:
 *     UsbhRegPnpStart @ 0x1C001C240 (UsbhRegPnpStart.c)
 *     UsbhUpdateUxdSettings @ 0x1C0022298 (UsbhUpdateUxdSettings.c)
 *     UsbhDeleteUxdSettings @ 0x1C0058328 (UsbhDeleteUxdSettings.c)
 *     UsbhUxdShutdown @ 0x1C0058DB8 (UsbhUxdShutdown.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00454FC (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C004D560 (WPP_RECORDER_SF_SD.c)
 */

__int64 __fastcall UsbhGetGlobalUxdSettings(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64)); // rax
  unsigned int v4; // eax
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // esi
  PDEVICE_OBJECT v9; // r10
  _QWORD *v10; // rbx
  int v12; // [rsp+20h] [rbp-E0h]
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall *v15)(int, int, int, int, __int64, __int64); // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+68h] [rbp-98h]
  const wchar_t *v17; // [rsp+70h] [rbp-90h]
  _QWORD *v18; // [rsp+78h] [rbp-88h] BYREF
  int v19; // [rsp+80h] [rbp-80h]
  _QWORD *v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v22)(int, int, int, int, __int64, __int64); // [rsp+98h] [rbp-68h]
  int v23; // [rsp+A0h] [rbp-60h]
  const wchar_t *v24; // [rsp+A8h] [rbp-58h]
  char *v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+B8h] [rbp-48h]
  char *v27; // [rsp+C0h] [rbp-40h]
  int v28; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v29)(int, int, int, int, __int64, __int64); // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D8h] [rbp-28h]
  const wchar_t *v31; // [rsp+E0h] [rbp-20h]
  _QWORD *v32; // [rsp+E8h] [rbp-18h]
  int v33; // [rsp+F0h] [rbp-10h]
  _QWORD *v34; // [rsp+F8h] [rbp-8h]
  int v35; // [rsp+100h] [rbp+0h]
  __int64 (__fastcall *v36)(int, int, int, int, __int64, __int64); // [rsp+108h] [rbp+8h]
  int v37; // [rsp+110h] [rbp+10h]
  const wchar_t *v38; // [rsp+118h] [rbp+18h]
  char *v39; // [rsp+120h] [rbp+20h]
  int v40; // [rsp+128h] [rbp+28h]
  int *v41; // [rsp+130h] [rbp+30h]
  int v42; // [rsp+138h] [rbp+38h]
  __int64 v43; // [rsp+140h] [rbp+40h]
  int v44; // [rsp+148h] [rbp+48h]
  __int128 v45; // [rsp+150h] [rbp+50h]
  int v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  int v48; // [rsp+170h] [rbp+70h]

  v18 = a2;
  v13 = 0;
  *a2 = 0LL;
  a2[1] = 0LL;
  v15 = UsbhQueryGlobalHubValue;
  v17 = L"UxdGlobalDeleteOnShutdown";
  v2 = 280;
  v16 = 0;
  v24 = L"UxdGlobalDeleteOnReload";
  v25 = (char *)a2 + 4;
  v27 = (char *)a2 + 4;
  v31 = L"UxdGlobalDeleteOnDisconnect";
  v32 = a2 + 1;
  v34 = a2 + 1;
  v38 = L"UxdGlobalEnable";
  v39 = (char *)a2 + 12;
  v41 = &v13;
  v19 = 4;
  v20 = a2;
  v21 = 4;
  v22 = UsbhQueryGlobalHubValue;
  v23 = 0;
  v26 = 4;
  v28 = 4;
  v29 = UsbhQueryGlobalHubValue;
  v30 = 0;
  v33 = 4;
  v35 = 4;
  v36 = UsbhQueryGlobalHubValue;
  v37 = 0;
  v40 = 4;
  v42 = 4;
  v43 = 0LL;
  v44 = 0;
  v45 = 0LL;
  v46 = 0;
  v47 = 0LL;
  v48 = 0;
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
  v12 = 0;
  v4 = SystemRoutineAddress(1LL, L"usbhub\\uxd_control\\policy", &v15);
  v8 = v4;
  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      62,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      v4);
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v6,
        63,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        (__int64)L"usbhub\\uxd_control\\policy");
      v9 = WPP_GLOBAL_Control;
    }
  }
  v10 = &v18;
  do
  {
    if ( !*(v10 - 3) )
      break;
    if ( *((_DWORD *)v10 + 2) == 4 && LOWORD(v9->DeviceType) )
    {
      WPP_RECORDER_SF_SD(v9->DeviceExtension, v5, v6, v7, v12, *(v10 - 1), *(_DWORD *)*v10);
      v9 = WPP_GLOBAL_Control;
    }
    v10 += 7;
    v2 -= 56;
  }
  while ( v2 >= 0x38 );
  return v8;
}
