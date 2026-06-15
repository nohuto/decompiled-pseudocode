/*
 * XREFs of ?OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800E0B20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x1800E3FF4 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::OnNotify(
        CMonitor **this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x55u,
      (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
      a2->bMuted);
  }
  CMonitor::OnMuteStateChanged(this[8], a2->bMuted);
  return 0LL;
}
