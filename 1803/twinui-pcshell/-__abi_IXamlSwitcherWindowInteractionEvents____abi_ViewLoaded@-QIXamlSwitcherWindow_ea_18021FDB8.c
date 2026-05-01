/*
 * XREFs of ?__abi_IXamlSwitcherWindowInteractionEvents____abi_ViewLoaded@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAJXZ @ 0x18021FDB8
 * Callers:
 *     ?__abi_IXamlSwitcherWindowInteractionEvents____abi_ViewLoaded@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAJXZ @ 0x1800ABE10 (-__abi_IXamlSwitcherWindowInteractionEvents____abi_ViewLoaded@-QIXamlSwitcherWindowInteractionEv.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlSwitcherWindowInteractionEvents____abi_ViewLoaded__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAJXZ(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 128) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 104LL))(a1 + 16);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
