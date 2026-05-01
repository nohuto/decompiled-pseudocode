/*
 * XREFs of ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18007ACF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsStartWindowVisible@XamlLauncherState@@UEAA_NXZ @ 0x1800788E0 (-IsStartWindowVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180078930 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ @ 0x180078950 (-DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180078980 (-IsCortanaVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsPlaceModeCommitAllowed@WindowArrangementView@@UEAA_NXZ @ 0x180078B40 (-IsPlaceModeCommitAllowed@WindowArrangementView@@UEAA_NXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18007AE0C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@wil@@C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z @ 0x180128884 (-IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::ActiveZBandChangedForMonitor(__int64 a1, __int64 a2, unsigned int a3)
{
  WindowArrangementView *v5; // rcx
  __int64 (*v6)(void); // rax
  char IsPlaceModeCommitAllowed; // al
  XamlLauncherState *v8; // rcx
  __int64 (*v9)(void); // rax
  char IsStartVisible; // al
  char v11; // si
  XamlLauncherState *v12; // rcx
  bool (__fastcall *v13)(XamlLauncherState *); // rax
  char IsStartWindowVisible; // al
  XamlLauncherState *v15; // rcx
  char v16; // bp
  __int64 (*v17)(void); // rax
  char IsCortanaVisible; // al
  XamlLauncherState *v19; // rcx
  char (__fastcall *v20)(XamlLauncherState *); // rax
  char v21; // al
  bool v23; // di
  HWND ForegroundWindow; // rax
  __int64 v25; // rax
  void (*v26)(void); // rax
  _DWORD v27[10]; // [rsp+20h] [rbp-28h] BYREF

  wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::ReportUsageToService();
  v5 = *(WindowArrangementView **)(a1 + 48);
  v6 = *(__int64 (**)(void))(*(_QWORD *)v5 + 40LL);
  if ( (char *)v6 == (char *)WindowArrangementView::IsPlaceModeCommitAllowed )
    IsPlaceModeCommitAllowed = WindowArrangementView::IsPlaceModeCommitAllowed(v5);
  else
    IsPlaceModeCommitAllowed = v6();
  if ( !IsPlaceModeCommitAllowed )
    return 0LL;
  v8 = *(XamlLauncherState **)(a1 + 48);
  v9 = *(__int64 (**)(void))(*(_QWORD *)v8 + 96LL);
  if ( (char *)v9 == (char *)XamlLauncherState::IsStartVisible )
    IsStartVisible = XamlLauncherState::IsStartVisible(v8);
  else
    IsStartVisible = v9();
  v11 = 1;
  if ( IsStartVisible
    || ((v12 = *(XamlLauncherState **)(a1 + 48),
         v13 = *(bool (__fastcall **)(XamlLauncherState *))(*(_QWORD *)v12 + 104LL),
         v13 != XamlLauncherState::IsStartWindowVisible)
      ? (IsStartWindowVisible = ((__int64 (*)(void))v13)())
      : (IsStartWindowVisible = XamlLauncherState::IsStartWindowVisible(v12)),
        IsStartWindowVisible) )
  {
    v16 = 1;
  }
  else
  {
    v15 = *(XamlLauncherState **)(a1 + 48);
    v16 = 0;
    v17 = *(__int64 (**)(void))(*(_QWORD *)v15 + 112LL);
    if ( (char *)v17 == (char *)XamlLauncherState::IsCortanaVisible )
      IsCortanaVisible = XamlLauncherState::IsCortanaVisible(v15);
    else
      IsCortanaVisible = v17();
    if ( !IsCortanaVisible )
    {
      v19 = *(XamlLauncherState **)(a1 + 48);
      v20 = *(char (__fastcall **)(XamlLauncherState *))(*(_QWORD *)v19 + 120LL);
      v21 = v20 == XamlLauncherState::DoesCortanaHaveForeground
          ? XamlLauncherState::DoesCortanaHaveForeground(v19)
          : ((__int64 (*)(void))v20)();
      if ( !v21 )
        return 0LL;
    }
  }
  v23 = 1;
  ForegroundWindow = GetForegroundWindow();
  if ( (unsigned int)GetWindowBand(ForegroundWindow, v27) )
    v23 = v27[0] != 13;
  if ( !v16
    && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))
     || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48))) )
  {
    v11 = 0;
  }
  if ( v23 )
  {
    if ( v11 && (unsigned __int8)ZBandHelpers::IsBelowImmersiveLauncher(a3) )
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 72LL))(*(_QWORD *)(a1 + 48), 7LL);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48))
      && ((unsigned __int8)ZBandHelpers::IsBelowImmersiveLauncher(a3) || a3 == 6) )
    {
      v25 = **(_QWORD **)(a1 + 48);
      if ( v16 )
      {
        v26 = *(void (**)(void))(v25 + 88);
      }
      else
      {
        if ( (*(unsigned __int8 (**)(void))(v25 + 128))() )
          return 0LL;
        v26 = *(void (**)(void))(**(_QWORD **)(a1 + 48) + 80LL);
      }
      v26();
    }
  }
  return 0LL;
}
