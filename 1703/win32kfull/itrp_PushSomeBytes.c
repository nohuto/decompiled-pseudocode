/*
 * XREFs of itrp_PushSomeBytes @ 0x1C02D74BC
 * Callers:
 *     itrp_NPUSHB @ 0x1C02D6F50 (itrp_NPUSHB.c)
 *     itrp_PUSHB @ 0x1C02D7330 (itrp_PUSHB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_PushSomeBytes(int a1, unsigned __int8 *a2)
{
  _DWORD *v2; // r9
  __int64 v3; // r10
  __int64 result; // rax
  unsigned __int64 v5; // r8
  int v6; // eax

  v2 = (_DWORD *)qword_1C032C9E8;
  v3 = *(_QWORD *)(qword_1C032CA00 + 424);
  if ( (qword_1C032CA00 ^ v3 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C032CA00 + 432)
    && a1 <= (unsigned __int64)((v3 - qword_1C032C9E8) >> 2) )
  {
    result = qword_1C032CA58;
    if ( (unsigned __int64)a2 < qword_1C032CA60
      || (v5 = (unsigned __int64)&a2[a1], v5 > qword_1C032CA58)
      || v5 < (unsigned __int64)a2 )
    {
      dword_1C032CA50 = 4381;
    }
    else
    {
      for ( ; a1; --a1 )
      {
        v6 = *a2++;
        *v2++ = v6;
      }
      qword_1C032C9E8 = (__int64)v2;
      return (__int64)a2;
    }
  }
  else
  {
    result = qword_1C032CA58;
    dword_1C032CA50 = 4369;
  }
  return result;
}
