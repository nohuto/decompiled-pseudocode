/*
 * XREFs of sub_180095910 @ 0x180095910
 * Callers:
 *     sub_180095A28 @ 0x180095A28 (sub_180095A28.c)
 * Callees:
 *     sub_180089B84 @ 0x180089B84 (sub_180089B84.c)
 *     sub_180089DC4 @ 0x180089DC4 (sub_180089DC4.c)
 *     ZwQueryPerformanceCounter @ 0x1800A5920 (ZwQueryPerformanceCounter.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A9950 (RtlGetCurrentProcessorNumber.c)
 *     sub_1800F6928 @ 0x1800F6928 (sub_1800F6928.c)
 */

__int64 __fastcall sub_180095910(PVOID a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  unsigned __int64 v10; // rbx
  ULONG CurrentProcessorNumber; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  signed __int32 v14; // eax
  unsigned __int64 v15; // r8
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER v17; // [rsp+40h] [rbp+8h] BYREF

  if ( dword_18015C474 == 1 || a1 == qword_18015C450 )
    return 0LL;
  v6 = a3 - 2;
  if ( !v6 )
  {
LABEL_14:
    if ( a2 )
    {
      v10 = (a2 >> 3) | 0xE000000000000000uLL;
      if ( dword_18015C720 == 1 )
      {
        sub_180089B84((__int64)a1, v10);
      }
      else if ( dword_18015C720 == 2 )
      {
        CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
        v12 = CurrentProcessorNumber < dword_18015C470 ? CurrentProcessorNumber : 0;
        v13 = (unsigned int)v12;
        v14 = **(_DWORD **)(qword_18015C458 + 8 * v12);
        v15 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        if ( (unsigned int)(v15 - v14) >= 0x3E8
          && v14 == _InterlockedCompareExchange(
                      *(volatile signed __int32 **)(qword_18015C458 + 8LL * (unsigned int)v12),
                      v15,
                      v14) )
        {
          _InterlockedExchange64(
            (volatile __int64 *)(*(_QWORD *)(qword_18015C458 + 8LL * (unsigned int)v12) + 8LL),
            PerformanceFrequency.QuadPart / 100);
        }
        v5 = *(_QWORD *)(qword_18015C458 + 8LL * (unsigned int)v12);
        if ( *(__int64 *)(v5 + 8) <= 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24));
        }
        else
        {
          ZwQueryPerformanceCounter(&PerformanceCounter, 0LL);
          sub_180089B84((__int64)a1, v10);
          ZwQueryPerformanceCounter(&v17, 0LL);
          v17.QuadPart -= PerformanceCounter.QuadPart;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(qword_18015C458 + 8 * v13) + 8LL),
            -1 - v17.QuadPart);
          _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(qword_18015C458 + 8 * v13) + 16LL));
        }
      }
    }
    return 0LL;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 2;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 2 )
          sub_1800F6928();
        return 0LL;
      }
      goto LABEL_14;
    }
  }
  if ( a2 )
    sub_180089DC4((__int64)a1, (a2 >> 3) | 0xE000000000000000uLL);
  return 0LL;
}
