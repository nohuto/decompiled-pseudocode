/*
 * XREFs of itrp_PUSHB @ 0x1C02D1080
 * Callers:
 *     <none>
 * Callees:
 *     itrp_PushSomeBytes @ 0x1C02D11F4 (itrp_PushSomeBytes.c)
 */

__int64 __fastcall itrp_PUSHB(__int64 a1, int a2)
{
  return itrp_PushSomeBytes((unsigned int)(a2 - 175));
}
