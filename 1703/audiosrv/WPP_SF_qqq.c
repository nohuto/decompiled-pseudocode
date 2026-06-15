/*
 * XREFs of WPP_SF_qqq @ 0x180090DB8
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x18008CB88 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z @ 0x1800B2D98 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qqq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
