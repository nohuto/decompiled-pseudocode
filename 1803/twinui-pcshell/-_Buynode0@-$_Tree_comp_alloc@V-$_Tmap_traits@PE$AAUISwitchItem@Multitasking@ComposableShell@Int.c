/*
 * XREFs of ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@2345@V?$allocator@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@7@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@PEAX@2@XZ @ 0x180256DE4
 * Callers:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@2345@V?$allocator@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@7@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802040BC (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQE$AAUISwitchItem@Multitasking@Composable.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHMONITOR__@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHMONITOR__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180256748 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHMONITOR__@@@2@V-$tuple@$$V@2@@-$_Tre.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

char *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * const,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::_Buynode0(
        _QWORD *a1)
{
  char *result; // rax

  result = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x38uLL);
  try
  {
    *(_QWORD *)result = *a1;
    *((_QWORD *)result + 1) = *a1;
    *((_QWORD *)result + 2) = *a1;
  }
  catch ( ... )
  {
    std::_Deallocate(result, 1uLL, 0x38uLL);
    throw;
  }
  return result;
}
