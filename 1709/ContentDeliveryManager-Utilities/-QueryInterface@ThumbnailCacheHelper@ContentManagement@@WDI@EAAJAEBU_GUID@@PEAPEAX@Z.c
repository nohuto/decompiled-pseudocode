/*
 * XREFs of ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800211E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ThumbnailCacheHelper::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::ThumbnailCacheHelper::QueryInterface(
           (ContentManagement::ThumbnailCacheHelper *)(a1 - 56),
           a2,
           a3);
}
