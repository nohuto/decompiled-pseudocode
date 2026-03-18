/*
 * XREFs of itrp_MPPEM @ 0x1C02D66E0
 * Callers:
 *     <none>
 * Callees:
 *     FixMul @ 0x1C02BD1FC (FixMul.c)
 *     itrp_GetCVTScale @ 0x1C02D2650 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_MPPEM(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int16 fixed; // bx
  int CVTScale; // eax
  __int64 v5; // rdx
  __int64 result; // rax

  v1 = qword_1C032CA00;
  fixed = *(_WORD *)(qword_1C032CA00 + 24);
  if ( !*(_BYTE *)(qword_1C032CA00 + 340) )
  {
    CVTScale = itrp_GetCVTScale();
    fixed = FixMul(fixed, CVTScale);
    v1 = qword_1C032CA00;
  }
  v5 = *(_QWORD *)(v1 + 424);
  if ( (v1 ^ v5 ^ *(_QWORD *)v1 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(v1 + 432) && (v5 - qword_1C032C9E8) >> 2 )
  {
    *(_DWORD *)qword_1C032C9E8 = fixed;
    result = a1;
    qword_1C032C9E8 += 4LL;
  }
  else
  {
    result = qword_1C032CA58;
    dword_1C032CA50 = 4369;
  }
  return result;
}
