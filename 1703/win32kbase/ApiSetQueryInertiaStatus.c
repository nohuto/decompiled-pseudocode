/*
 * XREFs of ApiSetQueryInertiaStatus @ 0x1C013D598
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012BBF0 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetQueryInertiaStatus()
{
  unsigned int InertiaStatus; // ebx

  InertiaStatus = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      204,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( (int)IsQueryInertiaStatusSupported() >= 0 )
    InertiaStatus = QueryInertiaStatus();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      205,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return InertiaStatus;
}
