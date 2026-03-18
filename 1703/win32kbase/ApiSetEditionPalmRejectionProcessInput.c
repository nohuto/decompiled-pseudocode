/*
 * XREFs of ApiSetEditionPalmRejectionProcessInput @ 0x1C013B844
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01249BC (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPalmRejectionProcessInput(__int64 a1)
{
  unsigned int v2; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      164,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  v2 = 0;
  if ( (int)IsEditionPalmRejectionProcessInputSupported() >= 0 )
    v2 = EditionPalmRejectionProcessInput(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      165,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return v2;
}
