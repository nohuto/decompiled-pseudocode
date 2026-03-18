/*
 * XREFs of ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C01095B0
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C000C954 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C00D7B68 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_CheckPortraitFirstMonitor(DXGMONITOR *this)
{
  unsigned __int8 *EdidBaseBlockPtr; // rax
  unsigned int v3; // edx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v5 = 0LL;
  v6 = 0;
  EdidBaseBlockPtr = (unsigned __int8 *)DXGMONITOR::_GetEdidBaseBlockPtr(this);
  if ( (int)EDID_V1_GetPreferredMode(EdidBaseBlockPtr, (struct DISPLAY_PREFERRED_MODE_INFO *)&v5) < 0 )
    return 3221226021LL;
  if ( (unsigned int)v5 < HIDWORD(v5) )
  {
    *((_DWORD *)this + 6) = (IsInternalVideoOutput(*((_DWORD *)this + 8)) ? 0x100 : 0) | *((_DWORD *)this + 6) & 0xFFFFFEFF;
  }
  else
  {
    *((_DWORD *)this + 6) &= ~0x100u;
    v3 = HIDWORD(v5);
  }
  *((_DWORD *)this + 6) = *((_DWORD *)this + 6) & 0xFFFFFDFF | (v3 < 0x400 ? 0x200 : 0);
  return 0LL;
}
