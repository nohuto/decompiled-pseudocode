/*
 * XREFs of sub_180058A20 @ 0x180058A20
 * Callers:
 *     sub_180007B14 @ 0x180007B14 (sub_180007B14.c)
 *     sub_180058688 @ 0x180058688 (sub_180058688.c)
 *     sub_18005879C @ 0x18005879C (sub_18005879C.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180058A20(__int64 a1, unsigned int a2)
{
  char v2; // r8

  v2 = 1;
  if ( (*(_BYTE *)(a1 + 72) & 2) != 0 )
    return _bittest(*(const signed __int32 **)(a1 + 24), a2 >> 9) != 0;
  return v2;
}
