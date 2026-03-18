/*
 * XREFs of itrp_PUSHW @ 0x1C02D1130
 * Callers:
 *     <none>
 * Callees:
 *     itrp_PushSomeWords @ 0x1C02D1298 (itrp_PushSomeWords.c)
 */

__int64 __fastcall itrp_PUSHW(__int64 a1, int a2)
{
  return itrp_PushSomeWords((unsigned int)(a2 - 183));
}
