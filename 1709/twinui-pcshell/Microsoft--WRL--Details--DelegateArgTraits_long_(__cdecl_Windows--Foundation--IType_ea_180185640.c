/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_4e5ace4978557f95a503fdd97e32a105___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x180185640
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180034D60 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?StartKeepsCrashing@StartWindowTelemetry@@SAXXZ @ 0x18017D9D4 (-StartKeepsCrashing@StartWindowTelemetry@@SAXXZ.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x1801821B0 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1801844A4 (--$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAX.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__IInspectable_____ptr64_::___Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_4e5ace4978557f95a503fdd97e32a105___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  XamlLauncher::PublishLauncherVisibilityState(*(XamlLauncher **)(a1 + 16), 0);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 236LL) < *(_DWORD *)(*(_QWORD *)(a1 + 16) + 244LL)
    && (LODWORD(v5) = 1,
        SHRegGetBOOL(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
          L"AllowAutoAppRestartOnCrash",
          (int *)&v5),
        (_DWORD)v5) )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 236LL);
    RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::IStartExperienceManager>(*(struct IUnknown **)(*(_QWORD *)(a1 + 16) + 104LL));
  }
  else
  {
    StartWindowTelemetry::StartKeepsCrashing();
  }
  return 0LL;
}
