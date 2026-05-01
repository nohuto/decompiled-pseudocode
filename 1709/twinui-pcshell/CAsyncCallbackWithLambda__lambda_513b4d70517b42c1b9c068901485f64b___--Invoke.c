/*
 * XREFs of CAsyncCallbackWithLambda__lambda_513b4d70517b42c1b9c068901485f64b___::Invoke @ 0x18017B5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18017AA5C (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x1801CD2A0 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAsyncCallbackWithLambda__lambda_513b4d70517b42c1b9c068901485f64b___::Invoke(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  XamlBaseViewController::GetAppViewFromSwitchItem(a1, *(_QWORD *)(a1 + 64), &v5);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 64LL);
  v3 = v5;
  ApplicationViewHelpers::CloseView(v5, v2, 7LL);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
