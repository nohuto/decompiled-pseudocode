/*
 * XREFs of ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18017A7D8
 * Callers:
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180177D90 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitc.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_f4b46c9c4eb1558b25bb27c2a9448747_::_lambda_f4b46c9c4eb1558b25bb27c2a9448747_ @ 0x18017977C (_lambda_f4b46c9c4eb1558b25bb27c2a9448747_--_lambda_f4b46c9c4eb1558b25bb27c2a9448747_.c)
 *     CreationThreadDispatcher::RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___ @ 0x18017AB08 (CreationThreadDispatcher--RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall _CloseSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  int v5; // eax
  __int64 result; // rax
  __int64 v7[3]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( a1 )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  v7[0] = (__int64)a1;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v7[1] = a2;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v7[2] = (__int64)a1;
  v4 = lambda_f4b46c9c4eb1558b25bb27c2a9448747_::_lambda_f4b46c9c4eb1558b25bb27c2a9448747_(v8, v7);
  v5 = CreationThreadDispatcher::RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___(a1[10], v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
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
