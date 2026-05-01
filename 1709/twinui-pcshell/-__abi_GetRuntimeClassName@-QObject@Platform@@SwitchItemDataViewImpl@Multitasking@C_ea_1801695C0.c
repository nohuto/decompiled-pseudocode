/*
 * XREFs of ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1801695C0
 * Callers:
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x180161600 (-__abi_GetRuntimeClassName@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShel.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x180161C80 (-__abi_GetRuntimeClassName@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@C_ea_180161C80.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WBI@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1801690B0 (-__abi_GetRuntimeClassName@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@C_ea_1801690B0.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCI@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1801695E0 (-__abi_GetRuntimeClassName@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@C_ea_1801695E0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ___abi_GetRuntimeClassName__QObject_Platform__SwitchItemDataViewImpl_Multitasking_ComposableShell_Internal_Windows__UE_AAAJPEAPEAUHSTRING_____Z(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"Windows.Internal.ComposableShell.Multitasking.SwitchItemDataViewImpl",
           0x44u,
           a2);
}
