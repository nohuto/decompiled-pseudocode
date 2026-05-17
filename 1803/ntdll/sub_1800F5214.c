/*
 * XREFs of sub_1800F5214 @ 0x1800F5214
 * Callers:
 *     sub_180001F34 @ 0x180001F34 (sub_180001F34.c)
 * Callees:
 *     sub_1800F52AC @ 0x1800F52AC (sub_1800F52AC.c)
 */

char __fastcall sub_1800F5214(__int64 a1, int a2)
{
  char v2; // al
  int v3; // r8d
  char v4; // cl

  if ( (unsigned int)(a1 - 4352) <= 0x12 && (unsigned int)(a2 - 4449) <= 0x14 )
    return 1;
  v2 = sub_1800F52AC(a1);
  v4 = 0;
  if ( v2 )
  {
    if ( (unsigned int)(v3 - 4520) <= 0x1A )
      return 1;
  }
  return v4;
}
