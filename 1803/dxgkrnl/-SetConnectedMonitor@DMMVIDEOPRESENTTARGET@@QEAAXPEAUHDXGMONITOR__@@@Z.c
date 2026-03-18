/*
 * XREFs of ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0044F68
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C004385C (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0215AC0 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     MonitorGetLinkInfoFromMonitor @ 0x1C022E12C (MonitorGetLinkInfoFromMonitor.c)
 *     MonitorIsPhysicalMonitor @ 0x1C022E884 (MonitorIsPhysicalMonitor.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetConnectedMonitor(DMMVIDEOPRESENTTARGET *this, struct HDXGMONITOR__ *a2)
{
  ReferenceCounted *v4; // rcx

  *((_BYTE *)this + 406) = MonitorIsPhysicalMonitor(a2);
  *((_QWORD *)this + 13) = a2;
  if ( !a2 || (int)MonitorGetLinkInfoFromMonitor(a2, (char *)this + 536) < 0 )
  {
    *((_QWORD *)this + 67) = 0LL;
    *((_DWORD *)this + 136) = 0;
  }
  v4 = (ReferenceCounted *)*((_QWORD *)this + 66);
  if ( v4 )
  {
    ReferenceCounted::Release(v4);
    *((_QWORD *)this + 66) = 0LL;
  }
}
