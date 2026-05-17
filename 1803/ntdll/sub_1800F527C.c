/*
 * XREFs of sub_1800F527C @ 0x1800F527C
 * Callers:
 *     sub_180069670 @ 0x180069670 (sub_180069670.c)
 * Callees:
 *     sub_1800F52AC @ 0x1800F52AC (sub_1800F52AC.c)
 */

__int64 __fastcall sub_1800F527C(__int64 a1, int a2)
{
  int v2; // r8d
  int v3; // r9d

  if ( (unsigned int)(a2 - 4520) <= 0x1A && (unsigned __int8)sub_1800F52AC(a1) )
    return (unsigned int)(v3 + v2);
  else
    return 0LL;
}
