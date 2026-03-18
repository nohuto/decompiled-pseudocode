/*
 * XREFs of VmpConvertPortionVpnRangeToGpnRange @ 0x1402789E0
 * Callers:
 *     VmpFillGpnRanges @ 0x140278CE4 (VmpFillGpnRanges.c)
 *     VmpFlushTbVaRange @ 0x140278EF0 (VmpFlushTbVaRange.c)
 *     VmpQueryAccessedState @ 0x140279824 (VmpQueryAccessedState.c)
 * Callees:
 *     VmpProcessMemoryRangeCompareVpn @ 0x1402796B8 (VmpProcessMemoryRangeCompareVpn.c)
 */

unsigned __int64 __fastcall VmpConvertPortionVpnRangeToGpnRange(
        __int64 a1,
        unsigned __int64 *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  unsigned __int64 v5; // r10
  _QWORD *v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v9; // rdi
  int v10; // ebp
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rdi
  int v15; // eax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v21; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v22; // [rsp+78h] [rbp+20h]

  v22 = a4;
  v5 = *a2;
  v6 = (_QWORD *)*a4;
  v7 = *a2 + a2[1] - 1;
  a3[1] = 0LL;
  a2[1] = 0LL;
  v21 = v5;
  if ( !v6 || v5 < v6[8] || v5 > v6[9] )
  {
    v6 = 0LL;
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(_BYTE *)(a1 + 32) & 1;
    if ( !v9 )
      goto LABEL_39;
    while ( 1 )
    {
      v11 = VmpProcessMemoryRangeCompareVpn(&v21, v9);
      if ( !v11 )
        break;
      if ( v11 >= 0 )
      {
        v12 = *(_QWORD *)(v9 + 8);
      }
      else
      {
        v12 = *(_QWORD *)v9;
        v6 = (_QWORD *)v9;
      }
      if ( v10 && v12 )
        v9 ^= v12;
      else
        v9 = v12;
      if ( !v9 )
        goto LABEL_31;
    }
    v13 = *(_QWORD *)v9;
    v6 = (_QWORD *)v9;
    if ( v10 && v13 )
      v13 ^= v9;
    v14 = 0LL;
    if ( v13 )
    {
      while ( 1 )
      {
        v15 = VmpProcessMemoryRangeCompareVpn(&v21, v13);
        if ( v15 >= 0 )
        {
          if ( v15 > 0 )
          {
            v16 = *(_QWORD *)(v13 + 8);
            goto LABEL_24;
          }
          v14 = (_QWORD *)v13;
        }
        v16 = *(_QWORD *)v13;
LABEL_24:
        if ( v10 && v16 )
          v13 ^= v16;
        else
          v13 = v16;
        if ( !v13 )
        {
          if ( v14 )
            v6 = v14;
          break;
        }
      }
    }
LABEL_31:
    v5 = v21;
    a4 = v22;
    if ( !v6 )
    {
LABEL_39:
      v6 = 0LL;
      goto LABEL_40;
    }
  }
  v17 = v6[8];
  if ( v5 < v17 )
  {
    if ( v7 < v17 )
      goto LABEL_40;
    v5 = v6[8];
    v21 = v5;
  }
  v18 = v6[9];
  *a3 = v5 + v6[6] - v6[8];
  if ( v7 <= v18 )
  {
    a2[1] = 0LL;
    v19 = v7 + 1;
    a3[1] = v7;
  }
  else
  {
    a3[1] = v18;
    v19 = v18 + 1;
    a2[1] = v7 - v19 + 1;
  }
  *a2 = v19;
  a3[1] += 1 - v5;
LABEL_40:
  result = v5;
  *a4 = v6;
  return result;
}
