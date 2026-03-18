/*
 * XREFs of Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x1C004D270
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00454FC (WPP_RECORDER_SF_S.c)
 */

_UNKNOWN **__fastcall Usbh_USB_REQUEST_CONFIG_ON_RESET(__int64 a1, __int64 a2, _BYTE *a3, int a4)
{
  _UNKNOWN **result; // rax
  __int64 v8; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    result = (_UNKNOWN **)WPP_RECORDER_SF_S(
                            WPP_GLOBAL_Control->DeviceExtension,
                            0,
                            (_DWORD)a3,
                            40,
                            (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
                            a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = a4;
      result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              0,
                              1u,
                              0x29u,
                              (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
                              v8);
    }
  }
  if ( *a3 )
  {
    result = (_UNKNOWN **)PdoExt(a1);
    *((_DWORD *)result + 356) |= 0x4000u;
  }
  return result;
}
