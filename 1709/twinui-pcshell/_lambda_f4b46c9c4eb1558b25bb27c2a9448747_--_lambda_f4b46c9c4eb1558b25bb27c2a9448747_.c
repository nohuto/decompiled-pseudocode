/*
 * XREFs of _lambda_f4b46c9c4eb1558b25bb27c2a9448747_::_lambda_f4b46c9c4eb1558b25bb27c2a9448747_ @ 0x18017977C
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801795E8 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAU.c)
 *     CreationThreadDispatcher::RunAsync__lambda_a8a8a6fc1c15fdd6434ee6b8fb931e9b___ @ 0x1801797FC (CreationThreadDispatcher--RunAsync__lambda_a8a8a6fc1c15fdd6434ee6b8fb931e9b___.c)
 *     CreationThreadDispatcher::RunSync__lambda_a8a8a6fc1c15fdd6434ee6b8fb931e9b___ @ 0x180179A9C (CreationThreadDispatcher--RunSync__lambda_a8a8a6fc1c15fdd6434ee6b8fb931e9b___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7f972278ece14cb52f7272136f7cbede___::Run @ 0x180179D60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7f972278ece14cb52f7272136f7cbede___--Run.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18017A7D8 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitch.c)
 *     CreationThreadDispatcher::RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___ @ 0x18017AB08 (CreationThreadDispatcher--RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___.c)
 *     CreationThreadDispatcher::RunSync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___ @ 0x18017AFA0 (CreationThreadDispatcher--RunSync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6d9923a1ae258a03f662b6b89cb315c5___::Run @ 0x18017B580 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6d9923a1ae258a03f662b6b89cb315c5___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_f4b46c9c4eb1558b25bb27c2a9448747_::_lambda_f4b46c9c4eb1558b25bb27c2a9448747_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  _QWORD *result; // rax

  v2 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  *a1 = v2;
  v5 = a2[1];
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(a2[1]);
  a1[1] = v5;
  v6 = a2[2];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(a2[2]);
  result = a1;
  a1[2] = v6;
  return result;
}
