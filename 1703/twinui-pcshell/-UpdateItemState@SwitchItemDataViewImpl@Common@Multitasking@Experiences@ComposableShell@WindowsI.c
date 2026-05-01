/*
 * XREFs of ?UpdateItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPEAUDataViewItemState@123456@@Z @ 0x1801368D0
 * Callers:
 *     ?OnSwitchItemChanged@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItem@23456@W4SwitchItemProperty@23456@@Z @ 0x1801344A0 (-OnSwitchItemChanged@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@Wind.c)
 *     ?UpdateAllItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXXZ @ 0x180136994 (-UpdateAllItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@Windo.c)
 * Callees:
 *     ?InternalEvaluateItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAA?AW4SwitchItemInclusion@23456@PE$AAUISwitchItem@23456@@Z @ 0x180135F94 (-InternalEvaluateItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@Win.c)
 *     ??0SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItem@12345@W4SwitchItemCollectionChangedEventType@12345@@Z @ 0x1801363FC (--0SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsI.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::UpdateItemState(
        _DWORD *a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 result; // rax
  BOOL v6; // ebx
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r8

  v4 = *(_DWORD *)(a2 + 8);
  result = WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::InternalEvaluateItem(
             a1,
             *(_QWORD *)a2);
  if ( v4 != (_DWORD)result )
  {
    *(_DWORD *)(a2 + 8) = result;
    v6 = result != 0;
    v7 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
    v8 = WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
           (__int64)v7,
           *(_QWORD *)a2,
           v6);
    v9 = v8;
    if ( v8 )
      v10 = v8 + 8;
    else
      v10 = 0LL;
    result = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
               a1,
               (unsigned __int64)(a1 + 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
               v10);
    if ( v9 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return result;
}
