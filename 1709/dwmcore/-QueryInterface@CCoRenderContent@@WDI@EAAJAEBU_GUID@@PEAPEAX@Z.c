/*
 * XREFs of ?QueryInterface@CCoRenderContent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C6ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CCoRenderContent::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 56), a2, a3);
}
