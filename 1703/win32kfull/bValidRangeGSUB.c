/*
 * XREFs of bValidRangeGSUB @ 0x1C0228654
 * Callers:
 *     bCheckVerticalTable @ 0x1C0231FDC (bCheckVerticalTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bValidRangeGSUB(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v2; // r8
  __int64 v5; // r13
  _WORD *v6; // r9
  __int64 v7; // rbp
  __int64 v8; // r15
  _WORD *v9; // rsi
  _WORD *v10; // rdi
  unsigned __int16 v11; // dx
  int v12; // r10d
  __int64 v13; // rcx
  _DWORD *i; // rax
  __int64 result; // rax
  unsigned __int16 v16; // cx
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // ax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // rdx
  unsigned int v23; // r9d
  unsigned int v24; // eax
  _WORD *v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r9

  v2 = *(unsigned int *)(a1 + 244);
  *a2 = 0;
  v5 = *(unsigned int *)(a1 + 240);
  v6 = (_WORD *)(v5 + *(_QWORD *)(a1 + 64));
  if ( (unsigned int)v2 < 0xA )
    return 0LL;
  v7 = (unsigned __int16)__ROR2__(v6[3], 8);
  v8 = (unsigned __int16)__ROR2__(v6[4], 8);
  v9 = (_WORD *)((char *)v6 + v7);
  v10 = (_WORD *)((char *)v6 + v8);
  if ( (unsigned __int64)(unsigned __int16)__ROR2__(v6[2], 8) + 10 > v2 )
    return 0LL;
  if ( v7 + 8 > v2 )
    return 0LL;
  if ( v8 + 4 > v2 )
    return 0LL;
  v11 = __ROR2__(*v9, 8);
  if ( v7 + 2 * (3 * (unsigned __int64)v11 + 1) > v2 )
    return 0LL;
  v12 = 0;
  v13 = 0LL;
  if ( !v11 )
    return 0LL;
  for ( i = v9 + 1; *i != 1953654134; i = (_DWORD *)((char *)i + 6) )
  {
    ++v12;
    if ( ++v13 >= v11 )
      return 0LL;
  }
  v16 = __ROR2__(v9[3 * v12 + 3], 8);
  if ( !v16 )
    return 0LL;
  v17 = (unsigned int)v7 + v16;
  if ( v17 + 6 > v2 )
    return 0LL;
  if ( __ROR2__(*(_WORD *)((char *)v6 + (unsigned int)v17 + 2), 8) != 1 )
    return 0LL;
  v18 = __ROR2__(*(_WORD *)((char *)v6 + (unsigned int)v17 + 4), 8);
  if ( __ROR2__(*v10, 8) < v18 )
    return 0LL;
  if ( v8 + 4 + 2 * (unsigned __int64)v18 > v2 )
    return 0LL;
  _mm_lfence();
  v19 = __ROR2__(v10[v18 + 1], 8);
  if ( (unsigned __int64)((unsigned int)v8 + v19) + 8 > v2
    || __ROR2__(*(_WORD *)((char *)v10 + v19), 8) != 1
    || __ROR2__(*(_WORD *)((char *)v10 + v19 + 4), 8) != 1 )
  {
    return 0LL;
  }
  v20 = (unsigned __int16)__ROR2__(*(_WORD *)((char *)v10 + v19 + 6), 8);
  v21 = v20 + v19;
  v22 = 0xFFFFFFFFLL;
  v23 = -1;
  if ( v21 >= v20 )
    v23 = v21;
  *a2 = v23;
  if ( v21 < v20 )
    return 0LL;
  v24 = v23 + v8;
  if ( v23 + (unsigned int)v8 >= v23 )
    v22 = v24;
  *a2 = v22;
  if ( v24 < v23 )
    return 0LL;
  if ( (unsigned int)v22 > 0xFFFFFFF9 )
    return 0LL;
  if ( v22 + 6 > v2 )
    return 0LL;
  v25 = (_WORD *)(v5 + (unsigned int)v22 + *(_QWORD *)(a1 + 64));
  if ( __ROR2__(*v25, 8) != 2 )
    return 0LL;
  v26 = (unsigned __int16)__ROR2__(v25[1], 8);
  if ( (unsigned int)v22 > ~(_DWORD)v26 )
    return 0LL;
  v27 = (unsigned int)(v22 + v26);
  if ( (unsigned int)v27 > 0xFFFFFFFB )
    return 0LL;
  if ( v27 + 4 > v2 )
    return 0LL;
  if ( __ROR2__(*(_WORD *)((char *)v25 + v26), 8) != 1 )
    return 0LL;
  v28 = (unsigned __int16)__ROR2__(*(_WORD *)((char *)v25 + v26 + 2), 8);
  if ( (unsigned __int64)(unsigned int)v27 + 2 * (v28 + 2) > v2 || v22 + 2 * (v28 + 3) > v2 )
    return 0LL;
  result = 1LL;
  *a2 = v22 + v5;
  return result;
}
