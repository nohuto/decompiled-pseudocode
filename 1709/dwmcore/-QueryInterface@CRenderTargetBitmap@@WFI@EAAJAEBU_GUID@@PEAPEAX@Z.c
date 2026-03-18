/*
 * XREFs of ?QueryInterface@CRenderTargetBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C7210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CRenderTargetBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 88), a2, a3);
}
