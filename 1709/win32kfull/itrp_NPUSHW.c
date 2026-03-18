/*
 * XREFs of itrp_NPUSHW @ 0x1C02D0D40
 * Callers:
 *     <none>
 * Callees:
 *     itrp_PushSomeWords @ 0x1C02D1298 (itrp_PushSomeWords.c)
 */

__int64 __fastcall itrp_NPUSHW(unsigned __int8 *a1)
{
  __int64 result; // rax

  if ( (unsigned __int64)a1 >= qword_1C0327CF0 && (unsigned __int64)(a1 + 1) <= qword_1C0327CE8 && a1 + 1 >= a1 )
    return itrp_PushSomeWords(*a1);
  result = qword_1C0327CE8;
  dword_1C0327CE0 = 4381;
  return result;
}
