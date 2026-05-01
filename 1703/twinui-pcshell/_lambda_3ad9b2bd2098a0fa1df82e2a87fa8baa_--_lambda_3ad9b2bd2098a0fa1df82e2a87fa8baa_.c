/*
 * XREFs of _lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_ @ 0x180144794
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1801444A8 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAU.c)
 *     CreationThreadDispatcher::RunSync__lambda_6b10e70171ff618d2ed46f6369068d10___ @ 0x180144878 (CreationThreadDispatcher--RunSync__lambda_6b10e70171ff618d2ed46f6369068d10___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3bd6e62926fdb44f17182f5492fdd21c___::Run @ 0x180144B50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3bd6e62926fdb44f17182f5492fdd21c___--Run.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c_____lambda_0a6dfc4b60d4d0baccf5499df5f27c2c__const_&___ptr64_ @ 0x180144C60 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c_.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180145754 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitch.c)
 *     CreationThreadDispatcher::RunSync__lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa___ @ 0x180145E50 (CreationThreadDispatcher--RunSync__lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_abcfc8534c890962120398bd9654b364___::Run @ 0x180146530 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_abcfc8534c890962120398bd9654b364___--Run.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_9d14f4c5953655842eb18c10ba19f0b4_____lambda_9d14f4c5953655842eb18c10ba19f0b4__const_&___ptr64_ @ 0x1801465CC (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_9d14f4c5953655842eb18c10ba19f0b4_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_(
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
