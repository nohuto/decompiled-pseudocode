/*
 * XREFs of ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C023B704
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     DpiGetMonitorNativeTimingOverride @ 0x1C020B3B8 (DpiGetMonitorNativeTimingOverride.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveIntegratedPanelNativeOverride(DXGMONITOR *this)
{
  int MonitorNativeTimingOverride; // edi
  char *v3; // rax
  char *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // xmm1_8
  DXGMONITOR *v8; // rax
  DXGMONITOR **v9; // r8
  _QWORD *i; // rcx
  _QWORD *v11; // rax
  _OWORD v13[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  MonitorNativeTimingOverride = DpiGetMonitorNativeTimingOverride(
                                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 192LL),
                                  *((_DWORD *)this + 11),
                                  v13);
  if ( MonitorNativeTimingOverride >= 0 )
  {
    v3 = (char *)operator new[](0x78uLL, 0x4D677844u, PagedPool);
    v4 = v3;
    if ( v3 )
    {
      v6 = (_QWORD *)((char *)this + 216);
      *(_DWORD *)v3 = (*((_DWORD *)this + 53))++;
      *(_OWORD *)(v3 + 8) = v13[0];
      *(_OWORD *)(v3 + 24) = v13[1];
      *(_OWORD *)(v3 + 40) = v13[2];
      v7 = v14;
      *((_DWORD *)v3 + 17) = 8;
      *((_DWORD *)v3 + 18) = 8;
      *(_QWORD *)(v3 + 76) = 8LL;
      v8 = (DXGMONITOR *)(v3 + 96);
      *((_QWORD *)v4 + 7) = v7;
      *((_DWORD *)v4 + 16) = 2;
      *((_DWORD *)v4 + 21) = 5;
      *((_DWORD *)v4 + 22) = 1;
      v9 = (DXGMONITOR **)*((_QWORD *)this + 28);
      if ( *v9 != (DXGMONITOR *)((char *)this + 216) )
        __fastfail(3u);
      *(_QWORD *)v8 = v6;
      *((_QWORD *)v4 + 13) = v9;
      *v9 = v8;
      *((_QWORD *)this + 28) = v8;
      ++*((_DWORD *)this + 52);
      *((_QWORD *)this + 29) = v4;
      for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)v11[12] )
      {
        v11 = i - 12;
        if ( !i )
          v11 = 0LL;
        if ( !v11 )
          break;
        if ( *((_DWORD *)v11 + 21) == 2 && *((_DWORD *)v11 + 22) == 1 )
        {
          *((_DWORD *)v11 + 22) = 2;
          return (unsigned int)MonitorNativeTimingOverride;
        }
      }
    }
    else
    {
      v5 = WdLogNewEntry5_WdLowResource(0LL);
      WdLogEvent5_WdLowResource(v5);
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)MonitorNativeTimingOverride;
}
