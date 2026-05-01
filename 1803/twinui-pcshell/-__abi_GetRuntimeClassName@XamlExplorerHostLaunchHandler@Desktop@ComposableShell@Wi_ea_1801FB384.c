/*
 * XREFs of ?__abi_GetRuntimeClassName@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1801FB384
 * Callers:
 *     ?__abi_GetRuntimeClassName@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800A9190 (-__abi_GetRuntimeClassName@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal.c)
 *     ?__abi_GetRuntimeClassName@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800A91A0 (-__abi_GetRuntimeClassName@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@Wi_ea_1800A91A0.c)
 *     ?__abi_GetRuntimeClassName@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WCA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800A91B0 (-__abi_GetRuntimeClassName@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@Wi_ea_1800A91B0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Desktop.XamlExplorerHostLaunchHandler",
           0x45u,
           a2);
}
