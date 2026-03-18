/*
 * XREFs of PpmSnapPerformanceAccumulation @ 0x140109F20
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x1400C6718 (PoGetPerfStateAndParkingInfo.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140109130 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140109AF0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmResetPerfTimes @ 0x14016CE7C (PpmResetPerfTimes.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x14027E930 (PpmCapturePerformanceDistributionCallback.c)
 *     PpmGetThroughputInfoCallback @ 0x14027EB50 (PpmGetThroughputInfoCallback.c)
 * Callees:
 *     PpmConvertTime @ 0x14003884C (PpmConvertTime.c)
 *     PpmUpdatePerformanceFeedback @ 0x14010D1C0 (PpmUpdatePerformanceFeedback.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

char __fastcall PpmSnapPerformanceAccumulation(
        LARGE_INTEGER *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        LARGE_INTEGER *a5)
{
  LARGE_INTEGER *v5; // r15
  LARGE_INTEGER v6; // r12
  LARGE_INTEGER v9; // rbp
  LARGE_INTEGER v10; // r13
  LARGE_INTEGER PerformanceCounter; // rsi
  signed __int64 QuadPart; // rax
  signed __int64 v13; // rtt
  char result; // al
  __int64 v15; // r8
  LARGE_INTEGER v16; // r8
  LARGE_INTEGER v17; // r9
  __int64 v18; // rax
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  LARGE_INTEGER v24; // rcx
  LARGE_INTEGER v25; // rax
  unsigned __int64 v28; // [rsp+38h] [rbp-60h]
  char v29; // [rsp+40h] [rbp-58h] BYREF

  v5 = 0LL;
  v6 = a1[3021];
  v9.QuadPart = 0LL;
  v10.QuadPart = 0LL;
  if ( a3 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    _m_prefetchw(&a1[2980]);
    QuadPart = a1[2980].QuadPart;
    do
    {
      v13 = QuadPart;
      QuadPart = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2980], QuadPart, QuadPart);
    }
    while ( v13 != QuadPart );
    v9.QuadPart = QuadPart;
    if ( QuadPart )
    {
      if ( a1[3003].LowPart == 3 )
      {
        v25 = a1[3082];
        v9.QuadPart = *(_QWORD *)(v25.QuadPart + 8LL * DWORD2(xmmword_1403E5A30)) >> 1;
        if ( (*(_QWORD *)(v25.QuadPart + 8LL * DWORD2(xmmword_1403E5A30)) & 1) == 0 )
          v9.QuadPart = 0LL;
      }
    }
    if ( !v9.QuadPart )
      return 0;
  }
  else
  {
    _disable();
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v21 = __rdtsc();
    if ( (a1[3156].QuadPart & 0x8000000000LL) != 0 )
      v22 = __readmsr(0xDB2u);
    else
      v22 = 0LL;
    v28 = v22;
    v23 = PerformanceCounter.QuadPart - a1[2990].QuadPart;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[2992], v23);
    if ( (a1[3156].QuadPart & 0x8000000000LL) != 0 )
    {
      a1[3001].QuadPart += PpmConvertTime(v23, v21 - a1[2986].QuadPart, v22 - a1[3000].QuadPart);
      v22 = v28;
    }
    v24 = a1[2986];
    a1[2990] = PerformanceCounter;
    if ( v21 > v24.QuadPart )
      a1[2987].QuadPart += v21 - v24.QuadPart;
    a1[2986].QuadPart = v21;
    v5 = 0LL;
    if ( (a1[3156].QuadPart & 0x8000000000LL) != 0 )
      a1[3000].QuadPart = v22;
  }
  memset(a5, 0, 0x50uLL);
  a5[7].QuadPart = a1[2941].QuadPart + a1[2951].QuadPart;
  if ( v6.QuadPart )
  {
    a5[8] = a1[2938];
    a5[9] = a1[2939];
  }
  if ( !a3 )
    _enable();
  if ( a1[3003].LowPart == 3 )
    v5 = (LARGE_INTEGER *)&v29;
  result = PpmUpdatePerformanceFeedback((_DWORD)a1, a2, a3, 0, (__int64)v5);
  if ( result )
  {
    if ( a4 && PopSnapEnergyCounters )
    {
      LOBYTE(v15) = 1;
      PopSnapEnergyCounters((unsigned int)a1[4].HighPart, a3, v15);
    }
    if ( v5 )
    {
      PerformanceCounter = *v5;
      v16 = v5[1];
      v17 = v5[2];
    }
    else
    {
      v10 = v9;
      if ( PerformanceCounter.QuadPart <= (unsigned __int64)v9.QuadPart )
        PerformanceCounter = v9;
      v16 = a1[2979];
      v17 = a1[2987];
    }
    if ( a1[2988].QuadPart )
    {
      v18 = a1[2993].QuadPart;
    }
    else if ( a1[2989].QuadPart )
    {
      v18 = a1[2994].QuadPart;
    }
    else
    {
      v18 = 100 * a1[2991].QuadPart;
    }
    a5[3].QuadPart = v18;
    if ( a1[2989].QuadPart )
      v18 = a1[2994].QuadPart;
    a5[4].QuadPart = v18;
    a5[5] = a1[2996];
    a5[2] = a1[3001];
    if ( !a3 )
    {
      if ( !v5 )
        v16.QuadPart += a1[2978].QuadPart;
      goto LABEL_33;
    }
    _m_prefetchw(&a1[2980]);
    v19 = a1[2980].QuadPart;
    do
    {
      v20 = v19;
      v19 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2980], v19, v19);
    }
    while ( v20 != v19 );
    if ( v19 )
    {
      if ( a1[3003].LowPart == 3 )
      {
        v19 = *(_QWORD *)(a1[3082].QuadPart + 8LL * DWORD2(xmmword_1403E5A30)) >> 1;
        if ( (*(_QWORD *)(a1[3082].QuadPart + 8LL * DWORD2(xmmword_1403E5A30)) & 1) == 0 )
          v19 = 0LL;
      }
    }
    if ( v9.QuadPart == v19 )
    {
      if ( !v5 )
        v16.QuadPart += PerformanceCounter.QuadPart - v10.QuadPart;
LABEL_33:
      *a5 = PerformanceCounter;
      result = 1;
      a5[6] = v17;
      a5[1].QuadPart = PerformanceCounter.QuadPart - v16.QuadPart;
      return result;
    }
    return 0;
  }
  return result;
}
