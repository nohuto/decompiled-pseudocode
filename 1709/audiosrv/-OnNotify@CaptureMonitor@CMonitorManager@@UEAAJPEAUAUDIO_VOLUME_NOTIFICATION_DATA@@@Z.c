/*
 * XREFs of ?OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800A5F50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x1800A9580 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::OnNotify(
        CMonitor **this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x55u,
      (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
      a2->bMuted);
  }
  CMonitor::OnMuteStateChanged(this[8], a2->bMuted);
  return 0LL;
}
