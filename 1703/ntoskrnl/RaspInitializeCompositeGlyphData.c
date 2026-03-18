/*
 * XREFs of RaspInitializeCompositeGlyphData @ 0x140267AF0
 * Callers:
 *     RaspLoadCompositeGlyphData @ 0x140267E60 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     RaspFreeMemory @ 0x1401417C4 (RaspFreeMemory.c)
 *     FioFwReadBytesAtOffset @ 0x14014294C (FioFwReadBytesAtOffset.c)
 *     RaspAllocateMemory @ 0x140142D48 (RaspAllocateMemory.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall RaspInitializeCompositeGlyphData(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int16 a4,
        __int16 a5,
        unsigned __int16 a6,
        unsigned int a7,
        _WORD *a8,
        _QWORD *a9,
        __int64 *a10)
{
  __int64 *v10; // r12
  unsigned __int64 v12; // r14
  char *Memory; // rax
  char *v14; // rbx
  _DWORD *v16; // rcx
  __int64 v17; // r8
  char *v18; // r14
  __int16 *v19; // rdx
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // rcx
  char *v23; // rbx
  char *v24; // r15
  _WORD *v25; // r9
  __int16 v26; // r13
  __int16 v27; // r10
  char *v28; // rdi
  __int16 *v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int16 *v32; // rbp
  unsigned __int16 v33; // r8
  __int64 v34; // rcx
  size_t v35; // r8
  __int64 v36; // r9
  __int16 v37; // cx
  __int16 v38; // dx
  __int16 v39; // ax
  unsigned __int16 v40; // r8
  __int16 v41; // r14
  __int64 v42; // r9
  __int16 v43; // ax
  __int16 v44; // ax
  char *v45; // [rsp+20h] [rbp-58h]
  _WORD *v46; // [rsp+28h] [rbp-50h]
  _DWORD *v47; // [rsp+30h] [rbp-48h]
  __int16 v51; // [rsp+A0h] [rbp+28h]
  __int16 v52; // [rsp+A8h] [rbp+30h]

  v10 = a2;
  v12 = a4 + a6 + 8 * (unsigned int)a4 + 2 * (a5 + 41);
  Memory = (char *)RaspAllocateMemory(v12, a10);
  v14 = Memory;
  if ( !Memory )
    return 3221225626LL;
  memset(Memory, 0, v12);
  v16 = v14 + 2;
  v17 = 4LL;
  v45 = v14;
  v18 = v14;
  *(_WORD *)v14 = a5;
  v19 = (__int16 *)(a3 + 2);
  do
  {
    v20 = *v19++;
    *v16++ = v20;
    --v17;
  }
  while ( v17 );
  v21 = *(_DWORD *)(v14 + 2);
  v22 = v14 + 18;
  *((_WORD *)v14 + 11) = a6;
  *((_WORD *)v14 + 12) = a4;
  v23 = v14 + 66;
  v47 = v22;
  *v22 = v21;
  *(_QWORD *)(v18 + 26) = v23;
  v24 = &v23[2 * a5];
  if ( a6 )
  {
    *(_QWORD *)(v18 + 34) = v24;
    v24 += a6;
    FioFwReadBytesAtOffset(a1, a7, a6, *(void **)(v18 + 34));
    v22 = v47;
  }
  v25 = *(_WORD **)(v18 + 26);
  v26 = 0;
  v27 = 0;
  *(_QWORD *)(v18 + 42) = v24;
  v51 = 0;
  v46 = v25;
  v28 = &v24[a4];
  *(_QWORD *)(v18 + 50) = v28;
  v29 = (__int16 *)&v28[4 * a4 + 8];
  *(_QWORD *)(v18 + 58) = v29;
  while ( 1 )
  {
    v30 = *v10;
    if ( (__int64 *)*v10 == v10 )
      break;
    v31 = *(_QWORD *)v30;
    if ( *(__int64 **)(v30 + 8) != v10 || *(_QWORD *)(v31 + 8) != v30 )
      __fastfail(3u);
    *v10 = v31;
    *(_QWORD *)(v31 + 8) = v10;
    v32 = *(unsigned __int16 **)(v30 + 16);
    if ( (*(_WORD *)(v30 + 24) & 0x200) != 0 )
    {
      *a8 = *(_WORD *)(v30 + 26);
      *v22 = *(_DWORD *)(v32 + 1);
    }
    v33 = 0;
    if ( (__int16)*v32 > 0 )
    {
      do
      {
        v34 = v33++;
        *v25++ = v27 + *(_WORD *)(*(_QWORD *)(v32 + 13) + 2 * v34);
      }
      while ( v33 < (__int16)*v32 );
      v18 = v45;
      v46 = v25;
    }
    v35 = v32[12];
    v52 = v35 + v27;
    memmove(v24, *(const void **)(v32 + 21), v35);
    v36 = v32[12];
    v37 = 0x4000;
    v38 = *(_WORD *)(v30 + 24);
    v24 += v36;
    v39 = 0x4000;
    if ( (v38 & 8) != 0 )
    {
      v39 = *(_WORD *)(v30 + 32);
      v37 = v39;
    }
    else if ( (v38 & 0x40) != 0 )
    {
      v39 = *(_WORD *)(v30 + 32);
      v37 = *(_WORD *)(v30 + 34);
    }
    v40 = 0;
    if ( (_WORD)v36 )
    {
      v41 = v51;
      v42 = v39;
      do
      {
        *(_WORD *)v28 = *(_WORD *)(*(_QWORD *)(v32 + 25) + 4LL * v40);
        *v29 = *(_WORD *)(*(_QWORD *)(v32 + 29) + 4LL * v40);
        *(_WORD *)v28 = v42 * *(__int16 *)v28 / 0x4000;
        *v29 = v37 * (__int64)*v29 / 0x4000;
        if ( !v40 )
        {
          *(_WORD *)v28 -= v26;
          *v29 -= v41;
          v43 = *(_WORD *)(v30 + 24);
          if ( (v43 & 2) != 0 )
          {
            if ( (v43 & 1) != 0 )
            {
              *(_WORD *)v28 += *(_WORD *)(v30 + 28);
              v44 = *(_WORD *)(v30 + 30);
            }
            else
            {
              *(_WORD *)v28 += *(char *)(v30 + 28);
              v44 = *(char *)(v30 + 29);
            }
            *v29 += v44;
          }
        }
        v26 += *(_WORD *)v28;
        ++v40;
        v41 += *v29;
        v28 += 4;
        v29 += 2;
      }
      while ( v40 < v32[12] );
      v10 = a2;
      v51 = v41;
      v18 = v45;
    }
    RaspFreeMemory((__int64)v32, a10);
    RaspFreeMemory(v30, a10);
    v25 = v46;
    v27 = v52;
    v22 = v47;
  }
  *a9 = v18;
  return 0LL;
}
