/*
 * XREFs of ?Release@ContextualSuggestionsManager@ContentManagement@@WDI@EAAKXZ @ 0x180021390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::ContextualSuggestionsManager::Release(__int64 a1)
{
  return ContentManagement::ThumbnailCacheHelper::Release((ContentManagement::ThumbnailCacheHelper *)(a1 - 56));
}
