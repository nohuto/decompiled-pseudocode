/*
 * XREFs of ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18018B01C
 * Callers:
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x180188FE8 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180189700 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x18018AAF8 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18018AC20 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18018B130 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x18018B374 (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 *     ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x18018B520 (-OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Intern.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x18018B6F0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18018BE00 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 * Callees:
 *     ?LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x18017D340 (-LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z.c)
 *     ??_GFocusHoldingTank@@QEAAPEAXI@Z @ 0x180184D44 (--_GFocusHoldingTank@@QEAAPEAXI@Z.c)
 *     ?CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z @ 0x18018A690 (-CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z.c)
 */

void __fastcall XamlLauncherState::CompleteStartShowTelemetry(
        XamlLauncherState *this,
        int a2,
        struct CommonStartTelemetry::LauncherInvokeActivity *a3)
{
  HWND *v5; // rcx

  v5 = (HWND *)*((_QWORD *)this + 125);
  if ( v5 )
  {
    FocusHoldingTank::`scalar deleting destructor'(v5);
    *((_QWORD *)this + 125) = 0LL;
  }
  XamlLauncherState::CancelStartTelemetryTimeout((struct _TP_TIMER **)this, a2 < 0);
  CommonStartTelemetry::LauncherInvokeActivity::LauncherOpened(
    (__int64)a3,
    *((_DWORD *)this + 70),
    *((_DWORD *)this + 71),
    0);
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)a3,
    a2);
}
