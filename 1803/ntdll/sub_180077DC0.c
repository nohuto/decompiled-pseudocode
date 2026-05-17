/*
 * XREFs of sub_180077DC0 @ 0x180077DC0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 */

__int64 __fastcall sub_180077DC0(__int64 a1, const void *a2, void *a3, size_t a4, size_t *a5)
{
  memmove(a3, a2, a4);
  *a5 = a4;
  return 0LL;
}
