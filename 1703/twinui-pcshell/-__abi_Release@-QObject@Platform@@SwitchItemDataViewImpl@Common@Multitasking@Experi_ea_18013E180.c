/*
 * XREFs of ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x18013E180
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x180133270 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@Composa.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x180136A80 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experi_ea_180136A80.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WBI@E$AAAKXZ @ 0x18013DE10 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experi_ea_18013DE10.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WCA@E$AAAKXZ @ 0x18013DE60 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experi_ea_18013DE60.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WCI@E$AAAKXZ @ 0x18013E270 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experi_ea_18013E270.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180120258 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@23456@V?$allocator@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@@8@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@PEAX@2@@Z @ 0x18013E3C0 (-_Erase@-$_Tree@V-$_Tmap_traits@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShel.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ___abi_Release__QObject_Platform__SwitchItemDataViewImpl_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__UE_AAAKXZ(
        __int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rsi
  void **v4; // rdx
  __int64 v5; // rcx
  void **v6; // rdx
  __int64 v7; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 120));
  if ( !v2 )
  {
    v3 = a1 + 104;
    std::_Tree<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * const,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::_Erase(
      a1 + 104,
      *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL));
    *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)v3;
    **(_QWORD **)v3 = *(_QWORD *)v3;
    *(_QWORD *)(*(_QWORD *)v3 + 16LL) = *(_QWORD *)v3;
    *(_QWORD *)(a1 + 112) = 0LL;
    std::_Deallocate(*(char **)(a1 + 104), 1uLL, 0x38uLL);
    v5 = *(_QWORD *)(a1 + 88);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    Platform::Details::EventSourceUninitialize((Platform::Details *)(a1 + 64), v4);
    Platform::Details::EventSourceUninitialize((Platform::Details *)(a1 + 48), v6);
    v7 = *(_QWORD *)(a1 + 120);
    Platform::Details::ControlBlock::ReleaseTarget((Platform::Details::ControlBlock *)v7);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
    {
      if ( *(_BYTE *)(v7 + 25) )
        Platform::Details::Heap::AlignedFree((void *)v7);
      else
        Platform::Details::Heap::Free((void *)v7);
    }
  }
  return v2;
}
