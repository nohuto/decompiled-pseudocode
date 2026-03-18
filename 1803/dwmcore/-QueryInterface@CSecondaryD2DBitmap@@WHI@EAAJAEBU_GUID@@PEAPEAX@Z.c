/*
 * XREFs of ?QueryInterface@CSecondaryD2DBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondaryD2DBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CMILCOMBase *)(a1 - 120), a2, a3);
}
