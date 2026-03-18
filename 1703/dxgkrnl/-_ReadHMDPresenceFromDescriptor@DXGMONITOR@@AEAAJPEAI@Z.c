/*
 * XREFs of ?_ReadHMDPresenceFromDescriptor@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C0107108
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01092BC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0109488 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_ReadHMDPresenceFromDescriptor(DXGMONITOR *this, unsigned int *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 936LL) + 96LL);
  if ( v3 )
    *a2 = (unsigned __int8)(*(_BYTE *)(v3 + 121) - 2) <= 1u;
  else
    return (unsigned int)-1071841279;
  return v2;
}
