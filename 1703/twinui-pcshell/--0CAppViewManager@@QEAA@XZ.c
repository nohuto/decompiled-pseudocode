/*
 * XREFs of ??0CAppViewManager@@QEAA@XZ @ 0x18003CA0C
 * Callers:
 *     ?CAppViewManager_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180043538 (-CAppViewManager_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CAppViewManager *__fastcall CAppViewManager::CAppViewManager(CAppViewManager *this)
{
  signed __int32 v2; // eax
  CAppViewManager *result; // rax

  Microsoft::WRL::FtmBase::FtmBase(this);
  *((_QWORD *)this + 3) = &Microsoft::WRL::ChainInterfaces<IAppViewManagerInternal,IAppViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,Microsoft::WRL::ChainInterfaces<IAppViewManagerInternal,IAppViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IProjectionViewHelper,IImmersiveApplicationNotification,IDragViewEventHandler,IAppSwitcherNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,Microsoft::WRL::ChainInterfaces<IAppViewManagerInternal,IAppViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IProjectionViewHelper,IImmersiveApplicationNotification,IDragViewEventHandler,IAppSwitcherNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IAppViewManagerInternal,IAppViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IProjectionViewHelper,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationNotification,Microsoft::WRL::Details::InterfaceList<IDragViewEventHandler,Microsoft::WRL::Details::InterfaceList<IAppSwitcherNotification,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,Microsoft::WRL::ChainInterfaces<IAppViewManagerInternal,IAppViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IProjectionViewHelper,IImmersiveApplicationNotification,IDragViewEventHandler,IAppSwitcherNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IProjectionViewHelper'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,Microsoft::WRL::ChainInterfaces<IAppViewManagerInternal,IAppViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IProjectionViewHelper,IImmersiveApplicationNotification,IDragViewEventHandler,IAppSwitcherNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationNotification,Microsoft::WRL::Details::InterfaceList<IDragViewEventHandler,Microsoft::WRL::Details::InterfaceList<IAppSwitcherNotification,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,Microsoft::WRL::ChainInterfaces<IAppViewManagerInternal,IAppViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IProjectionViewHelper,IImmersiveApplicationNotification,IDragViewEventHandler,IAppSwitcherNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IDragViewEventHandler'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,Microsoft::WRL::ChainInterfaces<IAppViewManagerInternal,IAppViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IProjectionViewHelper,IImmersiveApplicationNotification,IDragViewEventHandler,IAppSwitcherNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAppSwitcherNotification,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_DWORD *)this + 17) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_DWORD *)this + 18) = 1;
  *(_QWORD *)this = &CAppViewManager::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 3) = &CAppViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IAppViewManagerInternal,IAppViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IProjectionViewHelper,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationNotification,Microsoft::WRL::Details::InterfaceList<IDragViewEventHandler,Microsoft::WRL::Details::InterfaceList<IAppSwitcherNotification,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 4) = &CAppViewManager::`vftable'{for `IProjectionViewHelper'};
  *((_QWORD *)this + 5) = &CAppViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationNotification,Microsoft::WRL::Details::InterfaceList<IDragViewEventHandler,Microsoft::WRL::Details::InterfaceList<IAppSwitcherNotification,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 6) = &CAppViewManager::`vftable'{for `IDragViewEventHandler'};
  *((_QWORD *)this + 7) = &CAppViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAppSwitcherNotification,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  v2 = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 40) = v2;
  result = this;
  *((_QWORD *)this + 22) = 0LL;
  return result;
}
