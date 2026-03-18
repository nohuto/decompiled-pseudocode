/*
 * XREFs of ?QueryInterface@CHolographicViewerContent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D66B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CHolographicViewerContent::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILFactory::QueryInterface((CMILFactory *)(a1 - 56), a2, a3);
}
