/*
 * XREFs of CcAdjustThrottle @ 0x14002AA90
 * Callers:
 *     CcLazyWriteScan @ 0x1400AEDEC (CcLazyWriteScan.c)
 * Callees:
 *     CcAdjustCurrentThresholdWrtTop @ 0x14002AC34 (CcAdjustCurrentThresholdWrtTop.c)
 */

unsigned __int64 __fastcall CcAdjustThrottle(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned int v6; // r11d
  unsigned __int64 v7; // r10
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r15
  unsigned int v14; // r8d
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  int v17; // edx
  unsigned __int64 result; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1[98];
  v6 = *(_DWORD *)(a2 + 16) - a4;
  v7 = *(_QWORD *)a3;
  v9 = *(unsigned int *)(a3 + 24);
  v10 = *(_QWORD *)(a3 + 8);
  v11 = *(_QWORD *)(a3 + 16);
  v12 = *(_QWORD *)a2;
  v13 = *(_QWORD *)(a2 + 8);
  v22 = *(_QWORD *)a3;
  if ( v5 )
  {
    if ( v5 > 0xFFFFFFFF || v6 <= v5 )
      v6 = 0;
    else
      v6 -= v5;
    a1[98] = 0LL;
  }
  v14 = v6;
  if ( v6 < 0x200 )
    v14 = 512;
  v15 = v14 >> 2;
  if ( (unsigned int)v15 > v7 )
    v15 = (unsigned int)v7;
  if ( v12 >= v9 + ((3 * (v7 - v9)) >> 2) )
  {
    v7 -= (unsigned int)v15;
    if ( v7 <= v11 )
      v7 = v11;
  }
  else
  {
    if ( v10 < v7 )
    {
      LOBYTE(a4) = v6 < 0x200;
      CcAdjustCurrentThresholdWrtTop(&v22, v10, v15, a4);
      v7 = v22;
      goto LABEL_9;
    }
    if ( v12 < v7 - (unsigned int)v15 && v13 <= v7 )
    {
      v20 = v10 - v7;
      v21 = (v7 - v12) >> 3;
      if ( v21 <= (unsigned int)v15 )
      {
        if ( v20 <= (unsigned int)v15 )
          goto LABEL_21;
        v7 += (unsigned int)v15;
      }
      else
      {
        if ( v20 <= v21 )
        {
LABEL_21:
          v7 = v10;
          goto LABEL_9;
        }
        v7 += v21;
      }
    }
  }
LABEL_9:
  *(_QWORD *)(a3 + 8) = v10;
  *(_QWORD *)(a3 + 16) = v11;
  v16 = (v7 >> 1) + (v7 >> 2);
  *(_QWORD *)a3 = v7;
  if ( v16 > 0xFFFFFFFF )
    LODWORD(v16) = -1;
  *(_DWORD *)(a3 + 24) = v16;
  v17 = (unsigned __int8)dword_1403E3134;
  result = (a1[96] + a1[97]) >> 1;
  *(_QWORD *)(a3 + 8) = result;
  v19 = result >> 2;
  if ( result >> 2 < 0x8000 )
    v19 = 0x8000LL;
  *(_QWORD *)(a3 + 16) = v19;
  if ( result < v19 || !v17 )
    *(_QWORD *)(a3 + 8) = v19;
  return result;
}
