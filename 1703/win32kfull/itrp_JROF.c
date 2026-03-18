/*
 * XREFs of itrp_JROF @ 0x1C02D46C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_JROF(unsigned __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  _DWORD *v4; // rcx
  __int64 result; // rax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (v2 = qword_1C032C9E8, (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) < 2) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  qword_1C032C9E8 -= 4LL;
  v3 = *(_DWORD *)(v2 - 4);
  v4 = (_DWORD *)(v2 - 8);
  qword_1C032C9E8 = (__int64)v4;
  if ( v3 )
    return a1;
  a1 += *v4 - 1;
  if ( !--dword_1C032CA68 )
  {
    dword_1C032CA50 = 4359;
    return qword_1C032CA58;
  }
  result = qword_1C032CA58;
  if ( a1 < qword_1C032CA60 )
  {
    dword_1C032CA50 = 4363;
    return result;
  }
  if ( a1 <= qword_1C032CA58 )
    return a1;
  return result;
}
