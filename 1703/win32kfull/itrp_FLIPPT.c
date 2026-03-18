/*
 * XREFs of itrp_FLIPPT @ 0x1C02D1D20
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_FLIPPT(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdi
  int *v4; // r14
  int v5; // esi
  __int64 v6; // r12
  _WORD *v7; // r9
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  __int64 v10; // rbx
  unsigned __int16 v11; // ax
  int v12; // r15d
  int v13; // ebp
  __int16 v14; // ax
  __int64 result; // rax

  v1 = qword_1C032CA00;
  v2 = LocalGS;
  v4 = (int *)qword_1C032C9E8;
  v5 = dword_1C032CA20;
  v6 = *(_QWORD *)(LocalGS + 48);
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) == *(_QWORD *)(qword_1C032CA00 + 432)
    && dword_1C032CA20 + 1LL <= (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) )
  {
    if ( dword_1C032CA20 >= 0 )
    {
      while ( 1 )
      {
        v7 = *(_WORD **)(v1 + 344);
        --v4;
        v8 = v7[4];
        v9 = v7[6];
        v10 = *v4;
        v11 = v9;
        if ( v8 > v9 )
          v11 = v7[4];
        if ( v11 <= 1u )
        {
          v12 = 1;
        }
        else
        {
          if ( v8 > v9 )
            v9 = v7[4];
          v12 = v9;
        }
        if ( qword_1C032C9F8 == v2 )
        {
          if ( (int)v10 >= (unsigned __int16)v7[8] || (int)v10 < 0 )
            goto LABEL_24;
          v13 = 0;
        }
        else
        {
          if ( (int)v10 >= *(_DWORD *)(v1 + 440) || (int)v10 < 0 )
          {
LABEL_24:
            dword_1C032CA50 = 4370;
            return qword_1C032CA58;
          }
          v13 = 4;
        }
        if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2) )
          goto LABEL_24;
        v14 = *(_WORD *)(v2 + 80);
        if ( v14 >= 1 && v14 <= v12 && (int)v10 >= *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v14 - 1)) + v13 + 1 )
          goto LABEL_24;
        *(_BYTE *)(v10 + v6) ^= 1u;
        if ( --v5 < 0 )
          break;
        v1 = qword_1C032CA00;
        v2 = LocalGS;
      }
    }
    dword_1C032CA20 = 0;
    result = a1;
    qword_1C032C9E8 = (__int64)v4;
  }
  else
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  return result;
}
