/*
 * XREFs of ?UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPEAUDataViewItemState@12345@@Z @ 0x1802106FC
 * Callers:
 *     ?OnSwitchItemChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@W4SwitchItemProperty@2345@@Z @ 0x18020DE90 (-OnSwitchItemChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AA.c)
 *     ?ReevaluateItem@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x18020E068 (-ReevaluateItem@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows_ea_18020E068.c)
 *     ?UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x1802106B0 (-UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemCollectionChangedEventType@1234@@Z @ 0x180205FA8 (--0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE.c)
 *     ?InternalEvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA?AW4SwitchItemInclusion@2345@PE$AAUISwitchItem@2345@@Z @ 0x18020C6B8 (-InternalEvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$A.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateItemState(
        _DWORD *a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rbp
  BOOL v7; // ebx
  void *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi

  v4 = *(_DWORD *)(a2 + 8);
  result = Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::InternalEvaluateItem(
             a1,
             *(_QWORD *)a2);
  if ( v4 != (_DWORD)result )
  {
    *(_DWORD *)(a2 + 8) = result;
    v6 = 0LL;
    v7 = result != 0;
    v8 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
    v9 = Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
           (__int64)v8,
           *(_QWORD *)a2,
           v7);
    v10 = __abi_winrt_ptr_ctor(v9);
    __abi_winrt_ptr_dtor(v9);
    if ( v10 )
      v6 = v10 + 8;
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 64LL))(
      a1,
      (unsigned __int64)(a1 + 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
      v6);
    return __abi_winrt_ptr_dtor(v10);
  }
  return result;
}
