/*
 * XREFs of ?vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C00EE1E0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x1C00EE36C (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x1C02B0C6C (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRect8(struct _PATBLTFRAME *a1)
{
  int v1; // eax
  _DWORD *v2; // r11
  int v4; // esi
  int v5; // r9d
  unsigned int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // r9d
  int v10; // eax
  int v11; // edi
  unsigned int v12; // r14d
  int v13; // r8d
  int v14; // eax
  int v15; // r15d
  unsigned int v16; // r8d
  unsigned int v17; // r10d
  int v18; // edi
  __int64 v19; // rdx
  int v20; // esi
  int v21; // eax
  int v22; // r10d
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // r11d
  _DWORD *v28; // r9
  __int64 v29; // r10
  __int64 v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-30h] BYREF
  __int64 v32; // [rsp+28h] [rbp-28h]
  unsigned int v33; // [rsp+30h] [rbp-20h]
  unsigned int v34; // [rsp+34h] [rbp-1Ch]
  unsigned int v35; // [rsp+38h] [rbp-18h]
  unsigned int v36; // [rsp+3Ch] [rbp-14h]
  int v37; // [rsp+80h] [rbp+30h]

  v1 = *((_DWORD *)a1 + 12);
  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v4 = 0;
  v5 = v1 * *v2;
  v6 = (v1 * v2[2]) & 0xFFFFFFFC;
  v7 = ((_BYTE)v1 * *((_BYTE *)v2 + 8)) & 3;
  v8 = v5 & 3;
  v9 = v5 & 0xFFFFFFFC;
  v10 = v9 - *((_DWORD *)a1 + 8);
  v11 = aulLeftMask[v8];
  v37 = ~aulLeftMask[v7];
  if ( v10 < 0 )
    v12 = *((_DWORD *)a1 + 10) - (unsigned int)~v10 % *((_DWORD *)a1 + 10) - 1;
  else
    v12 = (unsigned int)v10 % *((_DWORD *)a1 + 10);
  v13 = v2[1];
  v14 = v13 - *((_DWORD *)a1 + 9);
  if ( v14 < 0 )
    v15 = *((_DWORD *)a1 + 11) - (unsigned int)~v14 % *((_DWORD *)a1 + 11) - 1;
  else
    v15 = (unsigned int)v14 % *((_DWORD *)a1 + 11);
  if ( v9 == v6 )
  {
    v11 &= ~aulLeftMask[v7];
    v4 = 1;
  }
  else if ( !(_DWORD)v8 )
  {
    goto LABEL_7;
  }
  v33 = v12;
  v22 = v15;
  v23 = (_DWORD *)(*(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v13));
  v24 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
  if ( v13 < v2[3] )
  {
    do
    {
      ++v22;
      *v23 ^= v11 & *(_DWORD *)(v12 + v24);
      if ( v22 == *((_DWORD *)a1 + 11) )
      {
        v24 = *((_QWORD *)a1 + 1);
        v22 = 0;
      }
      else
      {
        v24 += *((int *)a1 + 5);
      }
      ++v13;
      v23 = (_DWORD *)((char *)v23 + *((int *)a1 + 4));
    }
    while ( v13 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
  }
  if ( !v4 )
  {
    v9 += 4;
    v12 += 4;
LABEL_7:
    v16 = (v6 - v9) >> 2;
    v35 = v16;
    if ( v16 )
    {
      v17 = *((_DWORD *)a1 + 10);
      v34 = v17;
      v18 = v15;
      v36 = v17;
      v12 %= v17;
      v19 = *((_QWORD *)a1 + 3);
      v33 = v12;
      v20 = *(_DWORD *)(v19 + 4);
      v21 = v15 * *((_DWORD *)a1 + 5);
      v31 = *(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v20);
      v32 = *((_QWORD *)a1 + 1) + v21;
      if ( (((unsigned __int8)v12 | (unsigned __int8)v17) & 3) != 0 )
      {
        if ( v20 >= *(_DWORD *)(v19 + 12) )
          goto LABEL_14;
        do
        {
          vFetchShiftAndMerge(&v31);
          if ( ++v18 == *((_DWORD *)a1 + 11) )
          {
            v18 = 0;
            v32 = *((_QWORD *)a1 + 1);
          }
          else
          {
            v32 += *((int *)a1 + 5);
          }
          ++v20;
          v31 += *((int *)a1 + 4);
          v25 = *((_QWORD *)a1 + 3);
          v33 = v12;
        }
        while ( v20 < *(_DWORD *)(v25 + 12) );
        goto LABEL_13;
      }
      v36 = v17 >> 2;
      if ( v20 < *(_DWORD *)(v19 + 12) )
      {
        do
        {
          vFetchAndMerge(&v31);
          if ( ++v18 == *((_DWORD *)a1 + 11) )
          {
            v18 = 0;
            v32 = *((_QWORD *)a1 + 1);
          }
          else
          {
            v32 += *((int *)a1 + 5);
          }
          ++v20;
          v31 += *((int *)a1 + 4);
        }
        while ( v20 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
LABEL_13:
        v16 = v35;
      }
    }
LABEL_14:
    if ( (_DWORD)v7 )
    {
      v26 = *((_QWORD *)a1 + 3);
      v27 = *(_DWORD *)(v26 + 4);
      v28 = (_DWORD *)(*(_QWORD *)a1 + v6 + (__int64)(*((_DWORD *)a1 + 4) * v27));
      v29 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
      if ( v27 < *(_DWORD *)(v26 + 12) )
      {
        v30 = (v12 + 4 * v16) % *((_DWORD *)a1 + 10);
        do
        {
          ++v15;
          *v28 ^= v37 & *(_DWORD *)(v30 + v29);
          if ( v15 == *((_DWORD *)a1 + 11) )
          {
            v29 = *((_QWORD *)a1 + 1);
            v15 = 0;
          }
          else
          {
            v29 += *((int *)a1 + 5);
          }
          ++v27;
          v28 = (_DWORD *)((char *)v28 + *((int *)a1 + 4));
        }
        while ( v27 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
