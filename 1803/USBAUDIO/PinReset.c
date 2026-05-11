/*
 * XREFs of PinReset @ 0x1C0018DC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall PinReset(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             a2,
             8u,
             0x12u,
             (__int64)&WPP_1eb1219369133eb445a80eae098b7c49_Traceguids);
  return result;
}
