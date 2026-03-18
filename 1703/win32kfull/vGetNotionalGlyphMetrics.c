/*
 * XREFs of vGetNotionalGlyphMetrics @ 0x1C022FEC8
 * Callers:
 *     vFillGLYPHDATA @ 0x1C022F244 (vFillGLYPHDATA.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C022FA24 (vFillGLYPHDATA_ErrRecover.c)
 *     vFillSingularGLYPHDATA @ 0x1C022FC0C (vFillSingularGLYPHDATA.c)
 * Callees:
 *     FixMul @ 0x1C02BD1FC (FixMul.c)
 */

__int16 __fastcall vGetNotionalGlyphMetrics(__int64 a1, unsigned int a2, _WORD *a3)
{
  unsigned int *v3; // r9
  __int64 v6; // r10
  __int64 v7; // r14
  _WORD *v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int16 v11; // cx
  __int16 v12; // bx
  __int16 v13; // r9
  __int16 v14; // di
  __int16 v15; // si
  __int16 v16; // ax
  __int16 v17; // ax
  __int16 result; // ax
  bool v19; // zf
  __int16 fixed; // ax
  __int16 v21; // r10
  __int64 v22; // r11
  __int64 v23; // r8
  __int64 v24; // r11

  v3 = *(unsigned int **)(a1 + 192);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
  v7 = v6 + v3[8];
  v8 = (_WORD *)(v6 + v3[2]);
  v9 = v6 + v3[10];
  v10 = (unsigned __int16)__ROR2__(*(_WORD *)(v3[6] + v6 + 34), 8);
  v11 = __ROR2__(*(_WORD *)(v3[4] + v6 + 50), 8);
  if ( v11 )
  {
    if ( v11 == 1 )
      v8 = (_WORD *)((char *)v8 + _byteswap_ulong(*(_DWORD *)(v9 + 4LL * a2)));
  }
  else
  {
    v8 += (unsigned __int16)__ROR2__(*(_WORD *)(v9 + 2LL * a2), 8);
  }
  v12 = -__ROR2__(v8[4], 8);
  v13 = -__ROR2__(v8[2], 8);
  v14 = __ROR2__(v8[1], 8);
  v15 = __ROR2__(v8[3], 8);
  *a3 = v14;
  a3[1] = v15;
  a3[2] = v12;
  a3[3] = v13;
  if ( a2 >= (unsigned int)v10 )
  {
    a3[5] = __ROR2__(*(_WORD *)(v7 + 4LL * (unsigned int)(v10 - 1)), 8);
    v16 = *(_WORD *)(v7 + 2 * (a2 - (unsigned int)v10 + 2 * v10));
  }
  else
  {
    a3[5] = __ROR2__(*(_WORD *)(v7 + 4LL * a2), 8);
    v16 = *(_WORD *)(v7 + 4LL * a2 + 2);
  }
  v17 = __ROR2__(v16, 8);
  a3[4] = v17;
  *a3 = v17;
  result = v15 + v17 - v14;
  v19 = (*(_DWORD *)(a1 + 40) & 0x4000) == 0;
  a3[1] = result;
  if ( !v19 )
  {
    fixed = FixMul((unsigned int)v13, 22272LL, v8);
    *(_WORD *)(v22 + 8) = v21 - fixed;
    result = FixMul((unsigned int)v12, 22272LL, v23);
    *(_WORD *)(v24 + 2) -= result;
  }
  return result;
}
