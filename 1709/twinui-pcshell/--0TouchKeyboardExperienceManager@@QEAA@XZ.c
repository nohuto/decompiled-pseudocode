/*
 * XREFs of ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x180198A90
 * Callers:
 *     ?CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18019DBD0 (-CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CImmersiveShellComponentWithGITSite@@QEAA@XZ @ 0x1800185BC (--0CImmersiveShellComponentWithGITSite@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

TouchKeyboardExperienceManager *__fastcall TouchKeyboardExperienceManager::TouchKeyboardExperienceManager(
        TouchKeyboardExperienceManager *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 8);
  CImmersiveShellComponentWithGITSite::CImmersiveShellComponentWithGITSite((TouchKeyboardExperienceManager *)((char *)this + 8));
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v1 + 19));
  *((_QWORD *)this + 26) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::`vftable';
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::`vftable'{for `CImmersiveShellComponentWithGITSite'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 15) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::`vftable'{for `IApplicationFrameEventHandler'};
  *((_QWORD *)this + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 17) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::`vftable'{for `ITouchKeyboardExperienceManager'};
  *((_QWORD *)this + 18) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 19) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::`vftable'{for `IApplicationStateChangeHandler'};
  *((_QWORD *)this + 20) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::`vftable';
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::`vftable'{for `CImmersiveShellComponentWithGITSite'};
  *((_QWORD *)this + 6) = &TouchKeyboardExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 15) = &TouchKeyboardExperienceManager::`vftable'{for `IApplicationFrameEventHandler'};
  *((_QWORD *)this + 16) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 17) = &TouchKeyboardExperienceManager::`vftable'{for `ITouchKeyboardExperienceManager'};
  *((_QWORD *)this + 18) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 19) = &TouchKeyboardExperienceManager::`vftable'{for `IApplicationStateChangeHandler'};
  *((_QWORD *)this + 20) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 336), 0, 0);
  InitializeSRWLock((PSRWLOCK)this + 48);
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 7LL;
  *((_WORD *)this + 224) = 0;
  *((_DWORD *)this + 120) = 0;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 152) = 0;
  *((_DWORD *)this + 154) = 0;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_DWORD *)this + 160) = 0;
  *((_QWORD *)this + 28) = 0LL;
  return this;
}
