/*
 * XREFs of ?__abi_GetRuntimeClassName@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x18016AE10
 * Callers:
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x18016A950 (-__abi_GetRuntimeClassName@-QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x18016AB00 (-__abi_GetRuntimeClassName@-QObject@Platform@@EvaluateItemEventArgs@Multitasking@Co_ea_18016AB00.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x18016AE30 (-__abi_GetRuntimeClassName@-QObject@Platform@@EvaluateItemEventArgs@Multitasking@Co_ea_18016AE30.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ___abi_GetRuntimeClassName__QObject_Platform__EvaluateItemEventArgs_Multitasking_ComposableShell_Internal_Windows__UE_AAAJPEAPEAUHSTRING_____Z(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"Windows.Internal.ComposableShell.Multitasking.EvaluateItemEventArgs",
           0x43u,
           a2);
}
