/*
 * XREFs of ?__abi_IXamlSwitcherWindowInteractionEvents____abi_OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAJXZ @ 0x180143654
 * Callers:
 *     ?__abi_IXamlSwitcherWindowInteractionEvents____abi_OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAJXZ @ 0x180143400 (-__abi_IXamlSwitcherWindowInteractionEvents____abi_OnLightDismiss@-QIXamlSwitcherWindowInteracti.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlSwitcherWindowInteractionEvents____abi_OnLightDismiss__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAJXZ(
        __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 112) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 72LL))(a1 + 16);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v1;
}
