/*
 * XREFs of ?CompleteCortanaTelemetry@XamlLauncherState@@AEAAXPEAVCortanaLauncherInvokeActivity@StartWindowTelemetry@@J@Z @ 0x18018AAC0
 * Callers:
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x180188FE8 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180189200 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x18018B6F0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18018BE00 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 */

void __fastcall XamlLauncherState::CompleteCortanaTelemetry(
        XamlLauncherState *this,
        struct StartWindowTelemetry::CortanaLauncherInvokeActivity *a2,
        int a3)
{
  struct _TP_TIMER **v3; // rcx

  v3 = (struct _TP_TIMER **)((char *)this + 952);
  if ( *v3 )
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v3,
      0LL);
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)a2,
    a3);
}
