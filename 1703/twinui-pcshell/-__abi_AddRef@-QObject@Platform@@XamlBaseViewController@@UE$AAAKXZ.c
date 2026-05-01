/*
 * XREFs of ?__abi_AddRef@?QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ @ 0x180146D70
 * Callers:
 *     ?__abi_AddRef@?QObject@Platform@@XamlBaseViewController@@W7E$AAAKXZ @ 0x180146A20 (-__abi_AddRef@-QObject@Platform@@XamlBaseViewController@@W7E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlBaseViewController@@WCI@E$AAAKXZ @ 0x180146A30 (-__abi_AddRef@-QObject@Platform@@XamlBaseViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlBaseViewController@@WBA@E$AAAKXZ @ 0x180146AB0 (-__abi_AddRef@-QObject@Platform@@XamlBaseViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlBaseViewController@@WBI@E$AAAKXZ @ 0x180146B10 (-__abi_AddRef@-QObject@Platform@@XamlBaseViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlBaseViewController@@WCA@E$AAAKXZ @ 0x180146B50 (-__abi_AddRef@-QObject@Platform@@XamlBaseViewController@@WCA@E$AAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___abi_AddRef__QObject_Platform__XamlBaseViewController__UE_AAAKXZ(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 96) && *(int *)(*(_QWORD *)(a1 + 96) + 12LL) >= 0 )
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 96) + 12LL));
  else
    return (unsigned int)-1;
}
