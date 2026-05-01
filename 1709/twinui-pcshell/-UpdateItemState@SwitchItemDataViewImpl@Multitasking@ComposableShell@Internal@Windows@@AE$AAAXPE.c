/*
 * XREFs of ?UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPEAUDataViewItemState@12345@@Z @ 0x18016A7FC
 * Callers:
 *     ?OnSwitchItemChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@W4SwitchItemProperty@2345@@Z @ 0x180161A90 (-OnSwitchItemChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AA.c)
 *     ?UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x180161B6C (-UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA.c)
 * Callees:
 *     ?InternalEvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA?AW4SwitchItemInclusion@2345@PE$AAUISwitchItem@2345@@Z @ 0x18016B334 (-InternalEvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$A.c)
 *     ??0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemCollectionChangedEventType@1234@@Z @ 0x18016C2DC (--0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateItemState(
        unsigned __int64 a1,
        _QWORD *a2)
{
  int v4; // ebx
  __int64 result; // rax
  BOOL v6; // ebx
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r8

  v4 = *((_DWORD *)a2 + 2);
  result = Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::InternalEvaluateItem(a1, *a2);
  if ( v4 != (_DWORD)result )
  {
    *((_DWORD *)a2 + 2) = result;
    v6 = result != 0;
    v7 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
    v8 = Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
           v7,
           *a2,
           v6);
    v9 = v8;
    if ( v8 )
      v10 = v8 + 8;
    else
      v10 = 0LL;
    result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(*(_QWORD *)a1 + 64LL))(
               a1,
               (a1 + 16) & ((unsigned __int128)-(__int128)a1 >> 64),
               v10);
    if ( v9 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return result;
}
