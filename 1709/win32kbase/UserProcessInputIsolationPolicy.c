/*
 * XREFs of UserProcessInputIsolationPolicy @ 0x1C01305A0
 * Callers:
 *     NtMITBindInputTypeToMonitors @ 0x1C00E5D90 (NtMITBindInputTypeToMonitors.c)
 * Callees:
 *     ?UnbindMonitorsFromInput@CBaseProcessor@@QEAAXXZ @ 0x1C0008634 (-UnbindMonitorsFromInput@CBaseProcessor@@QEAAXXZ.c)
 *     GetMonitorRect @ 0x1C005955C (GetMonitorRect.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0070E54 (HMValidateSharedHandleNoRip.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateMonitorsExclusionState@@YAXIPEAPEAUHMONITOR__@@@Z @ 0x1C0130548 (-UpdateMonitorsExclusionState@@YAXIPEAPEAUHMONITOR__@@@Z.c)
 */

void __fastcall UserProcessInputIsolationPolicy(char a1, unsigned int a2, HMONITOR *a3)
{
  CBaseProcessor *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  CBaseProcessor *v8; // rbx
  __int64 v9; // rax
  __int64 i; // rcx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  if ( (a1 & 9) == 9 )
  {
    v5 = (CBaseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
    v8 = v5;
    if ( a2 )
    {
      if ( *((_QWORD *)v5 + 3) )
        CBaseProcessor::UnbindMonitorsFromInput(v5, v6, v7);
      *((_QWORD *)v8 + 3) = a3;
      *((_DWORD *)v8 + 8) = a2;
    }
    else
    {
      CBaseProcessor::UnbindMonitorsFromInput(v5, v6, v7);
    }
  }
  if ( a2 )
  {
    v9 = HMValidateSharedHandleNoRip((int)*a3);
    if ( v9 )
      gptCursorAsync = *(struct tagPOINT *)GetMonitorRect(&v11, v9);
    UpdateMonitorsExclusionState(a2, a3);
  }
  else
  {
    for ( i = *(_QWORD *)(gpDispInfo + 96); i; i = *(_QWORD *)(i + 56) )
      *(_DWORD *)(i + 600) = 0;
  }
}
