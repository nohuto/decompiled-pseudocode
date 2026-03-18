/*
 * XREFs of CmpTransGetTransPtr @ 0x1406942D8
 * Callers:
 *     CmpTransIsTransActive @ 0x1401E3CFC (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
