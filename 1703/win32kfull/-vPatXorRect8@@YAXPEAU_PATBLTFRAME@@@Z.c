/*
 * XREFs of ?vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C00DC610
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x1C00DC79C (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x1C02B6ED0 (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // r11
  int v3; // esi
  unsigned int v4; // r12d
  __int64 v5; // r13
  unsigned int v6; // r9d
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edi
  unsigned int v10; // r14d
  int v11; // r8d
  int v12; // eax
  int v13; // r15d
  unsigned int v14; // r8d
  unsigned int v15; // r10d
  int v16; // edi
  __int64 v17; // rdx
  int v18; // esi
  int v19; // eax
  int v20; // r10d
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // r11d
  _DWORD *v26; // r9
  __int64 v27; // r10
  __int64 v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-30h] BYREF
  __int64 v30; // [rsp+28h] [rbp-28h]
  unsigned int v31; // [rsp+30h] [rbp-20h]
  unsigned int v32; // [rsp+34h] [rbp-1Ch]
  unsigned int v33; // [rsp+38h] [rbp-18h]
  unsigned int v34; // [rsp+3Ch] [rbp-14h]
  int v35; // [rsp+80h] [rbp+30h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v3 = 0;
  v4 = (*((_DWORD *)a1 + 12) * v1[2]) & 0xFFFFFFFC;
  v5 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v1 + 8)) & 3;
  v6 = (*((_DWORD *)a1 + 12) * *v1) & 0xFFFFFFFC;
  v7 = (*((_BYTE *)a1 + 48) * *(_BYTE *)v1) & 3;
  v8 = v6 - *((_DWORD *)a1 + 8);
  v9 = aulLeftMask[v7];
  v35 = ~aulLeftMask[v5];
  if ( v8 < 0 )
    v10 = *((_DWORD *)a1 + 10) - (unsigned int)~v8 % *((_DWORD *)a1 + 10) - 1;
  else
    v10 = (unsigned int)v8 % *((_DWORD *)a1 + 10);
  v11 = v1[1];
  v12 = v11 - *((_DWORD *)a1 + 9);
  if ( v12 < 0 )
    v13 = *((_DWORD *)a1 + 11) - (unsigned int)~v12 % *((_DWORD *)a1 + 11) - 1;
  else
    v13 = (unsigned int)v12 % *((_DWORD *)a1 + 11);
  if ( v6 == v4 )
  {
    v9 &= ~aulLeftMask[v5];
    v3 = 1;
  }
  else if ( !(_DWORD)v7 )
  {
    goto LABEL_7;
  }
  v31 = v10;
  v20 = v13;
  v21 = (_DWORD *)(*(_QWORD *)a1 + v6 + (__int64)(*((_DWORD *)a1 + 4) * v11));
  v22 = *((_QWORD *)a1 + 1) + v13 * *((_DWORD *)a1 + 5);
  if ( v11 < v1[3] )
  {
    do
    {
      ++v20;
      *v21 ^= v9 & *(_DWORD *)(v10 + v22);
      if ( v20 == *((_DWORD *)a1 + 11) )
      {
        v22 = *((_QWORD *)a1 + 1);
        v20 = 0;
      }
      else
      {
        v22 += *((int *)a1 + 5);
      }
      ++v11;
      v21 = (_DWORD *)((char *)v21 + *((int *)a1 + 4));
    }
    while ( v11 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
  }
  if ( !v3 )
  {
    v6 += 4;
    v10 += 4;
LABEL_7:
    v14 = (v4 - v6) >> 2;
    v33 = v14;
    if ( v14 )
    {
      v15 = *((_DWORD *)a1 + 10);
      v32 = v15;
      v16 = v13;
      v34 = v15;
      v10 %= v15;
      v17 = *((_QWORD *)a1 + 3);
      v31 = v10;
      v18 = *(_DWORD *)(v17 + 4);
      v19 = v13 * *((_DWORD *)a1 + 5);
      v29 = *(_QWORD *)a1 + v6 + (__int64)(*((_DWORD *)a1 + 4) * v18);
      v30 = *((_QWORD *)a1 + 1) + v19;
      if ( (((unsigned __int8)v10 | (unsigned __int8)v15) & 3) != 0 )
      {
        if ( v18 >= *(_DWORD *)(v17 + 12) )
          goto LABEL_14;
        do
        {
          vFetchShiftAndMerge(&v29);
          if ( ++v16 == *((_DWORD *)a1 + 11) )
          {
            v16 = 0;
            v30 = *((_QWORD *)a1 + 1);
          }
          else
          {
            v30 += *((int *)a1 + 5);
          }
          ++v18;
          v29 += *((int *)a1 + 4);
          v23 = *((_QWORD *)a1 + 3);
          v31 = v10;
        }
        while ( v18 < *(_DWORD *)(v23 + 12) );
        goto LABEL_13;
      }
      v34 = v15 >> 2;
      if ( v18 < *(_DWORD *)(v17 + 12) )
      {
        do
        {
          vFetchAndMerge(&v29);
          if ( ++v16 == *((_DWORD *)a1 + 11) )
          {
            v16 = 0;
            v30 = *((_QWORD *)a1 + 1);
          }
          else
          {
            v30 += *((int *)a1 + 5);
          }
          ++v18;
          v29 += *((int *)a1 + 4);
        }
        while ( v18 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
LABEL_13:
        v14 = v33;
      }
    }
LABEL_14:
    if ( (_DWORD)v5 )
    {
      v24 = *((_QWORD *)a1 + 3);
      v25 = *(_DWORD *)(v24 + 4);
      v26 = (_DWORD *)(*(_QWORD *)a1 + v4 + (__int64)(*((_DWORD *)a1 + 4) * v25));
      v27 = *((_QWORD *)a1 + 1) + v13 * *((_DWORD *)a1 + 5);
      if ( v25 < *(_DWORD *)(v24 + 12) )
      {
        v28 = (v10 + 4 * v14) % *((_DWORD *)a1 + 10);
        do
        {
          ++v13;
          *v26 ^= v35 & *(_DWORD *)(v28 + v27);
          if ( v13 == *((_DWORD *)a1 + 11) )
          {
            v27 = *((_QWORD *)a1 + 1);
            v13 = 0;
          }
          else
          {
            v27 += *((int *)a1 + 5);
          }
          ++v25;
          v26 = (_DWORD *)((char *)v26 + *((int *)a1 + 4));
        }
        while ( v25 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
