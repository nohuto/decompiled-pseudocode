/*
 * XREFs of UserProcessInputIsolationPolicy @ 0x1C0130CBC
 * Callers:
 *     NtMITBindInputTypeToMonitors @ 0x1C00DEA80 (NtMITBindInputTypeToMonitors.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ?UnbindMonitorsFromInput@CBaseProcessor@@QEAAXXZ @ 0x1C006F4DC (-UnbindMonitorsFromInput@CBaseProcessor@@QEAAXXZ.c)
 *     HMValidateSharedHandleNoRip @ 0x1C007772C (HMValidateSharedHandleNoRip.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateMonitorsExclusionState@@YAXIPEAPEAUHMONITOR__@@@Z @ 0x1C0130C64 (-UpdateMonitorsExclusionState@@YAXIPEAPEAUHMONITOR__@@@Z.c)
 */

void __fastcall UserProcessInputIsolationPolicy(char a1, unsigned int a2, HMONITOR *a3)
{
  CBaseProcessor *v5; // rax
  CBaseProcessor *v6; // rbx
  __int64 v7; // rbx
  LONG *v8; // rax
  LONG *v9; // rax
  __int64 i; // rcx

  if ( (a1 & 9) == 9 )
  {
    v5 = (CBaseProcessor *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018[0] + 8LL))(qword_1C0186018[0]);
    v6 = v5;
    if ( a2 )
    {
      if ( *((_QWORD *)v5 + 3) )
        CBaseProcessor::UnbindMonitorsFromInput(v5);
      *((_QWORD *)v6 + 3) = a3;
      *((_DWORD *)v6 + 8) = a2;
    }
    else
    {
      CBaseProcessor::UnbindMonitorsFromInput(v5);
    }
  }
  if ( a2 )
  {
    v7 = HMValidateSharedHandleNoRip((int)*a3);
    if ( v7 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 52LL) & 1) != 0 )
      {
        v8 = (LONG *)(*(_QWORD *)(v7 + 40) + 44LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                           + 52LL) & 1) != 0 )
      {
        v8 = (LONG *)(*(_QWORD *)(v7 + 40) + 60LL);
      }
      else
      {
        v8 = (LONG *)(*(_QWORD *)(v7 + 40) + 28LL);
      }
      gptCursorAsync.x = *v8;
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 52LL) & 1) != 0 )
      {
        v9 = (LONG *)(*(_QWORD *)(v7 + 40) + 48LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                           + 52LL) & 1) != 0 )
      {
        v9 = (LONG *)(*(_QWORD *)(v7 + 40) + 64LL);
      }
      else
      {
        v9 = (LONG *)(*(_QWORD *)(v7 + 40) + 32LL);
      }
      gptCursorAsync.y = *v9;
    }
    UpdateMonitorsExclusionState(a2, a3);
  }
  else
  {
    for ( i = *((_QWORD *)gpDispInfo + 12); i; i = *(_QWORD *)(i + 56) )
      *(_DWORD *)(i + 536) = 0;
  }
  CCursorClip::RefreshMonitorList((CCursorClip *)i);
}
