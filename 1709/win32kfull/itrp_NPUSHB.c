/*
 * XREFs of itrp_NPUSHB @ 0x1C02D0CF0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_PushSomeBytes @ 0x1C02D11F4 (itrp_PushSomeBytes.c)
 */

__int64 __fastcall itrp_NPUSHB(unsigned __int8 *a1)
{
  __int64 result; // rax

  if ( (unsigned __int64)a1 >= qword_1C0327CF0 && (unsigned __int64)(a1 + 1) <= qword_1C0327CE8 && a1 + 1 >= a1 )
    return itrp_PushSomeBytes(*a1);
  result = qword_1C0327CE8;
  dword_1C0327CE0 = 4381;
  return result;
}
