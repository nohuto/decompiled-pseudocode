/*
 * XREFs of ApiSetEditionHandleAltTab @ 0x1C000EE00
 * Callers:
 *     xxxKeyEvent @ 0x1C0010760 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionHandleAltTab(
        char a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int16 a8)
{
  unsigned __int16 v10; // si
  __int64 result; // rax
  __int16 v13; // dx
  __int64 v14; // rcx

  v10 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      292,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  result = IsEditionHandleAltTabSupported();
  if ( (int)result >= 0 )
  {
    LOBYTE(v14) = a1;
    result = EditionHandleAltTab(v14, v10, a3, a4, a5, a6, a7, a8);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v13,
             14,
             293,
             (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  return result;
}
