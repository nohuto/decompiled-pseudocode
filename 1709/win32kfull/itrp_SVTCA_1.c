/*
 * XREFs of itrp_SVTCA_1 @ 0x1C02D4130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SVTCA_1(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // rdx

  dword_1C0327CBC = 2;
  dword_1C0327CC0 = 3;
  dword_1C0327C68 = 0x4000;
  dword_1C0327C6C = 0x4000;
  v1 = *(_WORD *)(qword_1C0327C90 + 452);
  if ( (v1 & 1) == 0 || (v1 & 4) != 0 )
  {
    word_1C0327D04 = 0;
LABEL_7:
    v2 = 0LL;
    goto LABEL_8;
  }
  word_1C0327D04 = 1;
  if ( (*(_BYTE *)(qword_1C0327C90 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C0327C90 + 333) )
    goto LABEL_7;
  v2 = 8LL;
LABEL_8:
  *(_DWORD *)(qword_1C0327C90 + 128) = itrp_RoundFunctionId[v2 + *(unsigned __int16 *)(qword_1C0327C90 + 132)];
  word_1C0327D08 = -1;
  word_1C0327D06 = -1;
  dword_1C0327CC4 = 3;
  word_1C0327CB8 = 0x4000;
  word_1C0327CDC = word_1C0327CDC != 0;
  return a1;
}
