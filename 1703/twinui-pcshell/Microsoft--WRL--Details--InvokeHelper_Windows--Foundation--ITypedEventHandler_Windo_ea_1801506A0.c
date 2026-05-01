/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_4e5ace4978557f95a503fdd97e32a105__2__1_::Invoke @ 0x1801506A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180033754 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?StartKeepsCrashing@StartWindowTelemetry@@SAXXZ @ 0x180148CC4 (-StartKeepsCrashing@StartWindowTelemetry@@SAXXZ.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x18014D344 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x18014F860 (--$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAX.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_4e5ace4978557f95a503fdd97e32a105__2__1_::Invoke(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  XamlLauncher::PublishLauncherVisibilityState(*(XamlLauncher **)(a1 + 16), 0);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 248LL) < *(_DWORD *)(*(_QWORD *)(a1 + 16) + 256LL)
    && (v3 = 1,
        SHRegGetBOOL(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
          L"AllowAutoAppRestartOnCrash",
          &v3),
        v3) )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 248LL);
    RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::IStartExperienceManager>(*(struct IUnknown **)(*(_QWORD *)(a1 + 16) + 88LL));
  }
  else
  {
    StartWindowTelemetry::StartKeepsCrashing();
  }
  return 0LL;
}
