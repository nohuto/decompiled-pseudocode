/*
 * XREFs of CmpConstructName @ 0x1404E33CC
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400AF1C0 (CmpDoQueryKeyName.c)
 * Callees:
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpConstructName(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  CmpConstructNameWithStatus(a1, &v2);
  return v2;
}
