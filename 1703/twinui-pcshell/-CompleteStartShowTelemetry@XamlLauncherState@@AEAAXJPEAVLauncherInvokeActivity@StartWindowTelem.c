/*
 * XREFs of ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelemetry@@@Z @ 0x180156B84
 * Callers:
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x180154D88 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180155370 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1801566A0 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801567B0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180156CA0 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x180156EC4 (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 *     ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180157060 (-OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Intern.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180157230 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180157980 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 * Callees:
 *     ??_GFocusHoldingTank@@QEAAPEAXI@Z @ 0x180150994 (--_GFocusHoldingTank@@QEAAPEAXI@Z.c)
 *     ?LauncherOpened@LauncherInvokeActivity@StartWindowTelemetry@@QEAAXII@Z @ 0x180153038 (-LauncherOpened@LauncherInvokeActivity@StartWindowTelemetry@@QEAAXII@Z.c)
 *     ?CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z @ 0x180156330 (-CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z.c)
 */

void __fastcall XamlLauncherState::CompleteStartShowTelemetry(
        XamlLauncherState *this,
        int a2,
        struct StartWindowTelemetry::LauncherInvokeActivity *a3)
{
  HWND *v5; // rcx

  v5 = (HWND *)*((_QWORD *)this + 123);
  if ( v5 )
  {
    FocusHoldingTank::`scalar deleting destructor'(v5);
    *((_QWORD *)this + 123) = 0LL;
  }
  XamlLauncherState::CancelStartTelemetryTimeout((struct _TP_TIMER **)this, a2 < 0);
  StartWindowTelemetry::LauncherInvokeActivity::LauncherOpened(a3, *((_DWORD *)this + 68), *((_DWORD *)this + 69));
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    a3,
    (unsigned int)a2);
}
