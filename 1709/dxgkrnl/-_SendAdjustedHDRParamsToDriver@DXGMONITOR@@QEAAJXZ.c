/*
 * XREFs of ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJXZ @ 0x1C010BB74
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     MonitorSetAdvancedColorParams @ 0x1C01FEAD8 (MonitorSetAdvancedColorParams.c)
 * Callees:
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C010BB10 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x1C0123798 (DpiSetTargetAdjustedColorimetry.c)
 *     ?_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z @ 0x1C0202910 (-_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z.c)
 */

void __fastcall DXGMONITOR::_SendAdjustedHDRParamsToDriver(DXGMONITOR *this)
{
  __int64 v2; // rcx
  __int16 v3; // dx
  __int64 v4; // rax
  DXGMONITOR *v5; // rcx
  unsigned int v6; // r8d
  __int128 v7; // [rsp+20h] [rbp-39h]
  __int128 v8; // [rsp+30h] [rbp-29h]
  __int128 v9; // [rsp+40h] [rbp-19h]
  _OWORD v10[3]; // [rsp+70h] [rbp+17h] BYREF
  int v11; // [rsp+A0h] [rbp+47h]

  if ( !*((_QWORD *)this + 5) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  HIDWORD(v9) = 0;
  v7 = *(_OWORD *)((char *)this + 596);
  v8 = *(_OWORD *)((char *)this + 612);
  if ( *((_BYTE *)this + 648) )
  {
    DWORD1(v9) = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(this, *((_DWORD *)this + 159));
    DWORD2(v9) = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v5, *((_DWORD *)this + 160));
    LODWORD(v9) = (int)((float)((float)(*((_DWORD *)this + 158) * *((_DWORD *)this + 158)) * 0.000015379001)
                      * (double)(v6 / 0x2710)
                      / 100.0
                      * 10000.0);
  }
  else
  {
    *(_QWORD *)&v9 = *((_QWORD *)this + 79);
    DWORD2(v9) = *((_DWORD *)this + 160);
  }
  v2 = *((_QWORD *)this + 5);
  v11 = 0;
  v10[0] = v7;
  v10[1] = v8;
  v10[2] = v9;
  if ( (int)DpiSetTargetAdjustedColorimetry(v2, v10) < 0 )
  {
    *(_QWORD *)((char *)this + 588) = 0LL;
    *(_OWORD *)((char *)this + 568) = 0uLL;
    *((_DWORD *)this + 146) = 0;
    DXGMONITOR::_SetColorPrimariesToBT709(this);
    *((_DWORD *)this + 158) = 5000;
    *((_DWORD *)this + 159) = 2700000;
    *((_DWORD *)this + 160) = 2700000;
    *((_WORD *)this + 324) = v3;
    *((_DWORD *)this + 157) = 3;
  }
}
