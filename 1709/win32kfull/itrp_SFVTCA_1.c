/*
 * XREFs of itrp_SFVTCA_1 @ 0x1C02D2510
 * Callers:
 *     <none>
 * Callees:
 *     itrp_Check_PF_Proj @ 0x1C02CA710 (itrp_Check_PF_Proj.c)
 */

__int64 itrp_SFVTCA_1()
{
  __int64 v0; // r8
  __int64 result; // rax
  __int16 v2; // r9

  word_1C0327CB8 = dword_1C0327C68;
  dword_1C0327C6C = 0x4000;
  itrp_Check_PF_Proj();
  result = v0;
  dword_1C0327CBC = 1;
  word_1C0327CDC = v2;
  return result;
}
