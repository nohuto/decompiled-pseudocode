/*
 * XREFs of sub_1800FC910 @ 0x1800FC910
 * Callers:
 *     sub_1800FCB7C @ 0x1800FCB7C (sub_1800FCB7C.c)
 * Callees:
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 */

void *__fastcall sub_1800FC910(size_t a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = xmmword_18015A790;
  return sub_18005E238(a1, a1, 0, &v2);
}
