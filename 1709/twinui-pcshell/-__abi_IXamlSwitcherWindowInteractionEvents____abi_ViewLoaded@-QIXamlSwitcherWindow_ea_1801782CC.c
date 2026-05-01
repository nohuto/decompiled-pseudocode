/*
 * XREFs of ?__abi_IXamlSwitcherWindowInteractionEvents____abi_ViewLoaded@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAJXZ @ 0x1801782CC
 * Callers:
 *     ?__abi_IXamlSwitcherWindowInteractionEvents____abi_ViewLoaded@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAJXZ @ 0x1801780E0 (-__abi_IXamlSwitcherWindowInteractionEvents____abi_ViewLoaded@-QIXamlSwitcherWindowInteractionEv.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlSwitcherWindowInteractionEvents____abi_ViewLoaded__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAJXZ(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 112) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 104LL))(a1 + 16);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
