/*
 * XREFs of ??0AppViewDataSourceAdapter@@QEAA@XZ @ 0x180190FF0
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x180193760 (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x180193714 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitask.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
AppViewDataSourceAdapter *__fastcall AppViewDataSourceAdapter::AppViewDataSourceAdapter(AppViewDataSourceAdapter *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  struct Microsoft::WRL::Details::ModuleBase *v4; // rcx

  *((_QWORD *)this + 1) = &IAppViewDataSourceAdapter::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((AppViewDataSourceAdapter *)((char *)this + 40));
  *((_QWORD *)this + 11) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAppViewDataSourceAdapter,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAppViewDataSourceAdapter,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAppViewDataSourceAdapter,IWeakReferenceSource,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAppViewDataSourceAdapter,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  v2 = (_QWORD *)((char *)this + 24);
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAppViewDataSourceAdapter,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>'};
  v3 = (_QWORD *)((char *)this + 32);
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAppViewDataSourceAdapter,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::`vftable'{for `IImmersiveShellHookNotification'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAppViewDataSourceAdapter,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  v4 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &AppViewDataSourceAdapter::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &AppViewDataSourceAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAppViewDataSourceAdapter,IWeakReferenceSource,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAppViewDataSourceAdapter,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &AppViewDataSourceAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>'};
  *v3 = &AppViewDataSourceAdapter::`vftable'{for `IImmersiveShellHookNotification'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAppViewDataSourceAdapter,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 16) = v2;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 18) = v3;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 20) = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode(v4);
  InitializeSRWLock((PSRWLOCK)this + 22);
  return this;
}
