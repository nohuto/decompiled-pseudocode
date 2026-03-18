/*
 * XREFs of PpmSnapPerformanceAccumulation @ 0x1400F3740
 * Callers:
 *     PpmPerfAction @ 0x1400F2880 (PpmPerfAction.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1400F3250 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmResetPerfTimes @ 0x140148770 (PpmResetPerfTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1402331F0 (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x140233540 (PpmCapturePerformanceDistributionCallback.c)
 *     PpmGetThroughputInfoCallback @ 0x1402336A0 (PpmGetThroughputInfoCallback.c)
 * Callees:
 *     PpmConvertTime @ 0x1400890C4 (PpmConvertTime.c)
 *     PpmUpdatePerformanceFeedback @ 0x1400F5DE0 (PpmUpdatePerformanceFeedback.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 */

char __fastcall PpmSnapPerformanceAccumulation(
        LARGE_INTEGER *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        LARGE_INTEGER *a5)
{
  LARGE_INTEGER v5; // r14
  LARGE_INTEGER v9; // rsi
  LARGE_INTEGER v10; // r12
  LARGE_INTEGER PerformanceCounter; // r15
  signed __int64 QuadPart; // rax
  signed __int64 v13; // rtt
  LARGE_INTEGER *v14; // r14
  char result; // al
  __int64 v16; // r8
  LARGE_INTEGER v17; // r9
  LARGE_INTEGER v18; // r10
  LARGE_INTEGER v19; // r8
  __int64 v20; // rax
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  LARGE_INTEGER v26; // rcx
  LARGE_INTEGER v27; // rax
  unsigned __int64 v29; // [rsp+38h] [rbp-70h]
  char v30; // [rsp+48h] [rbp-60h] BYREF

  v5 = a1[3037];
  v9.QuadPart = 0LL;
  v10.QuadPart = 0LL;
  if ( a3 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    _m_prefetchw(&a1[2996]);
    QuadPart = a1[2996].QuadPart;
    do
    {
      v13 = QuadPart;
      QuadPart = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2996], QuadPart, QuadPart);
    }
    while ( v13 != QuadPart );
    v9.QuadPart = QuadPart;
    if ( QuadPart )
    {
      if ( a1[3019].LowPart == 3 )
      {
        v27 = a1[3106];
        v9.QuadPart = *(_QWORD *)(v27.QuadPart + 8LL * DWORD2(xmmword_140389228)) >> 1;
        if ( (*(_QWORD *)(v27.QuadPart + 8LL * DWORD2(xmmword_140389228)) & 1) == 0 )
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
    v23 = __rdtsc();
    if ( (a1[3197].QuadPart & 0x8000000000LL) != 0 )
      v24 = __readmsr(0xDB2u);
    else
      v24 = 0LL;
    v29 = v24;
    v25 = PerformanceCounter.QuadPart - a1[3006].QuadPart;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[3008], v25);
    if ( (a1[3197].QuadPart & 0x8000000000LL) != 0 )
    {
      a1[3017].QuadPart += PpmConvertTime(v25, v23 - a1[3002].QuadPart, v24 - a1[3016].QuadPart);
      v24 = v29;
    }
    v26 = a1[3002];
    a1[3006] = PerformanceCounter;
    if ( v23 > v26.QuadPart )
      a1[3003].QuadPart += v23 - v26.QuadPart;
    a1[3002].QuadPart = v23;
    v10.QuadPart = 0LL;
    if ( (a1[3197].QuadPart & 0x8000000000LL) != 0 )
      a1[3016].QuadPart = v24;
  }
  memset(a5, 0, 0x50uLL);
  a5[7].QuadPart = a1[2941].QuadPart + a1[2959].QuadPart;
  if ( v5.QuadPart )
  {
    a5[8] = a1[2938];
    a5[9] = a1[2939];
  }
  if ( !a3 )
    _enable();
  v14 = 0LL;
  if ( a1[3019].LowPart == 3 )
    v14 = (LARGE_INTEGER *)&v30;
  result = PpmUpdatePerformanceFeedback((_DWORD)a1, a2, a3, 0, (__int64)v14);
  if ( result )
  {
    if ( a4 && PopSnapEnergyCounters )
    {
      LOBYTE(v16) = 1;
      PopSnapEnergyCounters((unsigned int)a1[4].HighPart, a3, v16);
    }
    if ( v14 )
    {
      v19 = *v14;
      v17 = v14[1];
      v18 = v14[2];
    }
    else
    {
      v17 = a1[2995];
      v18 = a1[3003];
      v19 = v9;
      if ( PerformanceCounter.QuadPart > (unsigned __int64)v9.QuadPart )
        v19 = PerformanceCounter;
      v10 = v9;
    }
    if ( a1[3004].QuadPart )
    {
      v20 = a1[3009].QuadPart;
    }
    else if ( a1[3005].QuadPart )
    {
      v20 = a1[3010].QuadPart;
    }
    else
    {
      v20 = 100 * a1[3007].QuadPart;
    }
    a5[3].QuadPart = v20;
    if ( a1[3005].QuadPart )
      v20 = a1[3010].QuadPart;
    a5[4].QuadPart = v20;
    a5[5] = a1[3012];
    a5[2] = a1[3017];
    if ( !a3 )
    {
      if ( !v14 )
        v17.QuadPart += a1[2994].QuadPart;
      goto LABEL_33;
    }
    _m_prefetchw(&a1[2996]);
    v21 = a1[2996].QuadPart;
    do
    {
      v22 = v21;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2996], v21, v21);
    }
    while ( v22 != v21 );
    if ( v21 )
    {
      if ( a1[3019].LowPart == 3 )
      {
        v21 = *(_QWORD *)(a1[3106].QuadPart + 8LL * DWORD2(xmmword_140389228)) >> 1;
        if ( (*(_QWORD *)(a1[3106].QuadPart + 8LL * DWORD2(xmmword_140389228)) & 1) == 0 )
          v21 = 0LL;
      }
    }
    if ( v9.QuadPart == v21 )
    {
      if ( !v14 )
        v17.QuadPart += v19.QuadPart - v10.QuadPart;
LABEL_33:
      *a5 = v19;
      result = 1;
      a5[6] = v18;
      a5[1].QuadPart = v19.QuadPart - v17.QuadPart;
      return result;
    }
    return 0;
  }
  return result;
}
