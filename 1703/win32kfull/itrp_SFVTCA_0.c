/*
 * XREFs of itrp_SFVTCA_0 @ 0x1C02D87C0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_Check_PF_Proj @ 0x1C02D09C0 (itrp_Check_PF_Proj.c)
 */

__int64 itrp_SFVTCA_0()
{
  __int64 v0; // r8
  __int64 result; // rax
  __int16 v2; // r9

  word_1C032CA28 = HIWORD(dword_1C032C9D8);
  dword_1C032C9DC = 0x40000000;
  itrp_Check_PF_Proj();
  result = v0;
  dword_1C032CA2C = 1;
  word_1C032CA4C = v2;
  return result;
}
