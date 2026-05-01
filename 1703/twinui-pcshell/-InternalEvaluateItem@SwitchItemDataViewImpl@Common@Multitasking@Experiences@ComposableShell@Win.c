/*
 * XREFs of ?InternalEvaluateItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAA?AW4SwitchItemInclusion@23456@PE$AAUISwitchItem@23456@@Z @ 0x180135F94
 * Callers:
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItem@23456@@Z @ 0x180134DE8 (-AddSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 *     ?UpdateItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPEAUDataViewItemState@123456@@Z @ 0x1801368D0 (-UpdateItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsI.c)
 * Callees:
 *     ??0EvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItem@12345@W4SwitchItemInclusion@12345@@Z @ 0x180135A7C (--0EvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@QE$AAA.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::InternalEvaluateItem(
        _DWORD *a1,
        __int64 a2)
{
  void *v4; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // esi

  v4 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
  v5 = (_QWORD *)WindowsInternal::ComposableShell::Experiences::Multitasking::Common::EvaluateItemEventArgs::EvaluateItemEventArgs(
                   (__int64)v4,
                   a2);
  (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 48LL))(
    a1,
    (unsigned __int64)(a1 + 2) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64));
  v6 = a1[20];
  if ( (*(unsigned int (__fastcall **)(_QWORD *))(v5[1] + 72LL))(v5 + 1) != 2 )
    v6 = (*(__int64 (__fastcall **)(_QWORD *))(v5[1] + 72LL))(v5 + 1);
  (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return v6;
}
