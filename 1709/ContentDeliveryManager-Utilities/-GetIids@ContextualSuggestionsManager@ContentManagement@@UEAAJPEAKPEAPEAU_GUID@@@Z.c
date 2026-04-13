/*
 * XREFs of ?GetIids@ContextualSuggestionsManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000ED60
 * Callers:
 *     ?GetIids@ContextualSuggestionsManager@ContentManagement@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800214E0 (-GetIids@ContextualSuggestionsManager@ContentManagement@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContextualSuggestionsManager::GetIids(
        ContentManagement::ContextualSuggestionsManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContextualSuggestionsManager>::GetIids(
           this,
           a2,
           a3);
}
