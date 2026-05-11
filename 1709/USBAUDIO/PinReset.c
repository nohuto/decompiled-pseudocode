/*
 * XREFs of PinReset @ 0x1C0014980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E60 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall PinReset(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             a2,
             8,
             18,
             (__int64)&WPP_f45567b61f903821dcfca6276dd00e2d_Traceguids);
  return result;
}
