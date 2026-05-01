/*
 * XREFs of ??0CClassicWindowManager@@QEAA@XZ @ 0x180034678
 * Callers:
 *     ?CClassicWindowManager_CreateInstance@@YAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x18003787C (-CClassicWindowManager_CreateInstance@@YAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CClassicWindowManager *__fastcall CClassicWindowManager::CClassicWindowManager(CClassicWindowManager *this)
{
  CClassicWindowManager *result; // rax

  Microsoft::WRL::FtmBase::FtmBase(this);
  *((_QWORD *)this + 3) = &CWRLObjectWithGITSite::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 4);
  *((_DWORD *)this + 29) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable';
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable'{for `CWRLObjectWithGITSite'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IClassicWindowManagerPrivate,Microsoft::WRL::Details::InterfaceList<IApplicationActivationHistory,Microsoft::WRL::Details::InterfaceList<IClassicWindowManager,Microsoft::WRL::Details::InterfaceList<IClassicWindowPresentation,Microsoft::WRL::Details::InterfaceList<IClassicWindowCollectionRefresh,Microsoft::WRL::Details::InterfaceList<ITaskListChangeListener,Microsoft::WRL::Details::InterfaceList<IClassicWindowOwnershipQuery,Microsoft::WRL::Details::Nil>>>>>>>,1,0>'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable'{for `IApplicationActivationHistory'};
  *((_QWORD *)this + 9) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IClassicWindowManager,Microsoft::WRL::Details::InterfaceList<IClassicWindowPresentation,Microsoft::WRL::Details::InterfaceList<IClassicWindowCollectionRefresh,Microsoft::WRL::Details::InterfaceList<ITaskListChangeListener,Microsoft::WRL::Details::InterfaceList<IClassicWindowOwnershipQuery,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 10) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable'{for `IClassicWindowPresentation'};
  *((_QWORD *)this + 11) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IClassicWindowCollectionRefresh,Microsoft::WRL::Details::InterfaceList<ITaskListChangeListener,Microsoft::WRL::Details::InterfaceList<IClassicWindowOwnershipQuery,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 12) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable'{for `ITaskListChangeListener'};
  *((_QWORD *)this + 13) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IClassicWindowOwnershipQuery,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_DWORD *)this + 40) = -2;
  *((_DWORD *)this + 41) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 3);
  *(_QWORD *)this = &CClassicWindowManager::`vftable';
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable'{for `CWRLObjectWithGITSite'};
  *((_QWORD *)this + 7) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IClassicWindowManagerPrivate,Microsoft::WRL::Details::InterfaceList<IApplicationActivationHistory,Microsoft::WRL::Details::InterfaceList<IClassicWindowManager,Microsoft::WRL::Details::InterfaceList<IClassicWindowPresentation,Microsoft::WRL::Details::InterfaceList<IClassicWindowCollectionRefresh,Microsoft::WRL::Details::InterfaceList<ITaskListChangeListener,Microsoft::WRL::Details::InterfaceList<IClassicWindowOwnershipQuery,Microsoft::WRL::Details::Nil>>>>>>>,1,0>'};
  *((_QWORD *)this + 8) = &CClassicWindowManager::`vftable'{for `IApplicationActivationHistory'};
  *((_QWORD *)this + 9) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IClassicWindowManager,Microsoft::WRL::Details::InterfaceList<IClassicWindowPresentation,Microsoft::WRL::Details::InterfaceList<IClassicWindowCollectionRefresh,Microsoft::WRL::Details::InterfaceList<ITaskListChangeListener,Microsoft::WRL::Details::InterfaceList<IClassicWindowOwnershipQuery,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 10) = &CClassicWindowManager::`vftable'{for `IClassicWindowPresentation'};
  *((_QWORD *)this + 11) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IClassicWindowCollectionRefresh,Microsoft::WRL::Details::InterfaceList<ITaskListChangeListener,Microsoft::WRL::Details::InterfaceList<IClassicWindowOwnershipQuery,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 12) = &CClassicWindowManager::`vftable'{for `ITaskListChangeListener'};
  *((_QWORD *)this + 13) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IClassicWindowOwnershipQuery,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 21) = &CClassicWindowActivationBasedCollection::`vftable';
  *((_QWORD *)this + 26) = &CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::`vftable';
  result = this;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  return result;
}
