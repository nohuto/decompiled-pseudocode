/*
 * XREFs of itrp_WPV @ 0x1C02DB1C0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C02D09F8 (itrp_ComputeAndCheck_PF_Proj.c)
 */

__int64 itrp_WPV()
{
  __int64 v0; // rcx
  __int64 v1; // r10
  __int16 v2; // ax
  bool v3; // zf
  __int64 v4; // rdx
  __int64 result; // rax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) == *(_QWORD *)(qword_1C032CA00 + 432) )
  {
    v0 = qword_1C032C9E8;
    if ( (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) >= 2 )
    {
      qword_1C032C9E8 -= 4LL;
      HIWORD(dword_1C032C9D8) = *(_WORD *)(v0 - 4);
      qword_1C032C9E8 = v0 - 8;
      LOWORD(dword_1C032C9D8) = *(_WORD *)(v0 - 8);
      word_1C032CA78 = -1;
      word_1C032CA76 = -1;
      itrp_ComputeAndCheck_PF_Proj();
      dword_1C032CA2C = 1;
      dword_1C032CA30 = 1;
      v2 = *(_WORD *)(qword_1C032CA00 + 452);
      if ( (v2 & 1) == 0 )
        goto LABEL_13;
      if ( (~(_BYTE)v2 & 4) != 0 )
      {
        if ( HIWORD(dword_1C032C9D8) == 0x4000 )
        {
          v3 = (_WORD)dword_1C032C9D8 == 0;
          goto LABEL_9;
        }
      }
      else if ( (_WORD)dword_1C032C9D8 == 0x4000 )
      {
        v3 = HIWORD(dword_1C032C9D8) == 0;
LABEL_9:
        if ( !v3 )
          goto LABEL_10;
LABEL_13:
        word_1C032CA74 = 0;
        goto LABEL_14;
      }
LABEL_10:
      word_1C032CA74 = 1;
      if ( (*(_BYTE *)(qword_1C032CA00 + 120) & 4) != 0 || *(_BYTE *)(qword_1C032CA00 + 333) )
      {
        v4 = 8LL;
LABEL_15:
        *(_DWORD *)(qword_1C032CA00 + 128) = itrp_RoundFunctionId[v4 + *(unsigned __int16 *)(qword_1C032CA00 + 132)];
        dword_1C032CA34 = dword_1C032CA30;
        result = v1;
        word_1C032CA4C = 0;
        return result;
      }
LABEL_14:
      v4 = 0LL;
      goto LABEL_15;
    }
  }
  result = qword_1C032CA58;
  dword_1C032CA50 = 4368;
  return result;
}
