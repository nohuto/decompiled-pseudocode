/*
 * XREFs of Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x1C004D420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL(__int64 a1, __int64 a2, _BYTE *a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      (_DWORD)a3,
      52,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v8) = a4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x35u,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      v8);
  }
  result = *(_DWORD *)(a1 + 2568) & 0xFFFFFFFD;
  *(_DWORD *)(a1 + 2568) = result | (*a3 != 0 ? 2 : 0);
  return result;
}
