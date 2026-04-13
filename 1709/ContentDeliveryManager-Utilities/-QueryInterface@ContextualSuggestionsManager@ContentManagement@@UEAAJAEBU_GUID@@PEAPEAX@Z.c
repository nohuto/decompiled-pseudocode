/*
 * XREFs of ?QueryInterface@ContextualSuggestionsManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000ED70
 * Callers:
 *     ?QueryInterface@ContextualSuggestionsManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021600 (-QueryInterface@ContextualSuggestionsManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContextualSuggestionsManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021A30 (-QueryInterface@ContextualSuggestionsManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContextualSuggestionsManager@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021D70 (-QueryInterface@ContextualSuggestionsManager@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContextualSuggestionsManager::QueryInterface(
        ContentManagement::ContextualSuggestionsManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContextualSuggestionsManager>::QueryInterface(
           this,
           a2,
           a3);
}
