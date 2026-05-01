/*
 * XREFs of ?__abi_IXamlMultitaskingViewController____abi_CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180178400
 * Callers:
 *     ?__abi_IXamlMultitaskingViewController____abi_CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180177A60 (-__abi_IXamlMultitaskingViewController____abi_CloseSwitchItem@-QIXamlMultitaskingViewController@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlMultitaskingViewController____abi_CloseSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAJPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 112) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 88LL))(a1 + 8);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
