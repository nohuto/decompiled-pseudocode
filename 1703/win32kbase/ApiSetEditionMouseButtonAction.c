/*
 * XREFs of ApiSetEditionMouseButtonAction @ 0x1C013B65C
 * Callers:
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01192F0 (-xxxMKButtonSetState@@YAHG@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionMouseButtonAction(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 result; // rax
  int v7; // edx

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      192,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  result = IsEditionMouseButtonActionSupported();
  if ( (int)result >= 0 )
    result = EditionMouseButtonAction(a1, v4, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v7,
             14,
             193,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return result;
}
