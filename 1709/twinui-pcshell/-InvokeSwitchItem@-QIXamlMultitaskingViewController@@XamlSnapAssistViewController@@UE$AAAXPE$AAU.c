/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801795E8
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180179FE0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@WBA@E$AAAXPE$.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_f4b46c9c4eb1558b25bb27c2a9448747_::_lambda_f4b46c9c4eb1558b25bb27c2a9448747_ @ 0x18017977C (_lambda_f4b46c9c4eb1558b25bb27c2a9448747_--_lambda_f4b46c9c4eb1558b25bb27c2a9448747_.c)
 *     CreationThreadDispatcher::RunAsync__lambda_a8a8a6fc1c15fdd6434ee6b8fb931e9b___ @ 0x1801797FC (CreationThreadDispatcher--RunAsync__lambda_a8a8a6fc1c15fdd6434ee6b8fb931e9b___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlSnapAssistViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v8[40]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( a1 )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  v7[0] = a1;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v7[1] = a2;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v7[2] = a1;
  v4 = lambda_f4b46c9c4eb1558b25bb27c2a9448747_::_lambda_f4b46c9c4eb1558b25bb27c2a9448747_(v8, v7);
  v5 = CreationThreadDispatcher::RunAsync__lambda_a8a8a6fc1c15fdd6434ee6b8fb931e9b___(a1[11], v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
      (const char *)(unsigned int)v5);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  return result;
}
