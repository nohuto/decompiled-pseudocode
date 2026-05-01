/*
 * XREFs of ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x180251610
 * Callers:
 *     ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x18025088C (--$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Micros.c)
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@2345@V?$allocator@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@7@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@PEAX@2@XZ @ 0x180253D7C (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x1802BA9D8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitask.c)
 */

// Hidden C++ exception states: #wind=2
KeyboardHosting::PositionAndSizeOptionsProvider *__fastcall KeyboardHosting::PositionAndSizeOptionsProvider::PositionAndSizeOptionsProvider(
        KeyboardHosting::PositionAndSizeOptionsProvider *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx
  __int64 v3; // rcx

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IPositionAndSizeOptionsProvider>::`vftable';
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &KeyboardHosting::PositionAndSizeOptionsProvider::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode(v2);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = std::_Tree_comp_alloc<std::_Tmap_traits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * const,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::_Buyheadnode(v3);
  *((_QWORD *)this + 6) = 0LL;
  memset_0((char *)this + 56, 0, 0x20uLL);
  *((_DWORD *)this + 22) = 96;
  *((_DWORD *)this + 23) = 96;
  *((_DWORD *)this + 24) = 100;
  *((_QWORD *)this + 13) = 0LL;
  memset_0((char *)this + 112, 0, 0x20uLL);
  *((_DWORD *)this + 36) = 96;
  *((_DWORD *)this + 37) = 96;
  *((_DWORD *)this + 38) = 100;
  *((_QWORD *)this + 20) = 0LL;
  memset_0((char *)this + 168, 0, 0x20uLL);
  *((_DWORD *)this + 50) = 96;
  *((_DWORD *)this + 51) = 96;
  *((_DWORD *)this + 52) = 100;
  return this;
}
