/*
 * XREFs of ApiSetEditionSetManipulationInputTarget @ 0x1C013B9D8
 * Callers:
 *     NtUserSetManipulationInputTarget @ 0x1C00EA300 (NtUserSetManipulationInputTarget.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionSetManipulationInputTarget(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x54u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionSetManipulationInputTargetSupported() >= 0 )
    v5 = EditionSetManipulationInputTarget(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x55u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v5;
}
