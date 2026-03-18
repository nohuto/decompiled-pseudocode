/*
 * XREFs of ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C00F98C4
 * Callers:
 *     ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C0010310 (-_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00AB5C0 (MonitorGetEdidBaseBlockPtr.c)
 *     ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C0106F44 (-_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C0108F88 (-_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z.c)
 * Callees:
 *     <none>
 */

const void *__fastcall DXGMONITOR::_GetEdidBaseBlockPtr(DXGMONITOR *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 16);
  if ( v1 && *(_QWORD *)(v1 + 16) >= 0x80uLL )
    return (const void *)(v1 + 24);
  else
    return 0LL;
}
