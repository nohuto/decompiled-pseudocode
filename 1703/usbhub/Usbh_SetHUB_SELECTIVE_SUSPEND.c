/*
 * XREFs of Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1C004CA10
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00454FC (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_SetHUB_SELECTIVE_SUSPEND(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  _DWORD *result; // rax
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      (_DWORD)a3,
      16,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = a4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x11u,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        v8);
    }
  }
  if ( a4 == 4 && *a3 )
  {
    result = FdoExt(a1);
    result[820] = 4;
  }
  else
  {
    result = FdoExt(a1);
    result[820] = 5;
  }
  return result;
}
