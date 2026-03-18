/*
 * XREFs of VmpConvertPortionVpnRangeToGpnRange @ 0x1402ABA88
 * Callers:
 *     VmpFillGpnRanges @ 0x1402ABDD0 (VmpFillGpnRanges.c)
 *     VmpFlushTbVaRange @ 0x1402ABFDC (VmpFlushTbVaRange.c)
 *     VmpQueryAccessedState @ 0x1402ACA5C (VmpQueryAccessedState.c)
 * Callees:
 *     VmpProcessMemoryRangeCompareVpn @ 0x1402AC8A4 (VmpProcessMemoryRangeCompareVpn.c)
 */

unsigned __int64 __fastcall VmpConvertPortionVpnRangeToGpnRange(
        __int64 a1,
        unsigned __int64 *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r10
  _QWORD *v6; // rbp
  unsigned __int64 v7; // r15
  __int64 v9; // rax
  unsigned __int64 *v10; // rcx
  unsigned __int64 v11; // rsi
  int v12; // r14d
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  _QWORD *v16; // rsi
  int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 *v23; // [rsp+68h] [rbp+10h]
  unsigned __int64 v24; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v25; // [rsp+78h] [rbp+20h]

  v25 = a4;
  v23 = a2;
  v4 = 0LL;
  v5 = *a2;
  v6 = (_QWORD *)*a4;
  v7 = *a2 + a2[1] - 1;
  v24 = *a2;
  a3[1] = 0LL;
  a2[1] = 0LL;
  if ( !v6 || v5 < v6[8] || v5 > v6[9] )
  {
    v9 = *(_QWORD *)(a1 + 32);
    v10 = (unsigned __int64 *)(a1 + 24);
    v11 = *v10;
    if ( (v9 & 1) != 0 )
    {
      if ( v11 )
        v11 ^= (unsigned __int64)v10;
      else
        v11 = 0LL;
    }
    v6 = 0LL;
    v12 = v9 & 1;
    if ( !v11 )
      goto LABEL_44;
    while ( 1 )
    {
      v13 = VmpProcessMemoryRangeCompareVpn(&v24, v11);
      if ( !v13 )
        break;
      if ( v13 >= 0 )
      {
        v14 = *(_QWORD *)(v11 + 8);
      }
      else
      {
        v14 = *(_QWORD *)v11;
        v6 = (_QWORD *)v11;
      }
      if ( v12 && v14 )
        v11 ^= v14;
      else
        v11 = v14;
      if ( !v11 )
        goto LABEL_35;
    }
    v15 = *(_QWORD *)v11;
    v6 = (_QWORD *)v11;
    if ( v12 && v15 )
      v15 ^= v11;
    v16 = 0LL;
    if ( v15 )
    {
      while ( 1 )
      {
        v17 = VmpProcessMemoryRangeCompareVpn(&v24, v15);
        if ( v17 >= 0 )
        {
          if ( v17 > 0 )
          {
            v18 = *(_QWORD *)(v15 + 8);
            goto LABEL_28;
          }
          v16 = (_QWORD *)v15;
        }
        v18 = *(_QWORD *)v15;
LABEL_28:
        if ( v12 && v18 )
          v15 ^= v18;
        else
          v15 = v18;
        if ( !v15 )
        {
          if ( v16 )
            v6 = v16;
          break;
        }
      }
    }
LABEL_35:
    v5 = v24;
    a4 = v25;
    if ( !v6 )
    {
LABEL_44:
      v6 = 0LL;
      goto LABEL_45;
    }
    a2 = v23;
  }
  v19 = v6[8];
  if ( v5 < v19 )
  {
    if ( v7 < v19 )
      goto LABEL_45;
    v5 = v6[8];
    v24 = v5;
    v19 = v6[8];
  }
  *a3 = v5 + v6[6] - v19;
  v20 = v6[9];
  if ( v7 <= v20 )
  {
    v20 = v7;
    v21 = v7 + 1;
  }
  else
  {
    v21 = v20 + 1;
    v4 = v7 - v20;
  }
  *a2 = v21;
  a3[1] = v20;
  a2[1] = v4;
  a3[1] += 1 - v5;
LABEL_45:
  result = v5;
  *a4 = v6;
  return result;
}
