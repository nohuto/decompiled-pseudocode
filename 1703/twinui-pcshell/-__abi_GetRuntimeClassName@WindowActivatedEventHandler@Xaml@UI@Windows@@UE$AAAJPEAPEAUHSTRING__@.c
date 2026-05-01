/*
 * XREFs of ?__abi_GetRuntimeClassName@WindowActivatedEventHandler@Xaml@UI@Windows@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x18012F058
 * Callers:
 *     ?__abi_GetRuntimeClassName@WindowActivatedEventHandler@Xaml@UI@Windows@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x180131AB0 (-__abi_GetRuntimeClassName@WindowActivatedEventHandler@Xaml@UI@Windows@@WBA@E$AAAJPEAPEAUHSTRING.c)
 *     ?__abi_GetRuntimeClassName@WindowActivatedEventHandler@Xaml@UI@Windows@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x180131C40 (-__abi_GetRuntimeClassName@WindowActivatedEventHandler@Xaml@UI@Windows@@W7E$AAAJPEAPEAUHSTRING__.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Xaml::WindowActivatedEventHandler::__abi_GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  return __winRT::__windowsCreateString(L"Windows.UI.Xaml.WindowActivatedEventHandler", 0x2Bu, a2);
}
