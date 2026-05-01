/*
 * XREFs of ?RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x180169FB0
 * Callers:
 *     ?OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItemDataSource@2345@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Z @ 0x18016A0E0 (-OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@.c)
 *     ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x18016C710 (-SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$A.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@2345@V?$allocator@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180169AC8 (-erase@-$_Tree@V-$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@.c)
 *     ??0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemCollectionChangedEventType@1234@@Z @ 0x18016C2DC (--0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 **__fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::RemoveSwitchItem(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 **result; // rax
  __int64 *v5; // rcx
  __int64 *v6; // r8
  int v7; // ebx
  __int64 *v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // r8
  __int64 *v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp+10h]

  v12 = a2;
  if ( a2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 8LL))(a2);
  v12 = a2;
  result = (__int64 **)a1[13];
  v5 = result[1];
  v6 = (__int64 *)result;
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( v5[4] >= a2 )
    {
      v6 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  if ( v6 == (__int64 *)result || a2 < v6[4] )
    v6 = (__int64 *)a1[13];
  if ( v6 != (__int64 *)result )
  {
    v7 = *(_DWORD *)(v6[5] + 8);
    result = std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * const,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::erase(
               a1 + 13,
               &v11,
               v6);
    if ( !v7 )
    {
      v11 = (__int64 *)Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
      v8 = (__int64 *)Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
                        v11,
                        a2,
                        1LL);
      v9 = v8;
      v11 = v8;
      v10 = v8 ? (__int64)(v8 + 1) : 0LL;
      result = (__int64 **)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 64LL))(
                             a1,
                             (unsigned __int64)(a1 + 2) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
                             v10);
      if ( v9 )
        result = (__int64 **)(*(__int64 (__fastcall **)(__int64 *))(*v9 + 16))(v9);
    }
  }
  if ( a2 )
    return (__int64 **)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 16LL))(a2);
  return result;
}
