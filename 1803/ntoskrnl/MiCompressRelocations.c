/*
 * XREFs of MiCompressRelocations @ 0x14053D480
 * Callers:
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiCompressRelocations(__int64 a1, int a2)
{
  __int64 v2; // rbp
  char v3; // r12
  char v5; // bl
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rcx
  _WORD *v10; // r10
  __int16 v11; // r11
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  unsigned int v14; // esi
  __int16 v15; // dx
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // dx
  __int16 v18; // ax
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // rax
  char *PoolWithTag; // rax
  char *v25; // r12
  _QWORD *v26; // r8
  _QWORD *v27; // rsi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // r13
  __int64 v32; // r14
  __int64 v33; // r15
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rax
  bool v37; // cf
  __int64 v38; // rcx
  _WORD *v39; // r8
  __int16 v40; // ax
  __int16 v41; // bx
  unsigned int v42; // r11d
  unsigned int v43; // r9d
  __int16 v44; // cx
  unsigned __int16 v45; // dx
  __int64 v47; // [rsp+80h] [rbp+18h]
  char *v48; // [rsp+88h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v5 = 0;
  v7 = 0LL;
  v8 = 0LL;
  do
  {
    v9 = *(unsigned int *)(v2 + 4);
    v10 = (_WORD *)(v2 + 8);
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
        v15 = *v10 >> 12;
        if ( v15 )
        {
          if ( v5 != (_BYTE)v15 )
          {
            if ( v3 )
              return (char *)a1;
            v5 = v15;
            v3 = 1;
          }
          v16 = *v10 & 0xFFF;
          v17 = v16;
          if ( v16 <= v13 && v13 )
            return (char *)a1;
          v18 = v16 - v13;
          if ( v18 == v11 )
          {
            v19 = v14 + 1;
            v14 = 0;
            v20 = v7 + 2;
            if ( v19 != 255 )
            {
              v20 = v7;
              v14 = v19;
            }
            v7 = v20;
          }
          else
          {
            if ( v14 )
            {
              v37 = v14 < 4;
              v22 = v14 == 4;
              v14 = 0;
              v7 += (!v37 && !v22) + 1LL;
            }
            v11 = v18;
            if ( (unsigned __int16)v18 >= 0xEBu )
              v7 += 2LL;
            else
              ++v7;
          }
          --v12;
          v13 = v17;
        }
        else
        {
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
    v21 = v7 + 2;
    v22 = (v21 & 1) == 0;
    v23 = v21;
    v7 = v21 + 1;
    if ( v22 )
      v7 = v23;
  }
  while ( a2 );
  if ( !v3 )
    return (char *)a1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7 + 8 * (*(_QWORD *)(a1 + 56) + 12LL), 0x65526D4Du);
  v48 = PoolWithTag;
  v25 = PoolWithTag;
  if ( !PoolWithTag )
    return (char *)a1;
  v26 = (_QWORD *)a1;
  v27 = PoolWithTag + 96;
  v28 = *(_QWORD *)(a1 + 32) - *(_QWORD *)a1;
  *(_OWORD *)PoolWithTag = *(_OWORD *)a1;
  v29 = v28 >> 3;
  *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)(a1 + 16);
  *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)(a1 + 32);
  *((_OWORD *)PoolWithTag + 3) = *(_OWORD *)(a1 + 48);
  *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)(a1 + 64);
  *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)(a1 + 80);
  PoolWithTag[68] = v5;
  *(_QWORD *)PoolWithTag = PoolWithTag + 96;
  v30 = (__int64)&PoolWithTag[8 * *(_QWORD *)(a1 + 56) + 96];
  *((_QWORD *)PoolWithTag + 4) = v30;
  v31 = *(_QWORD *)(a1 + 32);
  if ( (_DWORD)v29 )
  {
    v32 = (unsigned int)v29;
    v33 = a1 - (_QWORD)PoolWithTag;
    v34 = 0LL;
    v47 = a1 - (_QWORD)PoolWithTag;
    do
    {
      if ( v34 < v26[7] )
      {
        v35 = *(_QWORD *)((char *)v27 + v33);
        if ( v35 > 1 )
        {
          *v27 = v30;
          if ( (*((_BYTE *)v27 + v33) & 1) != 0 )
            *v27 = v30 | 1;
          v38 = *(unsigned int *)(v31 + 4);
          v39 = (_WORD *)(v31 + 8);
          v31 += v38;
          v40 = 0;
          v41 = 4;
          v42 = 0;
          v43 = (unsigned int)(v38 - 8) >> 1;
          if ( v43 )
          {
            do
            {
              if ( *v39 >= 0x1000u )
              {
                v44 = *v39 & 0xFFF;
                v45 = v44 - v40;
                if ( v44 - v40 == v41 )
                {
                  if ( ++v42 == 255 )
                  {
                    *(_WORD *)v30 = -17;
                    v42 = 0;
                    v30 += 2LL;
                  }
                }
                else
                {
                  if ( v42 )
                  {
                    if ( v42 > 4 )
                    {
                      *(_BYTE *)v30 = -17;
                      *(_BYTE *)(v30 + 1) = v42;
                      v30 += 2LL;
                    }
                    else
                    {
                      *(_BYTE *)v30++ = -17 - v42;
                    }
                    v42 = 0;
                  }
                  v41 = v44 - v40;
                  if ( v45 >= 0xEBu )
                  {
                    *(_BYTE *)v30 = v45 | 0xF0;
                    *(_BYTE *)(v30 + 1) = v45 >> 4;
                    v30 += 2LL;
                  }
                  else
                  {
                    *(_BYTE *)v30++ = v45;
                  }
                }
                v40 = v44;
              }
              ++v39;
              --v43;
            }
            while ( v43 );
            v33 = v47;
            if ( v42 )
            {
              if ( v42 <= 4 )
              {
                *(_BYTE *)v30++ = -17 - v42;
              }
              else
              {
                *(_BYTE *)v30 = -17;
                *(_BYTE *)(v30 + 1) = v42;
                v30 += 2LL;
              }
            }
          }
          v26 = (_QWORD *)a1;
          *(_WORD *)v30 = 240;
          v30 += 2LL;
          if ( (v30 & 1) != 0 )
            ++v30;
        }
        else
        {
          *v27 = v35;
        }
      }
      ++v34;
      ++v27;
      --v32;
    }
    while ( v32 );
    v25 = v48;
  }
  ExFreePoolWithTag(v26, 0);
  return v25;
}
