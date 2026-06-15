/*
 * XREFs of ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x1800B6ED4
 * Callers:
 *     ?OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800B3DC0 (-OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1800B76D8 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x1800B7F2C (-Stop@CMonitor@@QEAAXXZ.c)
 *     WPP_SF_ld @ 0x1800B8610 (WPP_SF_ld.c)
 */

void __fastcall CMonitor::OnMuteStateChanged(CMonitor *this, __int64 a2, __int64 a3)
{
  int v3; // edi
  CVolumeStrip *v5; // rcx

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ld(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, (unsigned int)a2, *((_DWORD *)this + 14));
    v5 = WPP_GLOBAL_Control;
  }
  if ( v3 )
  {
    if ( *((_DWORD *)this + 14) == 3 )
    {
      if ( v5 != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v5 + 7) & 0x800000) != 0
        && *((_BYTE *)v5 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v5 + 2), 0x30u, (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids);
      }
      CMonitor::Stop(this);
    }
  }
  else if ( ((*((_DWORD *)this + 14) - 2) & 0xFFFFFFFD) == 0 )
  {
    if ( v5 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x800000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
      WPP_SF_(*((_QWORD *)v5 + 2), 0x31u, (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids);
    CMonitor::Start(this);
  }
}
