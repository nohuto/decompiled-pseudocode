/*
 * XREFs of SymCryptParallelHashProcess_serial @ 0x1401A4E60
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1401A476C (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x1401A4B94 (SymCryptWipe.c)
 *     SymCryptFatal @ 0x140241294 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptParallelHashProcess_serial(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  __int64 v7; // r10
  __int64 v9; // rbp
  __int64 v11; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // r14
  unsigned __int64 v20; // rdx

  v7 = *((unsigned int *)a1 + 2);
  v9 = *a1;
  v11 = 56 * a3;
  if ( a7 < 56 * a3 + v7 )
    SymCryptFatal(1886597747LL);
  v13 = 0LL;
  v14 = v11 + (unsigned int)v7;
  if ( v14 <= 0x40 )
  {
    if ( (v14 & 1) != 0 )
      *(_BYTE *)(v14 + a6 - 1) = 0;
    v16 = v14 - 1;
    if ( (v14 & 1) == 0 )
      v16 = v11 + (unsigned int)v7;
    if ( (v16 & 2) != 0 )
      *(_WORD *)(v16 + a6 - 2) = 0;
    v17 = v16 - 2;
    if ( (v16 & 2) == 0 )
      v17 = v16;
    if ( (v17 & 4) != 0 )
      *(_DWORD *)(v17 + a6 - 4) = 0;
    v18 = v17 - 4;
    if ( (v17 & 4) == 0 )
      v18 = v17;
    if ( (v18 & 8) != 0 )
      *(_QWORD *)(v18 + a6 - 8) = 0LL;
    result = v18 - 8;
    if ( (v18 & 8) == 0 )
      result = v18;
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
    v19 = (_QWORD *)(a4 + 24);
    do
    {
      v20 = *(v19 - 3);
      if ( v20 >= a3 )
        SymCryptFatal(1886597737LL);
      if ( *((_DWORD *)v19 - 4) == 1 )
      {
        result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(v9 + 8))(
                   a2 + v20 * *(unsigned int *)(v9 + 32),
                   *(v19 - 1),
                   *v19);
      }
      else
      {
        if ( *((_DWORD *)v19 - 4) != 2 )
          SymCryptFatal(1886597743LL);
        if ( *v19 != *(_DWORD *)(v9 + 36) )
          SymCryptFatal(1886597746LL);
        result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v9 + 16))(
                   a2 + v20 * *(unsigned int *)(v9 + 32),
                   *(v19 - 1));
      }
      v19 += 5;
      ++v13;
    }
    while ( v13 < a5 );
  }
  return result;
}
