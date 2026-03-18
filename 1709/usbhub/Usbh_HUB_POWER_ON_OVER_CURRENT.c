/*
 * XREFs of Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1C004D4D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 */

unsigned int __fastcall Usbh_HUB_POWER_ON_OVER_CURRENT(__int64 a1, __int64 a2, _BYTE *a3, int a4)
{
  int v7; // ebx
  unsigned int result; // eax
  __int64 v9; // [rsp+28h] [rbp-10h]

  v7 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      (_DWORD)a3,
      48,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v9) = a4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x31u,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      v9);
  }
  LOBYTE(v7) = *a3 != 0;
  result = *(_DWORD *)(a1 + 2560) & 0xEFFFFFFF;
  *(_DWORD *)(a1 + 2560) = result | (v7 << 28);
  return result;
}
