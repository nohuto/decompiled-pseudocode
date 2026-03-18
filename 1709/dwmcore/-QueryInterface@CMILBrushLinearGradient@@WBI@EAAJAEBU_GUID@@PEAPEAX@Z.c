/*
 * XREFs of ?QueryInterface@CMILBrushLinearGradient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C7260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CMILBrushLinearGradient::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 24), a2, a3);
}
