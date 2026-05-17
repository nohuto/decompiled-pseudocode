/*
 * XREFs of sub_18005F008 @ 0x18005F008
 * Callers:
 *     sub_18005E4EC @ 0x18005E4EC (sub_18005E4EC.c)
 *     sub_18005EA08 @ 0x18005EA08 (sub_18005EA08.c)
 * Callees:
 *     sub_18005F060 @ 0x18005F060 (sub_18005F060.c)
 */

__int64 __fastcall sub_18005F008(__int64 a1, int a2, int a3)
{
  char v3; // r10
  int v4; // r9d
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a1 + 46);
  v6 = 0LL;
  v4 = ((v3 & 6u) < 4 ? 0x2000 : 536883200) | 0x40000;
  if ( (v3 & 8) == 0 )
    v4 = (v3 & 6u) < 4 ? 0x2000 : 536883200;
  sub_18005F060((unsigned int)&v6, a2, a3, v4, 4);
  return v6;
}
