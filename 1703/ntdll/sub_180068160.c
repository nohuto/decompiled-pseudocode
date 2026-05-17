/*
 * XREFs of sub_180068160 @ 0x180068160
 * Callers:
 *     sub_180067F8C @ 0x180067F8C (sub_180067F8C.c)
 *     sub_180068000 @ 0x180068000 (sub_180068000.c)
 * Callees:
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180068160(__int64 a1, const void *a2, void *a3, size_t a4, size_t *a5)
{
  memmove(a3, a2, a4);
  *a5 = a4;
  return 0LL;
}
