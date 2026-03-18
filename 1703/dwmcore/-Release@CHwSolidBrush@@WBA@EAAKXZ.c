/*
 * XREFs of ?Release@CHwSolidBrush@@WBA@EAAKXZ @ 0x1800D65F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwSolidBrush::Release(__int64 a1, struct COcclusionContext *a2, const struct D2D_SIZE_F *a3)
{
  return CGenericInk::AddOcclusionInformation((CGenericInk *)(a1 - 16), a2, a3);
}
