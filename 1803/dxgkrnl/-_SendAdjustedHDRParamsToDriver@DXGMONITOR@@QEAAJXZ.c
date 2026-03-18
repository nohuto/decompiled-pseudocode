/*
 * XREFs of ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJXZ @ 0x1C023BD94
 * Callers:
 *     MonitorSetAdvancedColorParams @ 0x1C022F018 (MonitorSetAdvancedColorParams.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DpiSetTargetAdjustedColorimetry @ 0x1C020E030 (DpiSetTargetAdjustedColorimetry.c)
 *     ?_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z @ 0x1C0239DCC (-_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C023BF3C (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

void __fastcall DXGMONITOR::_SendAdjustedHDRParamsToDriver(DXGMONITOR *this)
{
  DXGMONITOR *v2; // rcx
  unsigned int v3; // r10d
  int v4; // edx

  if ( *((_BYTE *)this + 668) )
  {
    DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(this, *((_DWORD *)this + 164));
    DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v2, v3);
  }
  if ( (int)DpiSetTargetAdjustedColorimetry(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 192LL),
              *((_DWORD *)this + 11)) < 0 )
  {
    *((_QWORD *)this + 76) = 0LL;
    *(_OWORD *)((char *)this + 588) = 0uLL;
    *((_DWORD *)this + 151) = 0;
    DXGMONITOR::_SetColorPrimariesToBT709(this);
    *((_DWORD *)this + 163) = 5000;
    *((_DWORD *)this + 164) = 2700000;
    *((_DWORD *)this + 165) = 2700000;
    *((_DWORD *)this + 168) = v4 + 3;
    *((_DWORD *)this + 162) = v4 + 3;
    *((_BYTE *)this + 676) = v4;
    *((_BYTE *)this + 668) = v4;
  }
}
