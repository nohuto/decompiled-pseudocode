/*
 * XREFs of ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C0238F18
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C0008FA0 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C00B8004 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_CheckPortraitFirstMonitor(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *this)
{
  unsigned __int8 *EdidBaseBlockPtr; // rax
  unsigned int v4; // edx
  unsigned int v5; // r8d
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  v6 = 0LL;
  v7 = 0;
  EdidBaseBlockPtr = (unsigned __int8 *)DXGMONITOR::_GetEdidBaseBlockPtr((DXGMONITOR *)this);
  if ( (int)EDID_V1_GetPreferredMode(EdidBaseBlockPtr, (struct DISPLAY_PREFERRED_MODE_INFO *)&v6) < 0 )
    return 3221226021LL;
  if ( (unsigned int)v6 >= HIDWORD(v6) )
  {
    *((_DWORD *)this + 10) &= ~0x100u;
    v4 = *((_DWORD *)this + 10);
    v5 = HIDWORD(v6);
  }
  else
  {
    v4 = (IsInternalVideoOutput(this[12]) ? 0x100 : 0) | this[10] & 0xFFFFFEFF;
    *((_DWORD *)this + 10) = v4;
  }
  *((_DWORD *)this + 10) = v4 & 0xFFFFFDFF | (v5 < 0x400 ? 0x200 : 0);
  return 0LL;
}
