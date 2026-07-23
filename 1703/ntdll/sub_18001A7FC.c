/*
 * XREFs of sub_18001A7FC @ 0x18001A7FC
 * Callers:
 *     sub_18001A58C @ 0x18001A58C (sub_18001A58C.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 * Callees:
 *     sub_18001A44C @ 0x18001A44C (sub_18001A44C.c)
 */

void __fastcall sub_18001A7FC(__int64 a1)
{
  int v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( *(int *)(a1 + 56) < 6 )
  {
    v1 = 0;
    v2 = 1LL;
    sub_18001A44C(a1, &v1, &v2);
  }
}
