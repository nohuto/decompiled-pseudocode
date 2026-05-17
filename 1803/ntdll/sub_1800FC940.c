/*
 * XREFs of sub_1800FC940 @ 0x1800FC940
 * Callers:
 *     sub_1800FCB7C @ 0x1800FCB7C (sub_1800FCB7C.c)
 * Callees:
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 */

__int64 __fastcall sub_1800FC940(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = xmmword_18015A790;
  return sub_18005F840(a1, &v2);
}
