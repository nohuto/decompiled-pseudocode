/*
 * XREFs of ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C00C6694
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     MonitorGetPreferredScaleFactor @ 0x1C00C6740 (MonitorGetPreferredScaleFactor.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00C6814 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 */

char __fastcall DpiInternal::GetPreferredScaleFactorForMonitor(DpiInternal *this, void *const a2, int a3, _DWORD *a4)
{
  int v5; // ebx
  __int64 v6; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int PreferredScaleFactor; // eax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  unsigned __int8 v16[4]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v17[5]; // [rsp+24h] [rbp-14h] BYREF

  v17[0] = 0;
  v5 = 0;
  v6 = (unsigned int)a2;
  v16[0] = 0;
  IsTargetEmergencySimulatedMonitor(this, (unsigned int)a2, v16);
  if ( v16[0] )
  {
    v13 = (unsigned int)dword_1C007A714;
    if ( !dword_1C007A714 )
    {
      v5 = -1073741823;
      goto LABEL_7;
    }
  }
  else
  {
    PreferredScaleFactor = MonitorGetPreferredScaleFactor(this, (unsigned int)v6, v17);
    v13 = v17[0];
    v5 = PreferredScaleFactor;
    if ( a3 )
    {
      v9 = 0LL;
      if ( PreferredScaleFactor >= 0 )
        v9 = v17[0];
      dword_1C007A714 = v9;
    }
  }
  if ( v5 < 0 )
  {
LABEL_7:
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v13, v10, v11);
    v14[3] = this;
    v14[4] = v6;
    v14[5] = v5;
    *a4 = 0;
    return 0;
  }
  *a4 = v13;
  return 1;
}
