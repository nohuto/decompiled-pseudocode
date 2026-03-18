/*
 * XREFs of CmpTransGetTransPtr @ 0x140669568
 * Callers:
 *     CmpTransIsTransActive @ 0x1401DF9BC (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
