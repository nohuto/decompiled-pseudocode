/*
 * XREFs of CAsyncCallbackWithLambda__lambda_9d14f4c5953655842eb18c10ba19f0b4___::Invoke @ 0x180146560
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAPEAUIApplicationView@@@Z @ 0x180145CA0 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Common@Multitasking@E.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18017F8FC (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAsyncCallbackWithLambda__lambda_9d14f4c5953655842eb18c10ba19f0b4___::Invoke(__int64 a1)
{
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  XamlBaseViewController::GetAppViewFromSwitchItem(a1, *(_QWORD *)(a1 + 48), &v3);
  ApplicationViewHelpers::CloseView(v3, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 64LL), 7LL);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
