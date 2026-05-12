/*
 * XREFs of StorpTelemetrySendUnitPerfData @ 0x1C0005D40
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000565C (StorpLogPerUnitStatistics.c)
 * Callees:
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C0004D40 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     McTemplateK0qcccjjzssxcxqqqqqxxxxxzqb @ 0x1C000514C (McTemplateK0qcccjjzssxcxqqqqqxxxxxzqb.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memmove @ 0x1C0017E00 (memmove.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0044C24 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 */

__int64 __fastcall StorpTelemetrySendUnitPerfData(__int64 a1)
{
  __int64 v2; // rdi
  void *Pool; // rsi
  void *v4; // r14
  LARGE_INTEGER v5; // rax
  LARGE_INTEGER v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r10
  const void *v10; // rdx
  unsigned int i; // r9d
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r10
  _QWORD *v15; // r9
  signed __int64 v16; // rdx
  __int64 v17; // r10
  signed __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // r9
  unsigned int v22; // eax
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  const wchar_t *v27; // rax
  __int64 v28; // r9
  unsigned int v29; // edi
  void *v30; // rcx
  int v32; // [rsp+68h] [rbp-100h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+E8h] [rbp-80h] BYREF
  _QWORD v34[16]; // [rsp+F8h] [rbp-70h] BYREF

  memset(v34, 0, 0x78uLL);
  v2 = (unsigned int)dword_1C00563E0;
  Pool = 0LL;
  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 1880) )
  {
    Pool = (void *)RaidAllocatePool(512LL, (unsigned int)Size, 1700028754LL, *(_QWORD *)(a1 + 8));
    if ( Pool
      && (v4 = (void *)RaidAllocatePool(512LL, (unsigned int)(8 * v2), 1700028754LL, *(_QWORD *)(a1 + 8))) != 0LL )
    {
      if ( UseQPCTime )
        v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v5.QuadPart = KeQueryUnbiasedInterruptTime();
      v6 = v5;
      if ( v5.QuadPart > 0 && (v7 = *(_QWORD *)(a1 + 1888), v5.QuadPart < v7) )
        v8 = v5.QuadPart - v7 - 1;
      else
        v8 = v5.QuadPart - *(_QWORD *)(a1 + 1888);
      if ( UseQPCTime )
      {
        v9 = 0LL;
        if ( PerformanceFrequency.QuadPart && v8 )
          v9 = 10000
             * (1000 * (v8 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
             / PerformanceFrequency.QuadPart
             + 10000
             * (1000 * (v8 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
              + 1000 * (v8 / PerformanceFrequency.QuadPart));
      }
      else
      {
        v9 = v8;
      }
      qword_1C00563F0 = v6.QuadPart;
      v10 = *(const void **)(a1 + 1880);
      *(LARGE_INTEGER *)(a1 + 1888) = v6;
      v34[4] = v9;
      memmove(Pool, v10, (unsigned int)Size);
      for ( i = 1; i < g_RaidNumberProcessors; ++i )
      {
        if ( (_DWORD)v2 )
        {
          v12 = Pool;
          v13 = i * (unsigned int)dword_1C00563E4;
          v14 = v2;
          do
          {
            *v12 += *(_QWORD *)((char *)v12 + v13);
            ++v12;
            --v14;
          }
          while ( v14 );
        }
      }
      memset(v4, 0, (unsigned int)(8 * v2));
      v15 = *(_QWORD **)(a1 + 1896);
      v34[12] = 0LL;
      if ( (_DWORD)v2 )
      {
        v16 = (_BYTE *)Pool - (_BYTE *)v15;
        v17 = v2;
        v18 = (_BYTE *)v4 - (_BYTE *)v15;
        do
        {
          v19 = *(_QWORD *)((char *)v15 + v16) - *v15;
          *(_QWORD *)((char *)v15++ + v18) = v19;
          v34[12] += v19;
          --v17;
        }
        while ( v17 );
        v15 = *(_QWORD **)(a1 + 1896);
      }
      memmove(v15, Pool, (unsigned int)dword_1C00563E4);
      if ( v34[12] )
      {
        v34[12] = 0LL;
        if ( (_WORD)TelemetryPerfContext )
        {
          if ( HIWORD(TelemetryPerfContext) )
          {
            v20 = 0LL;
            if ( (_DWORD)v2 )
            {
              v21 = v4;
              do
              {
                if ( (unsigned int)v20 < dword_1C00563DC && (unsigned int)v20 >= dword_1C00563AC )
                {
                  v22 = (unsigned int)v20
                      / ((unsigned __int16)TelemetryPerfContext
                       * (unsigned int)HIWORD(TelemetryPerfContext));
                  if ( v22 >= 5 )
                    v22 = 4;
                  v34[v22 + 7] += *v21;
                  v34[12] += *v21;
                }
                v20 = (unsigned int)(v20 + 1);
                ++v21;
              }
              while ( (unsigned int)v20 < (unsigned int)v2 );
            }
          }
        }
        v23 = *(_QWORD *)(a1 + 1904);
        if ( v23 )
        {
          v24 = v34[14];
          v20 = 0LL;
          do
          {
            v25 = dword_1C00563F8 * (unsigned int)(unsigned __int16)v20;
            if ( *(_QWORD *)(v25 + v23) > v24 )
              v24 = *(_QWORD *)(v25 + v23);
            LOWORD(v20) = v20 + 1;
            v34[14] = v24;
          }
          while ( (unsigned __int16)v20 <= (unsigned __int16)g_RaidNumaHighestNodeNumber );
        }
        v26 = *(_QWORD *)(a1 + 96);
        if ( v26 )
        {
          v34[0] = *(_QWORD *)(v26 + 8);
          *(_OWORD *)((char *)&v34[1] + 1) = *(_OWORD *)(v26 + 16);
        }
        v34[13] = v4;
        if ( g_StorpTraceLoggingPerformanceHighResolutionTimer )
        {
          LOBYTE(v34[5]) = 8;
          v27 = L"2ms, 64ms, 2048ms, 5120ms, 5120+ms";
        }
        else
        {
          LOBYTE(v34[5]) = 7;
          v27 = L"16ms, 64ms, 2048ms, 5120ms, 5120+ms";
        }
        v34[6] = v27;
        if ( LOBYTE(WPP_MAIN_CB.Reserved) == 1 && !HIDWORD(WPP_MAIN_CB.Reserved)
          || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
        {
          goto LABEL_51;
        }
        if ( (*(_DWORD *)(a1 + 1736) & 0x10) != 0 )
          HIDWORD(WPP_MAIN_CB.Reserved) = -1;
        if ( *(_BYTE *)(a1 + 1740) )
          HIDWORD(WPP_MAIN_CB.Reserved) = -1;
        if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
          HIDWORD(WPP_MAIN_CB.Reserved) = -1;
        if ( HIDWORD(WPP_MAIN_CB.Reserved) )
          StorpTelemetryLogUnitPerfDataCriticalData(a1, v34, v20);
        else
LABEL_51:
          StorpTelemetryLogUnitPerfDataMeasures((const struct _TlgProvider_t *)a1, (__int64)v34);
        if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 2) != 0 )
        {
          v28 = *(_QWORD *)(a1 + 24);
          McTemplateK0qcccjjzssxcxqqqqqxxxxxzqb(
            *(_QWORD *)(a1 + 1912) / 0x2710uLL,
            v34[14] / 0x2710uLL,
            *(_QWORD *)(a1 + 1920) / 0x2710uLL,
            *(_DWORD *)(v28 + 56),
            *(_BYTE *)(a1 + 88),
            *(_BYTE *)(a1 + 89),
            *(_BYTE *)(a1 + 90),
            a1 + 1720,
            v28 + 5192,
            *(const wchar_t **)(v28 + 4800),
            (const char *)v34,
            (const char *)&v34[1] + 1,
            v32,
            v34[5],
            v34[12],
            *(_DWORD *)(a1 + 556),
            *(_DWORD *)(a1 + 560),
            v34[14] / 0x2710uLL,
            *(_QWORD *)(a1 + 1912) / 0x2710uLL,
            *(_QWORD *)(a1 + 1920) / 0x2710uLL,
            v34[7],
            v34[8],
            v34[9],
            v34[10],
            v34[11],
            (const wchar_t *)v34[6],
            8 * v2,
            (__int64)v4);
        }
      }
      v29 = 0;
    }
    else
    {
      v29 = -1073741801;
    }
  }
  else
  {
    v29 = -1073741823;
  }
  v30 = *(void **)(a1 + 1904);
  *(_QWORD *)(a1 + 556) = 0LL;
  if ( v30 )
    memset(v30, 0, (unsigned int)dword_1C00563FC);
  *(_QWORD *)(a1 + 1912) = 0LL;
  *(_QWORD *)(a1 + 1920) = 0LL;
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x65546152u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x65546152u);
  return v29;
}
