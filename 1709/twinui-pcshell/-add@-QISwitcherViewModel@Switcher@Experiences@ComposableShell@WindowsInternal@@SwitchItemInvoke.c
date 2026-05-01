/*
 * XREFs of ?add@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitchItemInvoked@SwitcherViewModelBase@2345@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemInvokedEventHandler@2345@@Z @ 0x18016E1F4
 * Callers:
 *     _lambda_7e172f12ff20f7d48d0a79092595c49c_::operator() @ 0x18016D884 (_lambda_7e172f12ff20f7d48d0a79092595c49c_--operator().c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x18016F8CC (_lambda_237a64fcb5f24c6cb49474a7b0122401_--operator().c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall _add__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__SwitchItemInvoked_SwitcherViewModelBase_2345_UE_AAA_AVEventRegistrationToken_Foundation_Windows__PE_AAVItemInvokedEventHandler_2345__Z(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rbx
  int v6; // eax
  int v7; // esi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h]

  *a2 = 0LL;
  v5 = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    v6 = (**a1)(a1, &_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__, &v9);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    v5 = v9;
  }
  v10 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v5 + 80LL))(v5, a3, a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  return a2;
}
