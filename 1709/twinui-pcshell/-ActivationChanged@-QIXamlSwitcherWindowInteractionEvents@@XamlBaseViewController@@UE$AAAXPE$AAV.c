/*
 * XREFs of ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x18017A91C
 * Callers:
 *     ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x180178E00 (-ActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAXPE$.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x18017A968 (-DismissView@XamlBaseViewController@@IE$AAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _ActivationChanged__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAXPE_AAVObject_Platform__PE_AAVWindowActivatedEventArgs_Core_UI_Windows___Z(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = *a3;
  v6 = 0;
  result = (*(__int64 (__fastcall **)(__int64 *, int *))(v3 + 48))(a3, &v6);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  if ( v6 == 1 )
    return XamlBaseViewController::DismissView(a1);
  return result;
}
