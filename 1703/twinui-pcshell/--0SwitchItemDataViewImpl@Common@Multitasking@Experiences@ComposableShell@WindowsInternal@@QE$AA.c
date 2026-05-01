/*
 * XREFs of ??0SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x18013E980
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18012D894 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@23456@V?$allocator@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@@8@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@PEAX@2@XZ @ 0x18013E374 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PE$AAUISwitchItem@Common@Multitasking@Experienc.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::SwitchItemDataViewImpl(
        __int64 a1)
{
  void **v2; // rdx
  void **v3; // rdx

  Platform::Object::Object(a1 + 24);
  *(_QWORD *)a1 = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::`vftable'{for `WindowsInternal::ComposableShell::Experiences::Multitasking::Common::__ISwitchItemDataViewImplPublicNonVirtuals'};
  *(_QWORD *)(a1 + 8) = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::`vftable'{for `WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView'};
  *(_QWORD *)(a1 + 16) = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::`vftable'{for `WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource'};
  *(_QWORD *)(a1 + 24) = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 32) = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 40) = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 128) = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  Platform::Details::EventSourceInitialize((Platform::Details *)(a1 + 48), v2);
  *(_QWORD *)(a1 + 56) = 0LL;
  Platform::Details::EventSourceInitialize((Platform::Details *)(a1 + 64), v3);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 104) = std::_Tree_comp_alloc<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * const,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::_Buyheadnode();
  return a1;
}
