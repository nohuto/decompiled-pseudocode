/*
 * XREFs of RtlpGenericRandomPatternWorker @ 0x140241718
 * Callers:
 *     RtlScrubMemory @ 0x14024108C (RtlScrubMemory.c)
 * Callees:
 *     RtlpFillMemoryRandomUp @ 0x1402411C4 (RtlpFillMemoryRandomUp.c)
 *     RtlpTestMemoryRandomUp @ 0x140241C28 (RtlpTestMemoryRandomUp.c)
 */

char __fastcall RtlpGenericRandomPatternWorker(unsigned __int64 a1)
{
  char *v2; // rdi
  unsigned int v3; // ebp
  __int64 *v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CFlushSize; // rdx
  char *i; // rcx
  char *v13; // rdx
  unsigned __int64 v14; // rax
  struct _KPRCB *v15; // rax
  __int64 v16; // rdx
  char *j; // rcx
  unsigned __int64 v18; // r9
  unsigned __int64 *v19; // r8
  unsigned __int64 v20; // rdx
  struct _KPRCB *v21; // rax
  __int64 v22; // rdx
  char *k; // rcx
  struct _KPRCB *v24; // r9
  __int64 v25; // rdx
  char *m; // rcx
  char *v27; // rdx
  unsigned __int64 v28; // rcx
  struct _KPRCB *v29; // rax
  __int64 v30; // rdx
  char *n; // rcx
  char *v32; // rdx
  unsigned __int64 v33; // rcx
  struct _KPRCB *v34; // rax
  __int64 v35; // rdx
  char *ii; // rcx
  char *v37; // rdx
  signed __int32 v39[14]; // [rsp+0h] [rbp-38h] BYREF

  v2 = (char *)(a1 + 4096);
  v3 = 0;
  v4 = (__int64 *)&GlfsrXorLookupTables;
LABEL_2:
  v5 = *v4;
  v6 = *(_QWORD *)RtlpSeedGlfsr;
  v7 = 0;
  v8 = (unsigned int)__rdtsc();
  do
  {
    v9 = (v8 & (1LL << v7)) << v7;
    ++v7;
    v6 ^= v9;
  }
  while ( v7 < 0x20 );
  RtlpFillMemoryRandomUp(a1, v8, v6, v5);
  CurrentPrcb = KeGetCurrentPrcb();
  CFlushSize = CurrentPrcb->CFlushSize;
  if ( CurrentPrcb->CFlushSize )
  {
    _InterlockedOr(v39, 0);
    for ( i = (char *)(a1 & ~(CFlushSize - 1)); i < v2; i += CFlushSize )
      _mm_clflush(i);
  }
  v13 = (char *)a1;
  v14 = v6;
  if ( a1 >= (unsigned __int64)v2 )
  {
LABEL_12:
    v15 = KeGetCurrentPrcb();
    v16 = v15->CFlushSize;
    if ( v15->CFlushSize )
    {
      _InterlockedOr(v39, 0);
      for ( j = (char *)(a1 & ~(v16 - 1)); j < v2; j += v16 )
        _mm_clflush(j);
    }
    if ( (unsigned __int8)RtlpTestMemoryRandomUp(a1, v16, v6, v5) )
    {
      v18 = 0LL;
      v19 = (unsigned __int64 *)a1;
      v20 = v6;
      if ( ((unsigned __int64)v2 >= a1 ? 0x200 : 0) != 0 )
      {
        do
        {
          ++v18;
          *v19++ = ~v20;
          v20 = (v20 >> 4) ^ *(_QWORD *)(v5 + 8 * (v20 & 0xF));
        }
        while ( v18 < ((unsigned __int64)v2 >= a1 ? 0x200 : 0) );
      }
      v21 = KeGetCurrentPrcb();
      v22 = v21->CFlushSize;
      if ( v21->CFlushSize )
      {
        _InterlockedOr(v39, 0);
        for ( k = (char *)(a1 & ~(v22 - 1)); k < v2; k += v22 )
          _mm_clflush(k);
      }
      RtlpFillMemoryRandomUp(a1, v22, v6, v5);
      v24 = KeGetCurrentPrcb();
      v25 = v24->CFlushSize;
      if ( v24->CFlushSize )
      {
        _InterlockedOr(v39, 0);
        for ( m = (char *)(a1 & ~(v25 - 1)); m < v2; m += v25 )
          _mm_clflush(m);
      }
      if ( (unsigned __int8)RtlpTestMemoryRandomUp(a1, v25, v6, v5) )
      {
        v27 = v2;
        v28 = v6;
        do
        {
          v27 -= 8;
          *(_QWORD *)v27 = ~v28;
          v28 = (v28 >> 4) ^ *(_QWORD *)(v5 + 8 * (v28 & 0xF));
        }
        while ( v27 != (char *)a1 );
        v29 = KeGetCurrentPrcb();
        v30 = v29->CFlushSize;
        if ( v29->CFlushSize )
        {
          _InterlockedOr(v39, 0);
          for ( n = (char *)(a1 & ~(v30 - 1)); n < v2; n += v30 )
            _mm_clflush(n);
        }
        v32 = v2;
        v33 = v6;
        do
        {
          v32 -= 8;
          *(_QWORD *)v32 = v33;
          v33 = (v33 >> 4) ^ *(_QWORD *)(v5 + 8 * (v33 & 0xF));
        }
        while ( v32 != (char *)a1 );
        v34 = KeGetCurrentPrcb();
        v35 = v34->CFlushSize;
        if ( v34->CFlushSize )
        {
          _InterlockedOr(v39, 0);
          for ( ii = (char *)(a1 & ~(v35 - 1)); ii < v2; ii += v35 )
            _mm_clflush(ii);
        }
        v37 = v2;
        while ( *((_DWORD *)v37 - 1) == HIDWORD(v6) )
        {
          v37 -= 8;
          if ( *(_DWORD *)v37 != (_DWORD)v6 )
            break;
          v6 = (v6 >> 4) ^ *(_QWORD *)(v5 + 8 * (v6 & 0xF));
          if ( v37 == (char *)a1 )
          {
            ++v3;
            ++v4;
            if ( v3 < 5 )
              goto LABEL_2;
            return 1;
          }
        }
      }
    }
  }
  else
  {
    while ( *(_DWORD *)v13 == (_DWORD)v14 )
    {
      *(_DWORD *)v13 = v14;
      if ( *((_DWORD *)v13 + 1) != HIDWORD(v14) )
        break;
      *((_DWORD *)v13 + 1) = HIDWORD(v14);
      v13 += 8;
      v14 = (v14 >> 4) ^ *(_QWORD *)(v5 + 8 * (v14 & 0xF));
      if ( v13 >= v2 )
        goto LABEL_12;
    }
  }
  return 0;
}
