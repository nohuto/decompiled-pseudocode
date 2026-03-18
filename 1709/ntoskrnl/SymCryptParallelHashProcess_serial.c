/*
 * XREFs of SymCryptParallelHashProcess_serial @ 0x14017A5D8
 * Callers:
 *     SymCryptParallelSha256Process @ 0x140179EE0 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140131CB0 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x14017A314 (SymCryptWipe.c)
 *     SymCryptFatal @ 0x140203CE0 (SymCryptFatal.c)
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
  _QWORD *v13; // r14
  unsigned __int64 v14; // rdx

  v8 = *a1;
  if ( a7 < 56 * a3 + *((unsigned int *)a1 + 2) )
    SymCryptFatal(1886597747LL);
  v11 = 0LL;
  result = 56 * a3 + *((unsigned int *)a1 + 2);
  if ( result <= 0x40 )
  {
    if ( (result & 1) != 0 )
      *(_BYTE *)(--result + a6) = 0;
    if ( (result & 2) != 0 )
    {
      result -= 2LL;
      *(_WORD *)(result + a6) = 0;
    }
    if ( (result & 4) != 0 )
    {
      result -= 4LL;
      *(_DWORD *)(result + a6) = 0;
    }
    if ( (result & 8) != 0 )
    {
      result -= 8LL;
      *(_QWORD *)(result + a6) = 0LL;
    }
    if ( (result & 0x10) != 0 )
    {
      result -= 16LL;
      *(_QWORD *)(result + a6) = 0LL;
      *(_QWORD *)(result + a6 + 8) = 0LL;
    }
    if ( (result & 0x20) != 0 )
    {
      result -= 32LL;
      *(_QWORD *)(result + a6) = 0LL;
      *(_QWORD *)(result + a6 + 8) = 0LL;
      *(_QWORD *)(result + a6 + 16) = 0LL;
      *(_QWORD *)(result + a6 + 24) = 0LL;
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
    result = SymCryptWipe();
  }
  if ( a5 )
  {
    v13 = (_QWORD *)(a4 + 24);
    do
    {
      v14 = *(v13 - 3);
      if ( v14 >= a3 )
        SymCryptFatal(1886597737LL);
      if ( *((_DWORD *)v13 - 4) == 1 )
      {
        result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(v8 + 8))(
                   a2 + v14 * *(unsigned int *)(v8 + 32),
                   *(v13 - 1),
                   *v13);
      }
      else
      {
        if ( *((_DWORD *)v13 - 4) != 2 )
          SymCryptFatal(1886597743LL);
        if ( *v13 != *(_DWORD *)(v8 + 36) )
          SymCryptFatal(1886597746LL);
        result = (*(__int64 (__fastcall **)(__int64, _QWORD))(v8 + 16))(
                   a2 + *(v13 - 3) * *(unsigned int *)(v8 + 32),
                   *(v13 - 1));
      }
      v13 += 5;
      ++v11;
    }
    while ( v11 < a5 );
  }
  return result;
}
