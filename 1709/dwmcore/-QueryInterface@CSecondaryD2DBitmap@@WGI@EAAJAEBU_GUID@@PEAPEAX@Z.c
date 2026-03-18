/*
 * XREFs of ?QueryInterface@CSecondaryD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C6500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CSecondaryD2DBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 104), a2, a3);
}
