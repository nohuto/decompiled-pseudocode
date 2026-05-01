/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@23456@V?$allocator@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@@8@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180134730
 * Callers:
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItem@23456@@Z @ 0x180134DE8 (-AddSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@23456@V?$allocator@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@@8@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@PEAX@2@XZ @ 0x1801346C4 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@PE$AAUISwitchItem@Common@Multitasking@Experiences@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * const,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * const &>,std::tuple<>>(
        _QWORD *a1,
        __int64 a2,
        __int64 **a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  char *v10; // [rsp+68h] [rbp+20h]

  v4 = std::_Tree_comp_alloc<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * const,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::_Buynode0(a1);
  v6 = v4;
  v10 = (char *)v4;
  *((_WORD *)v4 + 12) = 0;
  try
  {
    v7 = v4 + 4;
    if ( v4 != (_QWORD *)-32LL )
    {
      v8 = **a3;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *v7 = v8;
      v7[1] = 0LL;
      v7[2] = 0LL;
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * const,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>>,void *>>>::deallocate(
      v5,
      v10);
    throw;
  }
  return v6;
}
