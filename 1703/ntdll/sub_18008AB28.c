/*
 * XREFs of sub_18008AB28 @ 0x18008AB28
 * Callers:
 *     sub_180069760 @ 0x180069760 (sub_180069760.c)
 *     sub_180069F00 @ 0x180069F00 (sub_180069F00.c)
 *     sub_18006AAE8 @ 0x18006AAE8 (sub_18006AAE8.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18008AB28(unsigned __int16 a1)
{
  __int64 v1; // rdx
  bool result; // al

  result = a1 >= 0x80u
        || (unsigned __int16)(a1 - 45) <= 0x2Du && (v1 = 0x3FFFFFF01FFBLL, _bittest64(&v1, (unsigned __int16)(a1 - 45)))
        || (unsigned __int16)(a1 - 97) <= 0x19u;
  return result;
}
