/*
 * XREFs of ?QueryInterface@CMILBrushLinearGradient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CMILBrushLinearGradient::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILFactory::QueryInterface((CMILFactory *)(a1 - 24), a2, a3);
}
