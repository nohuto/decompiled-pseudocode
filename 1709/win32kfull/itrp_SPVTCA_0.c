/*
 * XREFs of itrp_SPVTCA_0 @ 0x1C02D3870
 * Callers:
 *     <none>
 * Callees:
 *     itrp_Check_PF_Proj @ 0x1C02CA710 (itrp_Check_PF_Proj.c)
 */

__int64 itrp_SPVTCA_0()
{
  __int16 v0; // ax
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 result; // rax
  int v4; // r10d
  __int16 v5; // r9

  dword_1C0327C68 = 0x40000000;
  dword_1C0327CC0 = 4;
  v0 = *(_WORD *)(qword_1C0327C90 + 452);
  if ( (v0 & 1) == 0 || (v0 & 4) == 0 )
  {
    word_1C0327D04 = 0;
LABEL_7:
    v1 = 0LL;
    goto LABEL_8;
  }
  word_1C0327D04 = 1;
  if ( (*(_BYTE *)(qword_1C0327C90 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C0327C90 + 333) )
    goto LABEL_7;
  v1 = 8LL;
LABEL_8:
  *(_DWORD *)(qword_1C0327C90 + 128) = itrp_RoundFunctionId[v1 + *(unsigned __int16 *)(qword_1C0327C90 + 132)];
  word_1C0327D08 = -1;
  word_1C0327D06 = -1;
  word_1C0327CB8 = HIWORD(dword_1C0327C6C);
  itrp_Check_PF_Proj();
  dword_1C0327CC4 = dword_1C0327CC0;
  result = v2;
  dword_1C0327CBC = v4;
  word_1C0327CDC = v5;
  return result;
}
