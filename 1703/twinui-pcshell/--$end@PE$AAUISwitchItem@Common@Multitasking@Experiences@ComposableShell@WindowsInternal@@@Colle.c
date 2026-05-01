/*
 * XREFs of ??$end@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@YA?AV?$VectorViewIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@0Platform@@PE$AAU?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@012@@Z @ 0x180133EA4
 * Callers:
 *     ?SetDataSource@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@UE$AAAXPE$AAUISwitchItemDataSource@23456@@Z @ 0x180135108 (-SetDataSource@-QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInte.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??H?$VectorViewIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Platform@@QEBA?AV012@_J@Z @ 0x180133E44 (--H-$VectorViewIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Foundation::Collections::end<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // eax
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v6[0] = a2;
  v6[1] = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v7);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  Platform::Collections::VectorViewIterator<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>::operator+(
    v6,
    a1,
    v7);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  return a1;
}
