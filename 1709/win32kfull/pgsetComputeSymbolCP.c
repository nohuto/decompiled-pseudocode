/*
 * XREFs of pgsetComputeSymbolCP @ 0x1C0226828
 * Callers:
 *     cjComputeGLYPHSET_TEMPLATE @ 0x1C022B018 (cjComputeGLYPHSET_TEMPLATE.c)
 * Callees:
 *     EngComputeGlyphSet @ 0x1C00F1A70 (EngComputeGlyphSet.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

char *pgsetComputeSymbolCP()
{
  int v0; // esi
  char *v1; // rbx
  FD_GLYPHSET *v2; // rax
  FD_GLYPHSET *v3; // rbp
  __int64 cRuns; // r14
  _DWORD *v5; // rax
  __int64 v6; // r15
  __int64 v7; // r13
  __m128i *v8; // rdi
  _DWORD *v9; // r12
  signed __int64 v10; // r14
  unsigned __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rdx
  signed int v14; // ecx
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rsi
  char *v18; // r14
  __int64 v19; // r15
  __int64 v20; // rax

  v0 = 0;
  v1 = 0LL;
  v2 = EngComputeGlyphSet(0, 0, 256);
  v3 = v2;
  if ( v2 )
  {
    cRuns = (int)v2->cRuns;
    v5 = EngAllocMem(0, 16 * ((int)cRuns + 122), 0x64667454u);
    v1 = (char *)v5;
    if ( v5 )
    {
      *v5 = 16 * (cRuns + 122);
      v6 = cRuns;
      v5[1] = 4;
      v7 = 0LL;
      v8 = (__m128i *)&v5[4 * (int)cRuns + 8];
      v5[2] = 480;
      v5[3] = cRuns + 1;
      if ( (int)cRuns > 0 )
      {
        v9 = v5 + 4;
        v10 = (char *)v3 - (char *)v5;
        do
        {
          v11 = *(_WORD *)((char *)v9 + v10);
          if ( v11 >= 0xF000u )
            break;
          *(_WORD *)v9 = v11;
          *((_WORD *)v9 + 1) = *(_WORD *)((char *)v9 + v10 + 2);
          *((_QWORD *)v9 + 1) = v8;
          memmove(v8, *(const void **)((char *)v9 + v10 + 8), 4LL * *(unsigned __int16 *)((char *)v9 + v10 + 2));
          v12 = *(unsigned __int16 *)((char *)v9 + v10 + 2);
          ++v0;
          ++v7;
          v9 += 4;
          v8 = (__m128i *)((char *)v8 + 4 * v12);
        }
        while ( v7 < v6 );
      }
      v13 = v0;
      v14 = 32;
      v15 = 16LL * v0;
      *(_DWORD *)&v1[v15 + 16] = 14741536;
      *(_QWORD *)&v1[v15 + 24] = v8;
      do
      {
        v16 = _mm_cvtsi32_si128(v14);
        v14 += 4;
        *v8++ = _mm_add_epi32(_mm_shuffle_epi32(v16, 0), (__m128i)_xmm);
      }
      while ( v14 < 256 );
      if ( v0 < v6 )
      {
        v17 = (__int64)&v1[v15 + 34];
        v18 = (char *)((char *)v3 - v1);
        v19 = v6 - v13;
        do
        {
          *(_WORD *)(v17 - 2) = *(_WORD *)&v18[v17 - 18];
          *(_WORD *)v17 = *(_WORD *)&v18[v17 - 16];
          *(_QWORD *)(v17 + 6) = v8;
          memmove(v8, *(const void **)&v18[v17 - 10], 4LL * *(unsigned __int16 *)&v18[v17 - 16]);
          v20 = *(unsigned __int16 *)&v18[v17 - 16];
          v17 += 16LL;
          v8 = (__m128i *)((char *)v8 + 4 * v20);
          --v19;
        }
        while ( v19 );
      }
    }
    EngFreeMem(v3);
  }
  return v1;
}
