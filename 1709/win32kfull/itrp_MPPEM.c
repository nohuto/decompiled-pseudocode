/*
 * XREFs of itrp_MPPEM @ 0x1C02D0490
 * Callers:
 *     <none>
 * Callees:
 *     FixMul @ 0x1C02B6FFC (FixMul.c)
 *     itrp_GetCVTScale @ 0x1C02CC400 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_MPPEM(__int64 a1)
{
  unsigned __int16 fixed; // bx
  int CVTScale; // eax
  __int64 v4; // r8
  __int64 result; // rax

  fixed = *(_WORD *)(qword_1C0327C90 + 24);
  if ( !*(_BYTE *)(qword_1C0327C90 + 340) )
  {
    CVTScale = itrp_GetCVTScale();
    fixed = FixMul(fixed, CVTScale);
  }
  v4 = *(_QWORD *)(qword_1C0327C90 + 424);
  if ( (qword_1C0327C90 ^ v4 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (v4 - qword_1C0327C78) >> 2 )
  {
    *(_DWORD *)qword_1C0327C78 = fixed;
    result = a1;
    qword_1C0327C78 += 4LL;
  }
  else
  {
    result = qword_1C0327CE8;
    dword_1C0327CE0 = 4369;
  }
  return result;
}
