/*
 * XREFs of ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@23456@V?$allocator@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@@8@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@PEAX@2@XZ @ 0x1801346C4
 * Callers:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@23456@V?$allocator@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@@8@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180134730 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQE$AAUISwitchItem@Common@Multitasking@Exp.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * const,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::_Buynode0(
        _QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  result = operator new(0x38uLL);
  try
  {
    if ( result )
      *result = *a1;
    if ( result != (_QWORD *)-8LL )
      result[1] = *a1;
    v3 = result + 2;
    if ( result != (_QWORD *)-16LL )
      *v3 = *a1;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * const,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>>,void *>>>::deallocate(
      v3,
      result);
    throw;
  }
  return result;
}
