/*
 * XREFs of ?set@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@BackgroundThumbnail@SwitcherViewModelBase@2345@UE$AAAXPE$AAUIThumbnailFactory@Multitasking@4Internal@Windows@@@Z @ 0x1801700F8
 * Callers:
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x18016F8CC (_lambda_237a64fcb5f24c6cb49474a7b0122401_--operator().c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _set__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__BackgroundThumbnail_SwitcherViewModelBase_2345_UE_AAAXPE_AAUIThumbnailFactory_Multitasking_4Internal_Windows___Z(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *),
        __int64 a2)
{
  __int64 v3; // rbx
  int v4; // eax
  int v5; // edi
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h]

  v3 = 0LL;
  v7 = 0LL;
  if ( a1 )
  {
    v4 = (**a1)(a1, &_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__, &v7);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    v3 = v7;
  }
  v8 = v3;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  return result;
}
