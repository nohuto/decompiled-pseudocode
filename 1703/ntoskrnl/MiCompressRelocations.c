/*
 * XREFs of MiCompressRelocations @ 0x140421340
 * Callers:
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

char *__fastcall MiCompressRelocations(_QWORD *P, int a2)
{
  __int64 v2; // rbp
  char v3; // r12
  char v5; // bl
  _QWORD *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rcx
  unsigned __int16 *v10; // r10
  __int16 v11; // r11
  unsigned int v12; // r9d
  unsigned __int16 v13; // r8
  unsigned int v14; // edi
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // ax
  __int16 v17; // ax
  __int64 v18; // rsi
  bool v19; // zf
  __int64 v20; // rax
  char *PoolWithTag; // rax
  char *v22; // r12
  _QWORD *v23; // rdi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rbp
  signed __int64 v29; // r14
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rax
  bool v33; // cf
  __int64 v34; // rcx
  _WORD *v35; // rdx
  __int16 v36; // r8
  unsigned int v37; // r10d
  __int16 v38; // r11
  unsigned int v39; // r9d
  unsigned __int16 v40; // cx
  __int64 v41; // rax
  signed __int64 v43; // [rsp+80h] [rbp+18h]
  char *v44; // [rsp+88h] [rbp+20h]

  v2 = P[4];
  v3 = 0;
  v5 = 0;
  v6 = P;
  v7 = 0LL;
  v8 = 0LL;
  do
  {
    v9 = *(unsigned int *)(v2 + 4);
    v10 = (unsigned __int16 *)(v2 + 8);
    v8 += v9;
    a2 -= v9;
    v2 += v9;
    v11 = 4;
    v12 = (unsigned int)(v9 - 8) >> 1;
    v13 = 0;
    v14 = 0;
    if ( v12 )
    {
      do
      {
        v15 = *v10;
        if ( *v10 < 0x1000u )
        {
          --v12;
        }
        else
        {
          if ( v5 != v15 >> 12 )
          {
            if ( v3 )
              return (char *)v6;
            v5 = v15 >> 12;
            v3 = 1;
          }
          v16 = v15 & 0xFFF;
          if ( v16 <= v13 && v13 )
            return (char *)v6;
          v17 = v16 - v13;
          if ( v17 == v11 )
          {
            if ( ++v14 == 255 )
            {
              v7 += 2LL;
              v14 = 0;
            }
          }
          else
          {
            if ( v14 )
            {
              v33 = v14 < 4;
              v19 = v14 == 4;
              v14 = 0;
              v7 += (!v33 && !v19) + 1LL;
            }
            v11 = v17;
            if ( (unsigned __int16)v17 >= 0xEBu )
              v7 += 2LL;
            else
              ++v7;
          }
          v13 += v17;
          --v12;
        }
        ++v10;
      }
      while ( v12 );
      if ( v14 )
      {
        if ( v14 <= 4 )
          ++v7;
        else
          v7 += 2LL;
      }
    }
    v18 = v7 + 2;
    v19 = (v18 & 1) == 0;
    v20 = v18;
    v7 = v18 + 1;
    if ( v19 )
      v7 = v20;
  }
  while ( a2 );
  if ( !v3 )
    return (char *)v6;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7 + 8 * (v6[7] + 12LL), 0x65526D4Du);
  v44 = PoolWithTag;
  v22 = PoolWithTag;
  if ( !PoolWithTag )
    return (char *)v6;
  v23 = PoolWithTag + 96;
  v24 = v6[4] - *v6;
  *(_OWORD *)PoolWithTag = *(_OWORD *)v6;
  v25 = v24 >> 3;
  *((_OWORD *)PoolWithTag + 1) = *((_OWORD *)v6 + 1);
  *((_OWORD *)PoolWithTag + 2) = *((_OWORD *)v6 + 2);
  *((_OWORD *)PoolWithTag + 3) = *((_OWORD *)v6 + 3);
  *((_OWORD *)PoolWithTag + 4) = *((_OWORD *)v6 + 4);
  *((_OWORD *)PoolWithTag + 5) = *((_OWORD *)v6 + 5);
  PoolWithTag[68] = v5;
  *(_QWORD *)PoolWithTag = PoolWithTag + 96;
  v26 = (__int64)&PoolWithTag[8 * v6[7] + 96];
  *((_QWORD *)PoolWithTag + 4) = v26;
  v27 = v6[4];
  if ( (_DWORD)v25 )
  {
    v28 = (unsigned int)v25;
    v29 = (char *)v6 - PoolWithTag;
    v30 = 0LL;
    v43 = (char *)v6 - PoolWithTag;
    do
    {
      if ( v30 < v6[7] )
      {
        v31 = *(_QWORD *)((char *)v23 + v29);
        if ( v31 > 1 )
        {
          *v23 = v26;
          if ( (*((_BYTE *)v23 + v29) & 1) != 0 )
            *v23 = v26 | 1;
          v34 = *(unsigned int *)(v27 + 4);
          v35 = (_WORD *)(v27 + 8);
          v36 = 0;
          v37 = 0;
          v27 += v34;
          v38 = 4;
          v39 = (unsigned int)(v34 - 8) >> 1;
          if ( v39 )
          {
            do
            {
              if ( *v35 >= 0x1000u )
              {
                v40 = (*v35 & 0xFFF) - v36;
                if ( v40 == v38 )
                {
                  if ( ++v37 == 255 )
                  {
                    *(_WORD *)v26 = -17;
                    v37 = 0;
                    v26 += 2LL;
                  }
                }
                else
                {
                  if ( v37 )
                  {
                    if ( v37 > 4 )
                    {
                      *(_BYTE *)v26 = -17;
                      v41 = 2LL;
                      *(_BYTE *)(v26 + 1) = v37;
                    }
                    else
                    {
                      *(_BYTE *)v26 = -17 - v37;
                      v41 = 1LL;
                    }
                    v37 = 0;
                    v26 += v41;
                  }
                  v38 = v40;
                  if ( v40 >= 0xEBu )
                  {
                    *(_BYTE *)v26 = v40 | 0xF0;
                    *(_BYTE *)(v26 + 1) = v40 >> 4;
                    v26 += 2LL;
                  }
                  else
                  {
                    *(_BYTE *)v26++ = v40;
                  }
                }
                v36 += v40;
              }
              ++v35;
              --v39;
            }
            while ( v39 );
            v29 = v43;
            v6 = P;
            if ( v37 )
            {
              if ( v37 <= 4 )
              {
                *(_BYTE *)v26++ = -17 - v37;
              }
              else
              {
                *(_BYTE *)v26 = -17;
                *(_BYTE *)(v26 + 1) = v37;
                v26 += 2LL;
              }
            }
          }
          *(_WORD *)v26 = 240;
          v26 += 2LL;
          if ( (v26 & 1) != 0 )
            ++v26;
        }
        else
        {
          *v23 = v31;
        }
      }
      ++v30;
      ++v23;
      --v28;
    }
    while ( v28 );
    v22 = v44;
  }
  ExFreePoolWithTag(v6, 0);
  return v22;
}
