/*
 * XREFs of ?QueryInterface@CRenderTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C5F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 72), a2, a3);
}
