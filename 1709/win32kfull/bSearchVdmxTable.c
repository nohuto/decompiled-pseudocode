/*
 * XREFs of bSearchVdmxTable @ 0x1C0233C04
 * Callers:
 *     vQuantizeXform @ 0x1C0233DF8 (vQuantizeXform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSearchVdmxTable(__int64 a1, int a2, int a3, int a4, unsigned __int16 *a5, __int64 a6)
{
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  unsigned __int16 v11; // cx
  __int64 v12; // rdi
  unsigned int v13; // r8d
  unsigned int v14; // r10d
  unsigned int v15; // edx
  unsigned __int8 *v16; // rcx
  unsigned __int8 v17; // al
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // r10
  unsigned __int8 v21; // al
  unsigned __int16 v22; // dx
  unsigned int v23; // edi
  unsigned int v24; // ebx
  _WORD *v25; // rdx
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // r10
  int v29; // r11d
  unsigned int v31; // ebx
  int v32; // r9d
  _WORD *v33; // rcx
  int v34; // edx
  unsigned __int16 v35; // ax

  v9 = *(_DWORD *)(*(_QWORD *)(a6 + 192) + 84LL);
  if ( v9 < 6 )
    return 0LL;
  v10 = v9;
  v11 = __ROR2__(*(_WORD *)(a1 + 4), 8);
  v12 = v11;
  if ( 6 * ((unsigned __int64)v11 + 1) > v9 || (unsigned int)(a4 + 254) > 0x1FC )
    return 0LL;
  v13 = 0;
  v14 = v11;
  v15 = 0;
  if ( v11 )
  {
    v16 = (unsigned __int8 *)(a1 + 8);
    do
    {
      if ( *(v16 - 2) == 1 )
      {
        v17 = *(v16 - 1);
        if ( !v17 )
          break;
        v18 = a3 * v17;
        if ( v18 >= a2 * *v16 && v18 <= a2 * v16[1] )
          break;
      }
      ++v15;
      v16 += 4;
    }
    while ( v15 < v14 );
  }
  if ( v15 == v14 )
    return 0LL;
  v19 = (unsigned int)(__int16)__ROR2__(*(_WORD *)(a1 + 2 * (v15 + 2 * v12) + 6), 8);
  v20 = (unsigned int)(__int16)v19;
  if ( v19 + 4 > v10 )
    return 0LL;
  v21 = abs32(a4);
  if ( a4 <= 0 && (v21 < *(_BYTE *)(v20 + a1 + 2) || v21 > *(_BYTE *)(v20 + a1 + 3)) )
    return 0LL;
  v22 = __ROR2__(*(_WORD *)(v20 + a1), 8);
  if ( v20 + 2 * (3 * (unsigned __int64)v22 + 2) > v10 )
    return 0LL;
  if ( a4 > 0 )
  {
    v23 = v22;
    v24 = 0;
    if ( v22 )
    {
      v25 = (_WORD *)(v20 + a1 + 8);
      while ( 1 )
      {
        v26 = __ROR2__(*v25, 8);
        v27 = __ROR2__(*(v25 - 1), 8);
        v28 = __ROR2__(*(v25 - 2), 8);
        a5[2] = v26;
        v29 = (__int16)v27 - (__int16)v26;
        *a5 = v28;
        a5[1] = v27;
        if ( v29 == a4 )
          break;
        if ( v29 <= a4 )
        {
          ++v24;
          v25 += 3;
          if ( v24 < v23 )
            continue;
        }
        return 0LL;
      }
      LOBYTE(v13) = v28 <= 0xFFu;
      return v13;
    }
    return 0LL;
  }
  v31 = v22;
  if ( !v22 )
    return 0LL;
  v32 = -a4;
  v33 = (_WORD *)(v20 + a1 + 8);
  while ( 1 )
  {
    v34 = (unsigned __int16)__ROR2__(*(v33 - 2), 8);
    a5[1] = __ROR2__(*(v33 - 1), 8);
    v35 = __ROR2__(*v33, 8);
    *a5 = v34;
    a5[2] = v35;
    if ( v34 == v32 )
      break;
    if ( v34 <= v32 )
    {
      ++v13;
      v33 += 3;
      if ( v13 < v31 )
        continue;
    }
    return 0LL;
  }
  return 1LL;
}
