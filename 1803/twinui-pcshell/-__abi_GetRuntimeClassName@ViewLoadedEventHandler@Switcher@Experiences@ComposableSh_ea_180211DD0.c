/*
 * XREFs of ?__abi_GetRuntimeClassName@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x180211DD0
 * Callers:
 *     ?__abi_GetRuntimeClassName@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800AA9B0 (-__abi_GetRuntimeClassName@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsIn.c)
 *     ?__abi_GetRuntimeClassName@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800AA9C0 (-__abi_GetRuntimeClassName@ViewLoadedEventHandler@Switcher@Experiences@ComposableSh_ea_1800AA9C0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ViewLoadedEventHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.ViewLoadedEventHandler",
           0x4Bu,
           a2);
}
