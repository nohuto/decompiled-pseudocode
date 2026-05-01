/*
 * XREFs of ?RemoveSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItem@23456@@Z @ 0x180133AFC
 * Callers:
 *     ?OnSourceCollectionChanged@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItemDataSource@23456@PE$AAUISwitchItemCollectionChangedEventArgs@23456@@Z @ 0x180133C10 (-OnSourceCollectionChanged@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShel.c)
 *     ?SetDataSource@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@UE$AAAXPE$AAUISwitchItemDataSource@23456@@Z @ 0x180135108 (-SetDataSource@-QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInte.c)
 * Callees:
 *     ??0SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItem@12345@W4SwitchItemCollectionChangedEventType@12345@@Z @ 0x1801363FC (--0SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsI.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@23456@V?$allocator@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18013E48C (-erase@-$_Tree@V-$_Tmap_traits@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::RemoveSwitchItem(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  void *v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp+10h]

  v12 = a2;
  if ( a2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 8LL))(a2);
  v12 = a2;
  result = a1[13];
  v5 = *(_QWORD *)(result + 8);
  v6 = result;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    if ( *(_QWORD *)(v5 + 32) >= a2 )
    {
      v6 = v5;
      v5 = *(_QWORD *)v5;
    }
    else
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
  }
  if ( v6 == result || a2 < *(_QWORD *)(v6 + 32) )
    v6 = a1[13];
  if ( v6 != result )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 8LL);
    result = std::_Tree<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * const,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::erase(
               a1 + 13,
               &v11);
    if ( !v7 )
    {
      v11 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
      v8 = WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
             v11,
             a2,
             1LL);
      v9 = v8;
      v11 = (void *)v8;
      v10 = v8 ? v8 + 8 : 0LL;
      result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64))(*a1 + 56LL))(a1, a1 + 2, v10);
      if ( v9 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( a2 )
    return (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 16LL))(a2);
  return result;
}
