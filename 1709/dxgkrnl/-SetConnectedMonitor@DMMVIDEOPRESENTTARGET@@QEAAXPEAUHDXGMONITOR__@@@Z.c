/*
 * XREFs of ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0012DC0
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0034B6C (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C010FBDC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     MonitorIsDedicatedTimingGeneration @ 0x1C011E95C (MonitorIsDedicatedTimingGeneration.c)
 *     MonitorIsPhysicalMonitor @ 0x1C011E9E0 (MonitorIsPhysicalMonitor.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetConnectedMonitor(DMMVIDEOPRESENTTARGET *this, struct HDXGMONITOR__ *a2)
{
  bool v4; // al
  ReferenceCounted *v5; // rcx

  *((_BYTE *)this + 407) = MonitorIsPhysicalMonitor(a2);
  *((_QWORD *)this + 13) = a2;
  if ( a2 )
    v4 = (int)MonitorIsDedicatedTimingGeneration(a2) >= 0;
  else
    v4 = 0;
  v5 = (ReferenceCounted *)*((_QWORD *)this + 66);
  *((_BYTE *)this + 536) = v4;
  if ( v5 )
  {
    ReferenceCounted::Release(v5);
    *((_QWORD *)this + 66) = 0LL;
  }
}
