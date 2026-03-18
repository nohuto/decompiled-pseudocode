/*
 * XREFs of ?AddRef@CHwSolidBrush@@WBA@EAAKXZ @ 0x1800C6E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwSolidBrush::AddRef(__int64 a1)
{
  return CNaturalAnimation::GetMaxStackCount((CNaturalAnimation *)(a1 - 16));
}
