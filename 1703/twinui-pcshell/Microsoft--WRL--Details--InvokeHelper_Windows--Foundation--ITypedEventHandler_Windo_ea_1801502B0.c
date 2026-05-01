/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_64453e8f1d1795856607ef361707b1d3__2__1_::Invoke @ 0x1801502B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180033754 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?CortanaKeepsCrashing@StartWindowTelemetry@@SAXXZ @ 0x180148BD0 (-CortanaKeepsCrashing@StartWindowTelemetry@@SAXXZ.c)
 *     ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x18014FCAC (--$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@Y.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_64453e8f1d1795856607ef361707b1d3__2__1_::Invoke(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 252LL) < *(_DWORD *)(*(_QWORD *)(a1 + 16) + 256LL)
    && (v3 = 1,
        SHRegGetBOOL(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
          L"AllowAutoAppRestartOnCrash",
          &v3),
        v3) )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 252LL);
    RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::ICortanaExperienceManager>(*(struct IUnknown **)(*(_QWORD *)(a1 + 16) + 96LL));
  }
  else
  {
    StartWindowTelemetry::CortanaKeepsCrashing();
  }
  return 0LL;
}
