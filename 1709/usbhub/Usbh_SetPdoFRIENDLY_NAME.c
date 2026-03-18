/*
 * XREFs of Usbh_SetPdoFRIENDLY_NAME @ 0x1C004DA30
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_SetPdoFRIENDLY_NAME(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *result; // rax
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      a3,
      20,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v8) = a4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x15u,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      v8);
  }
  *((_QWORD *)PdoExt(a1) + 276) = a3;
  result = PdoExt(a1);
  result[551] = a4;
  return result;
}
