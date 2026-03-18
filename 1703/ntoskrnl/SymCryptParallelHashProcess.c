/*
 * XREFs of SymCryptParallelHashProcess @ 0x14017AAE0
 * Callers:
 *     SymCryptParallelSha256Process @ 0x14017A6A8 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     SymCryptWipe @ 0x14017AAD4 (SymCryptWipe.c)
 *     SymCryptParallelHashSetNextWork @ 0x14017AF64 (SymCryptParallelHashSetNextWork.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SymCryptFatal @ 0x1401FDBE0 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptParallelHashProcess(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 result; // rax
  unsigned __int64 v13; // rbp
  _QWORD *v14; // r14
  size_t v15; // rsi
  unsigned __int64 i; // rdi
  _QWORD *v17; // rbx
  int v18; // eax
  __int64 v19; // rax
  size_t v20; // rbx
  char v21; // bp
  __int64 v22; // r12
  _QWORD *v23; // rdi
  _QWORD *v24; // r15
  char v25; // dl
  size_t v26; // rbp
  __int64 *v27; // r15
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  size_t j; // rbx
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // [rsp+30h] [rbp-38h]
  __int64 v35; // [rsp+38h] [rbp-30h]
  __int64 v37; // [rsp+90h] [rbp+28h]

  result = a1;
  if ( a5 )
  {
    v37 = *(_QWORD *)a1;
    v35 = *(unsigned int *)(a1 + 8);
    v13 = (a6 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v14 = (_QWORD *)(48 * a3 + v13);
    v34 = ((unsigned __int64)&v14[a3 + 3] + 7) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v35 + v34 > a6 + a7 )
      SymCryptFatal(1886597678LL);
    memset((void *)((a6 + 15) & 0xFFFFFFFFFFFFFFF0uLL), 0, 48 * a3);
    v15 = 0LL;
    for ( i = a4 + 40 * a5; i > a4; v17[3] = i )
    {
      i -= 40LL;
      if ( *(_QWORD *)i >= a3 )
        SymCryptFatal(1886597752LL);
      v17 = (_QWORD *)(v13 + 48LL * *(_QWORD *)i);
      if ( !*v17 )
      {
        *v17 = a2 + *(_QWORD *)i * *(unsigned int *)(v37 + 32);
        v14[v15++] = v17;
      }
      v18 = *(_DWORD *)(i + 8);
      if ( v18 == 1 )
      {
        v19 = *(_QWORD *)(i + 24);
      }
      else
      {
        if ( v18 != 2 )
          SymCryptFatal(1886597753LL);
        v19 = *(unsigned int *)(v37 + 40);
      }
      v17[2] += v19;
      *(_QWORD *)(i + 32) = v17[3];
    }
    v20 = 0LL;
    v21 = 1;
    v22 = *(_QWORD *)(*v14 + 16LL);
    if ( v15 )
    {
      v23 = &v14[v15 - 1];
      do
      {
        v24 = &v14[v20];
        if ( (unsigned __int8)SymCryptParallelHashSetNextWork(a1, *v24) )
        {
          v25 = 0;
          ++v20;
          if ( *(_QWORD *)(*v24 + 16LL) == v22 )
            v25 = v21;
          v21 = v25;
        }
        else
        {
          --v15;
          *v24 = *v23--;
        }
      }
      while ( v20 < v15 );
      if ( !v21 )
        qsort(v14, v15, 8uLL, compareRequestSize);
    }
    v26 = a8;
    if ( v15 < a8 )
      v26 = v15;
    v27 = &v14[v26];
    while ( v15 )
    {
      v28 = 1LL;
      v29 = *(_QWORD *)(*v14 + 40LL);
      while ( v28 < v26 )
      {
        v30 = v14[v28];
        if ( v29 >= *(_QWORD *)(v30 + 40) )
          v29 = *(_QWORD *)(v30 + 40);
        ++v28;
      }
      (*(void (__fastcall **)(_QWORD *, size_t, _QWORD, unsigned __int64, __int64))(a1 + 40))(
        v14,
        v26,
        (unsigned int)v29 & ~(*(_DWORD *)(v37 + 40) - 1),
        v34,
        v35);
      for ( j = 0LL; j < v26; ++j )
      {
        v32 = v14[j];
        if ( *(_QWORD *)(v32 + 40) < (unsigned __int64)*(unsigned int *)(v37 + 40)
          && !(unsigned __int8)SymCryptParallelHashSetNextWork(a1, v32) )
        {
          if ( v15 <= v26 )
          {
            v14[j--] = v14[--v26];
          }
          else
          {
            v33 = *v27++;
            v14[j] = v33;
          }
          --v15;
        }
      }
    }
    return SymCryptWipe(v34, v35);
  }
  return result;
}
