/*
 * XREFs of SymCryptParallelHashProcess @ 0x1401A4BA8
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1401A476C (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     SymCryptWipe @ 0x1401A4B94 (SymCryptWipe.c)
 *     SymCryptParallelHashSetNextWork @ 0x1401A5058 (SymCryptParallelHashSetNextWork.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SymCryptFatal @ 0x140241294 (SymCryptFatal.c)
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
  unsigned __int64 *i; // rdi
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rbx
  int v19; // eax
  unsigned __int64 v20; // rax
  size_t v21; // rbx
  char v22; // bp
  __int64 v23; // r12
  _QWORD *v24; // rdi
  _QWORD *v25; // r15
  char v26; // dl
  size_t v27; // rbp
  __int64 *v28; // r15
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  size_t j; // rbx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // [rsp+30h] [rbp-38h]
  __int64 v36; // [rsp+38h] [rbp-30h]
  __int64 v38; // [rsp+90h] [rbp+28h]

  result = a1;
  if ( a5 )
  {
    v38 = *(_QWORD *)a1;
    v36 = *(unsigned int *)(a1 + 8);
    v13 = (a6 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v14 = (_QWORD *)(48 * a3 + v13);
    v35 = ((unsigned __int64)&v14[a3 + 3] + 7) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v36 + v35 > a6 + a7 )
      SymCryptFatal(1886597678LL);
    memset((void *)((a6 + 15) & 0xFFFFFFFFFFFFFFF0uLL), 0, 48 * a3);
    v15 = 0LL;
    for ( i = (unsigned __int64 *)(a4 + 40 * a5); (unsigned __int64)i > a4; v18[3] = i )
    {
      i -= 5;
      v17 = *i;
      if ( *i >= a3 )
        SymCryptFatal(1886597752LL);
      v18 = (_QWORD *)(v13 + 48 * v17);
      if ( !*v18 )
      {
        *v18 = a2 + v17 * *(unsigned int *)(v38 + 32);
        v14[v15++] = v18;
      }
      v19 = *((_DWORD *)i + 2);
      if ( v19 == 1 )
      {
        v20 = i[3];
      }
      else
      {
        if ( v19 != 2 )
          SymCryptFatal(1886597753LL);
        v20 = *(unsigned int *)(v38 + 40);
      }
      v18[2] += v20;
      i[4] = v18[3];
    }
    v21 = 0LL;
    v22 = 1;
    v23 = *(_QWORD *)(*v14 + 16LL);
    if ( v15 )
    {
      v24 = &v14[v15 - 1];
      do
      {
        v25 = &v14[v21];
        if ( (unsigned __int8)SymCryptParallelHashSetNextWork(a1, *v25) )
        {
          v26 = 0;
          ++v21;
          if ( *(_QWORD *)(*v25 + 16LL) == v23 )
            v26 = v22;
          v22 = v26;
        }
        else
        {
          --v15;
          *v25 = *v24--;
        }
      }
      while ( v21 < v15 );
      if ( !v22 )
        qsort(v14, v15, 8uLL, compareRequestSize);
    }
    v27 = a8;
    if ( v15 < a8 )
      v27 = v15;
    v28 = &v14[v27];
    while ( v15 )
    {
      v29 = 1LL;
      v30 = *(_QWORD *)(*v14 + 40LL);
      while ( v29 < v27 )
      {
        v31 = v30;
        v30 = *(_QWORD *)(v14[v29] + 40LL);
        if ( v31 < v30 )
          v30 = v31;
        ++v29;
      }
      (*(void (__fastcall **)(_QWORD *, size_t, _QWORD, unsigned __int64, __int64))(a1 + 40))(
        v14,
        v27,
        (unsigned int)v30 & ~(*(_DWORD *)(v38 + 40) - 1),
        v35,
        v36);
      for ( j = 0LL; j < v27; ++j )
      {
        v33 = v14[j];
        if ( *(_QWORD *)(v33 + 40) < (unsigned __int64)*(unsigned int *)(v38 + 40)
          && !(unsigned __int8)SymCryptParallelHashSetNextWork(a1, v33) )
        {
          if ( v15 <= v27 )
          {
            v14[j--] = v14[--v27];
          }
          else
          {
            v34 = *v28++;
            v14[j] = v34;
          }
          --v15;
        }
      }
    }
    return SymCryptWipe();
  }
  return result;
}
