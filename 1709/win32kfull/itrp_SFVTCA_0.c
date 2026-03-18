/*
 * XREFs of itrp_SFVTCA_0 @ 0x1C02D24C0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_Check_PF_Proj @ 0x1C02CA710 (itrp_Check_PF_Proj.c)
 */

__int64 itrp_SFVTCA_0()
{
  __int64 v0; // r8
  __int64 result; // rax
  __int16 v2; // r9

  word_1C0327CB8 = HIWORD(dword_1C0327C68);
  dword_1C0327C6C = 0x40000000;
  itrp_Check_PF_Proj();
  result = v0;
  dword_1C0327CBC = 1;
  word_1C0327CDC = v2;
  return result;
}
