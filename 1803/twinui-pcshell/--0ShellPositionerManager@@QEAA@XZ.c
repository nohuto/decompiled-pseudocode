/*
 * XREFs of ??0ShellPositionerManager@@QEAA@XZ @ 0x1802B878C
 * Callers:
 *     ??$MakeAndInitialize@VShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802B80E0 (--$MakeAndInitialize@VShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIShellPositionerManagerInternal@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1802B86B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponent_ea_1802B86B0.c)
 */

ShellPositionerManager *__fastcall ShellPositionerManager::ShellPositionerManager(ShellPositionerManager *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IShellPositionerManager,IShellPositionerManagerInternal,IApplicationViewChangeListener,ITabletModeChangeListener,IShellPositionerActivationHandler,IShellPositionerFrameworkViewTypeChangedHandler>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IShellPositionerManager,IShellPositionerManagerInternal,IApplicationViewChangeListener,ITabletModeChangeListener,IShellPositionerActivationHandler,IShellPositionerFrameworkViewTypeChangedHandler>((__int64)this);
  *(_QWORD *)this = &ShellPositionerManager::`vftable';
  *((_QWORD *)this + 3) = &ShellPositionerManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IShellPositionerManager,IShellPositionerManagerInternal,IApplicationViewChangeListener,ITabletModeChangeListener,IShellPositionerActivationHandler,IShellPositionerFrameworkViewTypeChangedHandler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 11) = &ShellPositionerManager::`vftable'{for `IShellPositionerManager'};
  *((_QWORD *)this + 12) = &ShellPositionerManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellPositionerManagerInternal,IApplicationViewChangeListener,ITabletModeChangeListener,IShellPositionerActivationHandler,IShellPositionerFrameworkViewTypeChangedHandler>'};
  *((_QWORD *)this + 13) = &ShellPositionerManager::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 14) = &ShellPositionerManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChangeListener,IShellPositionerActivationHandler,IShellPositionerFrameworkViewTypeChangedHandler>'};
  *((_QWORD *)this + 15) = &ShellPositionerManager::`vftable'{for `IShellPositionerActivationHandler'};
  *((_QWORD *)this + 16) = &ShellPositionerManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellPositionerFrameworkViewTypeChangedHandler>'};
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  return this;
}
