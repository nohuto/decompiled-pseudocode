/*
 * XREFs of ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@AEAAJXZ @ 0x1C0106548
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DpiDxgkDdiSetTargetAdjustedColorimetry @ 0x1C01CF7CC (DpiDxgkDdiSetTargetAdjustedColorimetry.c)
 *     ?_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z @ 0x1C01E7F60 (-_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@AEAAXXZ @ 0x1C01E86AC (-_SetColorPrimariesToBT709@DXGMONITOR@@AEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_SendAdjustedHDRParamsToDriver(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edx
  __int64 v10; // rax
  DXGMONITOR *v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int128 v16; // [rsp+20h] [rbp-39h]
  __int128 v17; // [rsp+30h] [rbp-29h]
  __int128 v18; // [rsp+40h] [rbp-19h]
  _OWORD v19[3]; // [rsp+70h] [rbp+17h] BYREF
  int v20; // [rsp+A0h] [rbp+47h]

  if ( !*((_QWORD *)this + 5) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  HIDWORD(v18) = 0;
  v16 = *(_OWORD *)((char *)this + 556);
  v17 = *(_OWORD *)((char *)this + 572);
  if ( *((_BYTE *)this + 604) )
  {
    DWORD1(v18) = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(this, *((_DWORD *)this + 149));
    DWORD2(v18) = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v11, *((_DWORD *)this + 150));
    LODWORD(v18) = (int)((float)((float)(*((_DWORD *)this + 148) * *((_DWORD *)this + 148)) * 0.000015379001)
                       * (double)(v12 / 0x2710)
                       / 100.0
                       * 10000.0);
  }
  else
  {
    *(_QWORD *)&v18 = *((_QWORD *)this + 74);
    DWORD2(v18) = *((_DWORD *)this + 150);
  }
  v5 = *(_QWORD *)(*((_QWORD *)this + 5) + 64LL);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 64LL);
  v7 = *(_QWORD *)(v6 + 40);
  if ( *(_DWORD *)(v7 + 28) >= 0x700Au )
  {
    v13 = *(_QWORD *)(v5 + 936);
    v20 = 0;
    v14 = *(_QWORD *)(v6 + 48);
    v15 = *(unsigned int *)(v13 + 24);
    v19[0] = v16;
    v19[1] = v17;
    v19[2] = v18;
    v8 = DpiDxgkDdiSetTargetAdjustedColorimetry(v7, v14, v15, v19);
  }
  else
  {
    v8 = 0;
  }
  if ( v8 < 0 )
  {
    *(_QWORD *)((char *)this + 548) = 0LL;
    *((_OWORD *)this + 33) = 0uLL;
    *((_DWORD *)this + 136) = 0;
    DXGMONITOR::_SetColorPrimariesToBT709(this);
    *((_WORD *)this + 302) = 0;
    *((_DWORD *)this + 149) = 2700000;
    *((_DWORD *)this + 150) = 2700000;
    *((_DWORD *)this + 148) = 5000;
    *((_DWORD *)this + 147) = 3;
  }
  return (unsigned int)v8;
}
