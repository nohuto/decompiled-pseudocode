/*
 * XREFs of itrp_AND @ 0x1C02D0370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_AND(__int64 a1)
{
  _DWORD *v2; // rcx
  BOOL v3; // eax
  __int64 result; // rax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) >= 2 )
  {
    v2 = (_DWORD *)(qword_1C032C9E8 - 4);
    v3 = 0;
    qword_1C032C9E8 = (__int64)v2;
    if ( *(v2 - 1) )
      v3 = *v2 != 0;
    *(v2 - 1) = v3;
    return a1;
  }
  else
  {
    result = qword_1C032CA58;
    dword_1C032CA50 = 4368;
  }
  return result;
}
