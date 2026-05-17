/*
 * XREFs of sub_180001560 @ 0x180001560
 * Callers:
 *     sub_1800014DC @ 0x1800014DC (sub_1800014DC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180001560(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
