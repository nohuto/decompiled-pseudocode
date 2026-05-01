/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180178D68
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180178E50 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@WBA@E$AAAXPE$AAUI.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlAltTabViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 24LL))(*(_QWORD *)(a1 + 80));
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewcontroller.cpp",
      (const char *)(unsigned int)v2);
    JUMPOUT(0x180178DBCLL);
  }
  return _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(a1 + 8);
}
