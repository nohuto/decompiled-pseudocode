/*
 * XREFs of sub_1800F7674 @ 0x1800F7674
 * Callers:
 *     sub_180002B34 @ 0x180002B34 (sub_180002B34.c)
 * Callees:
 *     sub_1800F770C @ 0x1800F770C (sub_1800F770C.c)
 */

char __fastcall sub_1800F7674(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  int v5; // r8d
  char v6; // cl

  if ( (unsigned int)(a1 - 4352) <= 0x12 && (unsigned int)(a2 - 4449) <= 0x14 )
    return 1;
  v4 = sub_1800F770C(a1, a2, (unsigned int)a2, a4);
  v6 = 0;
  if ( v4 )
  {
    if ( (unsigned int)(v5 - 4520) <= 0x1A )
      return 1;
  }
  return v6;
}
