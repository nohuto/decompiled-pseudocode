/*
 * XREFs of ?InternalEvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA?AW4SwitchItemInclusion@2345@PE$AAUISwitchItem@2345@@Z @ 0x18020C6B8
 * Callers:
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x180208CF8 (-AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$A.c)
 *     ?UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPEAUDataViewItemState@12345@@Z @ 0x1802106FC (-UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemInclusion@1234@@Z @ 0x180205CA4 (--0EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::InternalEvaluateItem(
        _DWORD *a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r8
  unsigned int v8; // esi

  v4 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
  v5 = Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::EvaluateItemEventArgs((__int64)v4, a2);
  v6 = __abi_winrt_ptr_ctor(v5);
  __abi_winrt_ptr_dtor(v5);
  v7 = 0LL;
  if ( v6 )
    v7 = v6 + 8;
  (*(void (__fastcall **)(_DWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
    a1,
    (unsigned __int64)(a1 + 2) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
    v7);
  v8 = a1[20];
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(v6 + 8) + 72LL))(v6 + 8) != 2 )
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v6 + 8) + 72LL))(v6 + 8);
  __abi_winrt_ptr_dtor(v6);
  return v8;
}
