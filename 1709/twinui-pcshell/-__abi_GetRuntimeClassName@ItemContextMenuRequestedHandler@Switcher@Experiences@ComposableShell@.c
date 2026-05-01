/*
 * XREFs of ?__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x18015BDB8
 * Callers:
 *     ?__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x18015FCE0 (-__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@Com_ea_18015FCE0.c)
 *     ?__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x18015FE30 (-__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@Com_ea_18015FE30.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.ItemContextMenuRequestedHandler",
           0x54u,
           a2);
}
