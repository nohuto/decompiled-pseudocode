/*
 * XREFs of ?__abi_AddRef@?QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ @ 0x180149E40
 * Callers:
 *     ?__abi_AddRef@?QObject@Platform@@XamlExplorerHost@@WCA@E$AAAKXZ @ 0x180149760 (-__abi_AddRef@-QObject@Platform@@XamlExplorerHost@@WCA@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlBaseViewController@@W7E$AAAKXZ @ 0x1801497F0 (-__abi_AddRef@-QObject@Platform@@XamlBaseViewController@@W7E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlExplorerHost@@WBA@E$AAAKXZ @ 0x180149870 (-__abi_AddRef@-QObject@Platform@@XamlExplorerHost@@WBA@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlBaseViewController@@WBI@E$AAAKXZ @ 0x1801498D0 (-__abi_AddRef@-QObject@Platform@@XamlBaseViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlBaseViewController@@WCI@E$AAAKXZ @ 0x18017B760 (-__abi_AddRef@-QObject@Platform@@XamlBaseViewController@@WCI@E$AAAKXZ.c)
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
