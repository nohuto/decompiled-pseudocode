/*
 * XREFs of ?vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C029F790
 * Callers:
 *     <none>
 * Callees:
 *     vFetchNotAndCopy @ 0x1C02B0B80 (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x1C02B0CE4 (vFetchShiftNotAndCopy.c)
 */

void __fastcall vPatNotRect8(struct _PATBLTFRAME *a1)
{
  int v1; // eax
  _DWORD *v2; // rsi
  int v4; // r13d
  int v5; // r12d
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // r12d
  int v10; // eax
  int v11; // r11d
  unsigned int v12; // r14d
  int v13; // r10d
  int v14; // eax
  int v15; // r15d
  int v16; // edi
  int *v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // r8d
  unsigned int v20; // r10d
  int v21; // edi
  __int64 v22; // rdx
  int v23; // esi
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // r11d
  int *v28; // r9
  __int64 v29; // r10
  __int64 v30; // r8
  __int64 v31; // [rsp+20h] [rbp-30h] BYREF
  __int64 v32; // [rsp+28h] [rbp-28h]
  unsigned int v33; // [rsp+30h] [rbp-20h]
  unsigned int v34; // [rsp+34h] [rbp-1Ch]
  unsigned int v35; // [rsp+38h] [rbp-18h]
  unsigned int v36; // [rsp+3Ch] [rbp-14h]
  int v37; // [rsp+98h] [rbp+48h]
  int v38; // [rsp+A0h] [rbp+50h]

  v1 = *((_DWORD *)a1 + 12);
  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v4 = 0;
  v5 = v1 * v2[2];
  v6 = (v1 * *v2) & 0xFFFFFFFC;
  v7 = ((_BYTE)v1 * *(_BYTE *)v2) & 3;
  v8 = v5 & 3;
  v9 = v5 & 0xFFFFFFFC;
  v37 = v8;
  v10 = v6 - *((_DWORD *)a1 + 8);
  v11 = aulLeftMask[v7];
  v38 = ~aulLeftMask[v8];
  if ( v10 >= 0 )
    v12 = (unsigned int)v10 % *((_DWORD *)a1 + 10);
  else
    v12 = *((_DWORD *)a1 + 10) - (unsigned int)~v10 % *((_DWORD *)a1 + 10) - 1;
  v13 = v2[1];
  v14 = v13 - *((_DWORD *)a1 + 9);
  if ( v14 >= 0 )
    v15 = (unsigned int)v14 % *((_DWORD *)a1 + 11);
  else
    v15 = *((_DWORD *)a1 + 11) - (unsigned int)~v14 % *((_DWORD *)a1 + 11) - 1;
  if ( v6 == v9 )
  {
    v11 &= ~aulLeftMask[v8];
    v4 = 1;
  }
  else if ( !(_DWORD)v7 )
  {
    goto LABEL_17;
  }
  v33 = v12;
  v16 = v15;
  v17 = (int *)(*(_QWORD *)a1 + v6 + (__int64)(*((_DWORD *)a1 + 4) * v13));
  v18 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
  if ( v13 < v2[3] )
  {
    do
    {
      ++v16;
      *v17 = *v17 & ~v11 | v11 & ~*(_DWORD *)(v12 + v18);
      if ( v16 == *((_DWORD *)a1 + 11) )
      {
        v18 = *((_QWORD *)a1 + 1);
        v16 = 0;
      }
      else
      {
        v18 += *((int *)a1 + 5);
      }
      ++v13;
      v17 = (int *)((char *)v17 + *((int *)a1 + 4));
    }
    while ( v13 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
  }
  if ( !v4 )
  {
    v6 += 4;
    v12 += 4;
LABEL_17:
    v19 = (v9 - v6) >> 2;
    v35 = v19;
    if ( v19 )
    {
      v20 = *((_DWORD *)a1 + 10);
      v34 = v20;
      v21 = v15;
      v36 = v20;
      v12 %= v20;
      v22 = *((_QWORD *)a1 + 3);
      v33 = v12;
      v23 = *(_DWORD *)(v22 + 4);
      v24 = v15 * *((_DWORD *)a1 + 5);
      v31 = *(_QWORD *)a1 + v6 + (__int64)(*((_DWORD *)a1 + 4) * v23);
      v32 = *((_QWORD *)a1 + 1) + v24;
      if ( (((unsigned __int8)v12 | (unsigned __int8)v20) & 3) != 0 )
      {
        if ( v23 < *(_DWORD *)(v22 + 12) )
        {
          do
          {
            vFetchShiftNotAndCopy(&v31);
            if ( ++v21 == *((_DWORD *)a1 + 11) )
            {
              v21 = 0;
              v32 = *((_QWORD *)a1 + 1);
            }
            else
            {
              v32 += *((int *)a1 + 5);
            }
            ++v23;
            v31 += *((int *)a1 + 4);
            v25 = *((_QWORD *)a1 + 3);
            v33 = v12;
          }
          while ( v23 < *(_DWORD *)(v25 + 12) );
          goto LABEL_30;
        }
      }
      else
      {
        v36 = v20 >> 2;
        if ( v23 < *(_DWORD *)(v22 + 12) )
        {
          do
          {
            vFetchNotAndCopy(&v31);
            if ( ++v21 == *((_DWORD *)a1 + 11) )
            {
              v21 = 0;
              v32 = *((_QWORD *)a1 + 1);
            }
            else
            {
              v32 += *((int *)a1 + 5);
            }
            ++v23;
            v31 += *((int *)a1 + 4);
          }
          while ( v23 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
LABEL_30:
          v19 = v35;
        }
      }
    }
    if ( v37 )
    {
      v26 = *((_QWORD *)a1 + 3);
      v27 = *(_DWORD *)(v26 + 4);
      v28 = (int *)(*(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v27));
      v29 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
      if ( v27 < *(_DWORD *)(v26 + 12) )
      {
        v30 = (v12 + 4 * v19) % *((_DWORD *)a1 + 10);
        do
        {
          ++v15;
          *v28 = *v28 & ~v38 | v38 & ~*(_DWORD *)(v30 + v29);
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
          v28 = (int *)((char *)v28 + *((int *)a1 + 4));
        }
        while ( v27 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
