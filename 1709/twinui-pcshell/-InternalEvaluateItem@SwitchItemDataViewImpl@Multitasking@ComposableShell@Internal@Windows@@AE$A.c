/*
 * XREFs of ?InternalEvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA?AW4SwitchItemInclusion@2345@PE$AAUISwitchItem@2345@@Z @ 0x18016B334
 * Callers:
 *     ?UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPEAUDataViewItemState@12345@@Z @ 0x18016A7FC (-UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE.c)
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x18016C39C (-AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$A.c)
 * Callees:
 *     ??0EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemInclusion@1234@@Z @ 0x18016AE3C (--0EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::InternalEvaluateItem(
        _DWORD *a1,
        __int64 a2)
{
  void *v4; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // esi

  v4 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
  v5 = (_QWORD *)Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::EvaluateItemEventArgs(
                   (__int64)v4,
                   a2);
  (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 56LL))(
    a1,
    (unsigned __int64)(a1 + 2) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64));
  v6 = a1[20];
  if ( (*(unsigned int (__fastcall **)(_QWORD *))(v5[1] + 72LL))(v5 + 1) != 2 )
    v6 = (*(__int64 (__fastcall **)(_QWORD *))(v5[1] + 72LL))(v5 + 1);
  (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return v6;
}
