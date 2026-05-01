/*
 * XREFs of ?__abi_GetRuntimeClassName@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x18015B6F8
 * Callers:
 *     ?__abi_GetRuntimeClassName@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x18015FD40 (-__abi_GetRuntimeClassName@ViewLoadedEventHandler@Switcher@Experiences@ComposableSh_ea_18015FD40.c)
 *     ?__abi_GetRuntimeClassName@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x18015FE80 (-__abi_GetRuntimeClassName@ViewLoadedEventHandler@Switcher@Experiences@ComposableSh_ea_18015FE80.c)
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
