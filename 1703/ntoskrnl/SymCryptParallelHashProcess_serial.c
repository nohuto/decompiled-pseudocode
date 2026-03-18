/*
 * XREFs of SymCryptParallelHashProcess_serial @ 0x14017AD90
 * Callers:
 *     SymCryptParallelSha256Process @ 0x14017A6A8 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x14017AAD4 (SymCryptWipe.c)
 *     SymCryptFatal @ 0x1401FDBE0 (SymCryptFatal.c)
 */

unsigned __int64 __fastcall SymCryptParallelHashProcess_serial(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  __int64 v8; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  _QWORD *v19; // r14
  unsigned __int64 v20; // rdx

  v8 = *a1;
  if ( a7 < 56 * a3 + *((unsigned int *)a1 + 2) )
    SymCryptFatal(1886597747LL);
  v11 = 0LL;
  result = 56 * a3 + *((unsigned int *)a1 + 2);
  v13 = result;
  if ( result <= 0x40 )
  {
    if ( (result & 1) != 0 )
    {
      --result;
      *(_BYTE *)(v13 + a6 - 1) = 0;
    }
    v14 = result;
    if ( (result & 2) != 0 )
    {
      result -= 2LL;
      *(_WORD *)(v14 + a6 - 2) = 0;
    }
    v15 = result;
    if ( (result & 4) != 0 )
    {
      result -= 4LL;
      *(_DWORD *)(v15 + a6 - 4) = 0;
    }
    v16 = result;
    if ( (result & 8) != 0 )
    {
      result -= 8LL;
      *(_QWORD *)(v16 + a6 - 8) = 0LL;
    }
    v17 = result;
    if ( (result & 0x10) != 0 )
    {
      *(_QWORD *)(result + a6 - 16) = 0LL;
      result -= 16LL;
      *(_QWORD *)(v17 + a6 - 8) = 0LL;
    }
    v18 = result;
    if ( (result & 0x20) != 0 )
    {
      *(_QWORD *)(result + a6 - 32) = 0LL;
      result -= 32LL;
      *(_QWORD *)(v18 + a6 - 24) = 0LL;
      *(_QWORD *)(v18 + a6 - 16) = 0LL;
      *(_QWORD *)(v18 + a6 - 8) = 0LL;
    }
    if ( (result & 0x40) != 0 )
    {
      *(_QWORD *)(result + a6 - 64) = 0LL;
      *(_QWORD *)(result + a6 - 56) = 0LL;
      *(_QWORD *)(result + a6 - 48) = 0LL;
      *(_QWORD *)(result + a6 - 40) = 0LL;
      *(_QWORD *)(result + a6 - 32) = 0LL;
      *(_QWORD *)(result + a6 - 24) = 0LL;
      *(_QWORD *)(result + a6 - 16) = 0LL;
      *(_QWORD *)(result + a6 - 8) = 0LL;
    }
  }
  else
  {
    result = SymCryptWipe(a6, result);
  }
  if ( a5 )
  {
    v19 = (_QWORD *)(a4 + 24);
    do
    {
      v20 = *(v19 - 3);
      if ( v20 >= a3 )
        SymCryptFatal(1886597737LL);
      if ( *((_DWORD *)v19 - 4) == 1 )
      {
        result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(v8 + 8))(
                   a2 + v20 * *(unsigned int *)(v8 + 32),
                   *(v19 - 1),
                   *v19);
      }
      else
      {
        if ( *((_DWORD *)v19 - 4) != 2 )
          SymCryptFatal(1886597743LL);
        if ( *v19 != *(_DWORD *)(v8 + 36) )
          SymCryptFatal(1886597746LL);
        result = (*(__int64 (__fastcall **)(__int64, _QWORD))(v8 + 16))(
                   a2 + *(v19 - 3) * *(unsigned int *)(v8 + 32),
                   *(v19 - 1));
      }
      v19 += 5;
      ++v11;
    }
    while ( v11 < a5 );
  }
  return result;
}
