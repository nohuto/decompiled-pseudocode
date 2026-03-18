/*
 * XREFs of itrp_NPUSHB @ 0x1C02D6F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_NPUSHB(unsigned __int8 *a1)
{
  __int64 result; // rax

  result = qword_1C032CA58;
  if ( (unsigned __int64)a1 >= qword_1C032CA60 && (unsigned __int64)(a1 + 1) <= qword_1C032CA58 && a1 + 1 >= a1 )
    return itrp_PushSomeBytes(*a1);
  dword_1C032CA50 = 4381;
  return result;
}
