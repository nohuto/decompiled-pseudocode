/*
 * XREFs of itrp_MAX @ 0x1C02D4E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_MAX(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // ecx
  __int64 result; // rax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (v2 = qword_1C032C9E8, (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) >= 2) )
  {
    v3 = qword_1C032C9E8 - 4;
    qword_1C032C9E8 = v3;
    v4 = *(_DWORD *)(v2 - 4);
    if ( *(_DWORD *)(v3 - 4) < v4 )
      *(_DWORD *)(v3 - 4) = v4;
    return a1;
  }
  else
  {
    result = qword_1C032CA58;
    dword_1C032CA50 = 4368;
  }
  return result;
}
