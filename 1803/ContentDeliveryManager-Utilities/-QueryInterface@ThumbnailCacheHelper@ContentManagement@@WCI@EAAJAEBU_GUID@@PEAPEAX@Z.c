/*
 * XREFs of ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024AF0
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
           (ContentManagement::ThumbnailCacheHelper *)(a1 - 40),
           a2,
           a3);
}
