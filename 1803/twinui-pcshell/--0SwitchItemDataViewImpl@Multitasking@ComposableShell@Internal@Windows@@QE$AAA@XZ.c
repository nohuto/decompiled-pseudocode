/*
 * XREFs of ??0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ @ 0x180206058
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18020994C (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1801FA548 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@2345@V?$allocator@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@7@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@PEAX@2@XZ @ 0x180253D7C (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl(
        __int64 a1)
{
  void **v2; // rdx
  void **v3; // rdx
  __int64 v4; // rcx

  Platform::Object::Object(a1 + 24);
  *(_QWORD *)a1 = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::__ISwitchItemDataViewImplPublicNonVirtuals'};
  *(_QWORD *)(a1 + 8) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView'};
  *(_QWORD *)(a1 + 16) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource'};
  *(_QWORD *)(a1 + 24) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 32) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 40) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 120);
  Platform::Details::EventSourceInitialize((Platform::Details *)(a1 + 48), v2);
  *(_QWORD *)(a1 + 56) = 0LL;
  Platform::Details::EventSourceInitialize((Platform::Details *)(a1 + 64), v3);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 104) = std::_Tree_comp_alloc<std::_Tmap_traits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * const,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::_Buyheadnode(v4);
  return a1;
}
