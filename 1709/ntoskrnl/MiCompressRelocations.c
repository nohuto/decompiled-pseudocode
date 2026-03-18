/*
 * XREFs of MiCompressRelocations @ 0x1404F7C90
 * Callers:
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiCompressRelocations(__int64 a1, int a2)
{
  __int64 v2; // r14
  char v3; // r13
  char v5; // bl
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rcx
  _WORD *v9; // r10
  __int16 v10; // si
  unsigned int v11; // r9d
  unsigned __int16 v12; // r8
  unsigned int v13; // r11d
  unsigned int v14; // edi
  __int16 v15; // dx
  unsigned __int16 v16; // ax
  __int16 v17; // ax
  __int64 v18; // rbp
  bool v19; // zf
  __int64 v20; // rax
  _QWORD *v21; // r13
  char *PoolWithTag; // rax
  char *v23; // r12
  _QWORD *v24; // rdi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // rbp
  __int64 v30; // r14
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rax
  __int64 v34; // rcx
  _WORD *v35; // rdx
  __int16 v36; // r8
  __int16 v37; // r11
  unsigned int v38; // r10d
  unsigned int v39; // r9d
  unsigned __int16 v40; // cx
  __int64 v41; // rax
  __int64 v43; // [rsp+80h] [rbp+18h]
  char *v44; // [rsp+88h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  do
  {
    v8 = *(unsigned int *)(v2 + 4);
    v9 = (_WORD *)(v2 + 8);
    v7 += v8;
    a2 -= v8;
    v2 += v8;
    v10 = 4;
    v11 = (unsigned int)(v8 - 8) >> 1;
    v12 = 0;
    v13 = 0;
    if ( v11 )
    {
      do
      {
        v14 = v13;
        v15 = *v9 >> 12;
        if ( v15 )
        {
          if ( v5 != (_BYTE)v15 )
          {
            if ( v3 )
              return (char *)a1;
            v5 = v15;
            v3 = 1;
          }
          v16 = *v9 & 0xFFF;
          if ( v16 <= v12 && v12 )
            return (char *)a1;
          v17 = v16 - v12;
          if ( v17 == v10 )
          {
            if ( ++v13 == 255 )
            {
              v6 += 2LL;
              v13 = 0;
            }
          }
          else
          {
            if ( v13 )
            {
              v13 = 0;
              v6 += (v14 > 4) + 1LL;
            }
            v10 = v17;
            if ( (unsigned __int16)v17 >= 0xEBu )
              v6 += 2LL;
            else
              ++v6;
          }
          v12 += v17;
          --v11;
        }
        else
        {
          --v11;
        }
        ++v9;
      }
      while ( v11 );
      if ( v13 )
      {
        if ( v13 <= 4 )
          ++v6;
        else
          v6 += 2LL;
      }
    }
    v18 = v6 + 2;
    v19 = (v18 & 1) == 0;
    v20 = v18;
    v6 = v18 + 1;
    if ( v19 )
      v6 = v20;
  }
  while ( a2 );
  if ( !v3 )
    return (char *)a1;
  v21 = (_QWORD *)a1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v6 + 8LL * *(_QWORD *)(a1 + 56) + 96, 0x65526D4Du);
  v44 = PoolWithTag;
  v23 = PoolWithTag;
  if ( !PoolWithTag )
    return (char *)a1;
  v24 = PoolWithTag + 96;
  v25 = *(_QWORD *)(a1 + 32) - *(_QWORD *)a1;
  *(_OWORD *)PoolWithTag = *(_OWORD *)a1;
  v26 = v25 >> 3;
  *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)(a1 + 16);
  *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)(a1 + 32);
  *((_OWORD *)PoolWithTag + 3) = *(_OWORD *)(a1 + 48);
  *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)(a1 + 64);
  *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)(a1 + 80);
  PoolWithTag[68] = v5;
  *(_QWORD *)PoolWithTag = PoolWithTag + 96;
  v27 = (__int64)&PoolWithTag[8 * *(_QWORD *)(a1 + 56) + 96];
  *((_QWORD *)PoolWithTag + 4) = v27;
  v28 = *(_QWORD *)(a1 + 32);
  if ( (_DWORD)v26 )
  {
    v29 = (unsigned int)v26;
    v30 = a1 - (_QWORD)PoolWithTag;
    v31 = 0LL;
    v43 = a1 - (_QWORD)PoolWithTag;
    do
    {
      if ( v31 < v21[7] )
      {
        v32 = *(_QWORD *)((char *)v24 + v30);
        if ( v32 > 1 )
        {
          *v24 = v27;
          if ( (*((_BYTE *)v24 + v30) & 1) != 0 )
            *v24 = v27 | 1;
          v34 = *(unsigned int *)(v28 + 4);
          v35 = (_WORD *)(v28 + 8);
          v28 += v34;
          v36 = 0;
          v37 = 4;
          v38 = 0;
          v39 = (unsigned int)(v34 - 8) >> 1;
          if ( v39 )
          {
            do
            {
              if ( *v35 >= 0x1000u )
              {
                v40 = (*v35 & 0xFFF) - v36;
                if ( v40 == v37 )
                {
                  if ( ++v38 == 255 )
                  {
                    *(_WORD *)v27 = -17;
                    v38 = 0;
                    v27 += 2LL;
                  }
                }
                else
                {
                  if ( v38 )
                  {
                    if ( v38 > 4 )
                    {
                      *(_BYTE *)v27 = -17;
                      v41 = 2LL;
                      *(_BYTE *)(v27 + 1) = v38;
                    }
                    else
                    {
                      *(_BYTE *)v27 = -17 - v38;
                      v41 = 1LL;
                    }
                    v38 = 0;
                    v27 += v41;
                  }
                  v37 = v40;
                  if ( v40 >= 0xEBu )
                  {
                    *(_BYTE *)v27 = v40 | 0xF0;
                    *(_BYTE *)(v27 + 1) = v40 >> 4;
                    v27 += 2LL;
                  }
                  else
                  {
                    *(_BYTE *)v27++ = v40;
                  }
                }
                v36 += v40;
              }
              ++v35;
              --v39;
            }
            while ( v39 );
            v30 = v43;
            v21 = (_QWORD *)a1;
            if ( v38 )
            {
              if ( v38 <= 4 )
              {
                *(_BYTE *)v27++ = -17 - v38;
              }
              else
              {
                *(_BYTE *)v27 = -17;
                *(_BYTE *)(v27 + 1) = v38;
                v27 += 2LL;
              }
            }
          }
          *(_WORD *)v27 = 240;
          v27 += 2LL;
          if ( (v27 & 1) != 0 )
            ++v27;
        }
        else
        {
          *v24 = v32;
        }
      }
      ++v31;
      ++v24;
      --v29;
    }
    while ( v29 );
    v23 = v44;
  }
  ExFreePoolWithTag(v21, 0);
  return v23;
}
