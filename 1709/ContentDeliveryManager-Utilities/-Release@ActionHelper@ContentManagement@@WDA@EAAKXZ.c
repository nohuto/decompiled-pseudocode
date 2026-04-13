/*
 * XREFs of ?Release@ActionHelper@ContentManagement@@WDA@EAAKXZ @ 0x180021290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::ActionHelper::Release(__int64 a1)
{
  return ContentManagement::ThumbnailCacheHelper::Release((ContentManagement::ThumbnailCacheHelper *)(a1 - 48));
}
