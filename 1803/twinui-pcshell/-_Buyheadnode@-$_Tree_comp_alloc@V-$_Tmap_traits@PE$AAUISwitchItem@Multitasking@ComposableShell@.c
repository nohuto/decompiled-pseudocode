/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@2345@V?$allocator@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@7@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@PEAX@2@XZ @ 0x180253D7C
 * Callers:
 *     ??0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ @ 0x180206058 (--0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ.c)
 *     ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x180251610 (--0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

char *std::_Tree_comp_alloc<std::_Tmap_traits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * const,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::_Buyheadnode()
{
  char *result; // rax

  result = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x38uLL);
  try
  {
    *(_QWORD *)result = result;
    *((_QWORD *)result + 1) = result;
    *((_QWORD *)result + 2) = result;
  }
  catch ( ... )
  {
    std::_Deallocate(result, 1uLL, 0x38uLL);
    throw;
  }
  *((_WORD *)result + 12) = 257;
  return result;
}
