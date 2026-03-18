/*
 * XREFs of itrp_SVTCA_1 @ 0x1C02DA470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SVTCA_1(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // rdx

  dword_1C032CA2C = 2;
  dword_1C032CA30 = 3;
  dword_1C032C9D8 = 0x4000;
  dword_1C032C9DC = 0x4000;
  v1 = *(_WORD *)(qword_1C032CA00 + 452);
  if ( (v1 & 1) == 0 || (~(_BYTE)v1 & 4) == 0 )
  {
    word_1C032CA74 = 0;
LABEL_7:
    v2 = 0LL;
    goto LABEL_8;
  }
  word_1C032CA74 = 1;
  if ( (*(_BYTE *)(qword_1C032CA00 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C032CA00 + 333) )
    goto LABEL_7;
  v2 = 8LL;
LABEL_8:
  *(_DWORD *)(qword_1C032CA00 + 128) = itrp_RoundFunctionId[v2 + *(unsigned __int16 *)(qword_1C032CA00 + 132)];
  word_1C032CA78 = -1;
  word_1C032CA76 = -1;
  dword_1C032CA34 = 3;
  word_1C032CA28 = 0x4000;
  word_1C032CA4C = word_1C032CA4C != 0;
  return a1;
}
