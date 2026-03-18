/*
 * XREFs of ApiSetEditionInternalSetManipulationInputTarget @ 0x1C013A2D0
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C0007310 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionInternalSetManipulationInputTarget(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x56u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionInternalSetManipulationInputTargetSupported() >= 0 )
    v5 = EditionInternalSetManipulationInputTarget(a1, a2, a3, a4, 0LL, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x57u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v5;
}
