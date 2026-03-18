/*
 * XREFs of Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C0053DE8
 * Callers:
 *     Controller_SetDeviceDescription @ 0x1C0055AB8 (Controller_SetDeviceDescription.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 */

char __fastcall Controller_DriverInstalledDueToCompatibleIdMatch(_QWORD *a1)
{
  char v2; // bl
  struct _DEVICE_OBJECT *v3; // rax
  NTSTATUS DevicePropertyData; // eax
  int v5; // edi
  const wchar_t **i; // rsi
  PVOID Data; // [rsp+28h] [rbp-240h]
  ULONG Type; // [rsp+40h] [rbp-228h] BYREF
  ULONG RequiredSize[3]; // [rsp+44h] [rbp-224h] BYREF
  wchar_t Str1[256]; // [rsp+50h] [rbp-218h] BYREF

  v2 = 0;
  memset(Str1, 0, 0x1FEuLL);
  v3 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(
                                  WdfDriverGlobals,
                                  *a1);
  DevicePropertyData = IoGetDevicePropertyData(
                         v3,
                         &DEVPKEY_Device_MatchingDeviceId,
                         0,
                         0,
                         0x1FCu,
                         Str1,
                         RequiredSize,
                         &Type);
  if ( DevicePropertyData >= 0 )
  {
    v5 = 0;
    for ( i = (const wchar_t **)XhciCompatibleIdList; _wcsicmp(Str1, *i); ++i )
    {
      if ( (unsigned int)++v5 >= 2 )
        return v2;
    }
    return 1;
  }
  else
  {
    LODWORD(Data) = DevicePropertyData;
    WPP_RECORDER_SF_d(a1[9], 3u, 4u, 0x8Cu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, Data);
  }
  return v2;
}
