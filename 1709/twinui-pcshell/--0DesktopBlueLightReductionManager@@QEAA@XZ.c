/*
 * XREFs of ??0DesktopBlueLightReductionManager@@QEAA@XZ @ 0x18008740C
 * Callers:
 *     ??$MakeAndInitialize@VDesktopBlueLightReductionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180087354 (--$MakeAndInitialize@VDesktopBlueLightReductionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CImmersiveShellComponentWithGITSite@@QEAA@XZ @ 0x1800185BC (--0CImmersiveShellComponentWithGITSite@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

DesktopBlueLightReductionManager *__fastcall DesktopBlueLightReductionManager::DesktopBlueLightReductionManager(
        DesktopBlueLightReductionManager *this)
{
  CImmersiveShellComponentWithGITSite::CImmersiveShellComponentWithGITSite(this);
  Microsoft::WRL::FtmBase::FtmBase((DesktopBlueLightReductionManager *)((char *)this + 128));
  *((_DWORD *)this + 43) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 6) = &DesktopBlueLightReductionManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 13) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 14) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 15) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::`vftable'{for `IImmersiveSessionIdleNotification'};
  *((_QWORD *)this + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &DesktopBlueLightReductionManager::`vftable';
  *((_QWORD *)this + 5) = &DesktopBlueLightReductionManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 6) = &DesktopBlueLightReductionManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 13) = &DesktopBlueLightReductionManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 14) = &DesktopBlueLightReductionManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 15) = &DesktopBlueLightReductionManager::`vftable'{for `IImmersiveSessionIdleNotification'};
  *((_QWORD *)this + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  return this;
}
