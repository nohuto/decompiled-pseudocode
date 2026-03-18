/*
 * XREFs of CmpTransGetTransPtr @ 0x1406F74D4
 * Callers:
 *     CmpTransIsTransActive @ 0x14022215C (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
