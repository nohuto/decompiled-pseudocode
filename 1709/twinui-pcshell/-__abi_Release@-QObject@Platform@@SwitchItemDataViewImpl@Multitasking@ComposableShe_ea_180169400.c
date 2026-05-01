/*
 * XREFs of ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAKXZ @ 0x180169400
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@W7E$AAAKXZ @ 0x1801615E0 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@W.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WBA@E$AAAKXZ @ 0x180161C60 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_180161C60.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WBI@E$AAAKXZ @ 0x180169090 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_180169090.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAKXZ @ 0x1801690E0 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_1801690E0.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCI@E$AAAKXZ @ 0x1801694F0 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_1801694F0.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18014A798 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@2345@V?$allocator@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@7@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@PEAX@2@@Z @ 0x180169640 (-_Erase@-$_Tree@V-$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ___abi_Release__QObject_Platform__SwitchItemDataViewImpl_Multitasking_ComposableShell_Internal_Windows__UE_AAAKXZ(
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
    std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * const,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::_Erase(
      a1 + 104,
      *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL));
    *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)v3;
    **(_QWORD **)v3 = *(_QWORD *)v3;
    *(_QWORD *)(*(_QWORD *)v3 + 16LL) = *(_QWORD *)v3;
    *(_QWORD *)(a1 + 112) = 0LL;
    operator delete(*(void **)(a1 + 104));
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
