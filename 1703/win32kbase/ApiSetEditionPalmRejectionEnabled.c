/*
 * XREFs of ApiSetEditionPalmRejectionEnabled @ 0x1C013B7B0
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01249BC (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionPalmRejectionEnabled()
{
  unsigned int v0; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      162,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  v0 = 0;
  if ( (int)IsEditionPalmRejectionEnabledSupported() >= 0 )
    v0 = EditionPalmRejectionEnabled();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      163,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return v0;
}
