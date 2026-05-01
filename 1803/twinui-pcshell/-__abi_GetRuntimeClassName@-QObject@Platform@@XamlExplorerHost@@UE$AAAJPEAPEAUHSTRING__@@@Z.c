/*
 * XREFs of ?__abi_GetRuntimeClassName@?QObject@Platform@@XamlExplorerHost@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1801FB370
 * Callers:
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@XamlExplorerHost@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800A9160 (-__abi_GetRuntimeClassName@-QObject@Platform@@XamlExplorerHost@@W7E$AAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@XamlExplorerHost@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800A9170 (-__abi_GetRuntimeClassName@-QObject@Platform@@XamlExplorerHost@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@XamlExplorerHost@@WCA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800A9180 (-__abi_GetRuntimeClassName@-QObject@Platform@@XamlExplorerHost@@WCA@E$AAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ___abi_GetRuntimeClassName__QObject_Platform__XamlExplorerHost__UE_AAAJPEAPEAUHSTRING_____Z(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(L"XamlExplorerHost", 0x10u, a2);
}
