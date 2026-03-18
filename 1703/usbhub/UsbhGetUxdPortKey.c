/*
 * XREFs of UsbhGetUxdPortKey @ 0x1C0058910
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C0022298 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C001EAF4 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C0058848 (UsbhGetUxdLoadKeySettings.c)
 *     UsbhOpenUxdPortHandle @ 0x1C00589F0 (UsbhOpenUxdPortHandle.c)
 *     WPP_RECORDER_SF_SS @ 0x1C0058EBC (WPP_RECORDER_SF_SS.c)
 */

__int64 __fastcall UsbhGetUxdPortKey(__int64 a1, unsigned int a2, void *a3)
{
  int v5; // edx
  int UxdLoadKeySettings; // ebx
  int v7; // r8d
  PDEVICE_OBJECT v8; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-48h] BYREF
  wchar_t pszDest[16]; // [rsp+48h] [rbp-40h] BYREF

  Handle = 0LL;
  wcscpy(pszDest, L"uxd_port_nnn");
  RtlStringCbPrintfW(pszDest, 0x1AuLL, L"uxd_port_%3.3d", a2);
  UxdLoadKeySettings = UsbhOpenUxdPortHandle(a1, &Handle);
  if ( UxdLoadKeySettings >= 0 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_SS(WPP_GLOBAL_Control->DeviceExtension, v5, v7, 10);
    UxdLoadKeySettings = UsbhGetUxdLoadKeySettings((__int64)v8, Handle, pszDest, a3);
    ZwClose(Handle);
  }
  return (unsigned int)UxdLoadKeySettings;
}
