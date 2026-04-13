/*
 * XREFs of ?GetRuntimeClassName@ContextualSuggestionsManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000ED40
 * Callers:
 *     ?GetRuntimeClassName@ContextualSuggestionsManager@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180021D60 (-GetRuntimeClassName@ContextualSuggestionsManager@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ContextualSuggestionsManager::GetRuntimeClassName(
        ContentManagement::ContextualSuggestionsManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ContextualSuggestionsManager", 0x2Eu, a2);
}
