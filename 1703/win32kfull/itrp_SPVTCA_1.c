/*
 * XREFs of itrp_SPVTCA_1 @ 0x1C02D9C70
 * Callers:
 *     <none>
 * Callees:
 *     itrp_Check_PF_Proj @ 0x1C02D09C0 (itrp_Check_PF_Proj.c)
 */

__int64 itrp_SPVTCA_1()
{
  __int16 v0; // ax
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 result; // rax
  int v4; // r10d
  __int16 v5; // r9

  dword_1C032CA30 = 3;
  dword_1C032C9D8 = 0x4000;
  v0 = *(_WORD *)(qword_1C032CA00 + 452);
  if ( (v0 & 1) == 0 || (~(_BYTE)v0 & 4) == 0 )
  {
    word_1C032CA74 = 0;
LABEL_7:
    v1 = 0LL;
    goto LABEL_8;
  }
  word_1C032CA74 = 1;
  if ( (*(_BYTE *)(qword_1C032CA00 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C032CA00 + 333) )
    goto LABEL_7;
  v1 = 8LL;
LABEL_8:
  *(_DWORD *)(qword_1C032CA00 + 128) = itrp_RoundFunctionId[v1 + *(unsigned __int16 *)(qword_1C032CA00 + 132)];
  word_1C032CA78 = -1;
  word_1C032CA76 = -1;
  word_1C032CA28 = dword_1C032C9DC;
  itrp_Check_PF_Proj();
  dword_1C032CA34 = dword_1C032CA30;
  result = v2;
  dword_1C032CA2C = v4;
  word_1C032CA4C = v5;
  return result;
}
