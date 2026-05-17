/*
 * XREFs of sub_1800500E8 @ 0x1800500E8
 * Callers:
 *     sub_180050068 @ 0x180050068 (sub_180050068.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800500E8(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
