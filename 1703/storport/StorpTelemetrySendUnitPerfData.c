/*
 * XREFs of StorpTelemetrySendUnitPerfData @ 0x1C00041F0
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000314C (StorpLogPerUnitStatistics.c)
 * Callees:
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C0002748 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     Template_qcccjjzssxcxqqqqqxxxxxzqb @ 0x1C0002C9C (Template_qcccjjzssxcxqqqqqxxxxxzqb.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C004417C (StorpTelemetryLogUnitPerfDataCriticalData.c)
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
  unsigned int v11; // r11d
  unsigned int i; // r9d
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r10
  _QWORD *v16; // rdx
  signed __int64 v17; // r8
  __int64 v18; // r10
  signed __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int16 v22; // r10
  unsigned __int16 v23; // r11
  unsigned int v24; // r15d
  _QWORD *v25; // r9
  unsigned int v26; // r12d
  unsigned int v27; // eax
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  const wchar_t *v32; // rax
  int SecurityDescriptor; // ecx
  unsigned int v34; // edi
  void *v35; // rcx
  int v37; // [rsp+68h] [rbp-100h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+E8h] [rbp-80h] BYREF
  _QWORD v39[16]; // [rsp+F8h] [rbp-70h] BYREF

  memset(v39, 0, 0x78uLL);
  v2 = (unsigned int)dword_1C00553C0;
  Pool = 0LL;
  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 1848) )
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
      if ( v5.QuadPart > 0 && (v7 = *(_QWORD *)(a1 + 1856), v5.QuadPart < v7) )
        v8 = v5.QuadPart - v7 - 1;
      else
        v8 = v5.QuadPart - *(_QWORD *)(a1 + 1856);
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
      qword_1C00553D0 = v6.QuadPart;
      v10 = *(const void **)(a1 + 1848);
      *(LARGE_INTEGER *)(a1 + 1856) = v6;
      v39[4] = v9;
      memmove(Pool, v10, (unsigned int)Size);
      v11 = g_RaidNumberProcessors;
      for ( i = 1; i < v11; ++i )
      {
        if ( (_DWORD)v2 )
        {
          v13 = Pool;
          v14 = i * (unsigned int)dword_1C00553C4;
          v15 = v2;
          do
          {
            *v13 += *(_QWORD *)((char *)v13 + v14);
            ++v13;
            --v15;
          }
          while ( v15 );
        }
      }
      memset(v4, 0, (unsigned int)(8 * v2));
      v16 = *(_QWORD **)(a1 + 1864);
      v39[12] = 0LL;
      if ( (_DWORD)v2 )
      {
        v17 = (_BYTE *)Pool - (_BYTE *)v16;
        v18 = v2;
        v19 = (_BYTE *)v4 - (_BYTE *)v16;
        do
        {
          v20 = *(_QWORD *)((char *)v16 + v17) - *v16;
          *(_QWORD *)((char *)v16++ + v19) = v20;
          v39[12] += v20;
          --v18;
        }
        while ( v18 );
      }
      memmove(*(void **)(a1 + 1864), Pool, (unsigned int)dword_1C00553C4);
      if ( v39[12] )
      {
        v22 = TelemetryPerfContext;
        v39[12] = 0LL;
        if ( (_WORD)TelemetryPerfContext )
        {
          v23 = HIWORD(TelemetryPerfContext);
          if ( HIWORD(TelemetryPerfContext) )
          {
            v21 = 0LL;
            if ( (_DWORD)v2 )
            {
              v24 = dword_1C00553BC;
              v25 = v4;
              v26 = dword_1C005538C;
              do
              {
                if ( (unsigned int)v21 < v24 && (unsigned int)v21 >= v26 )
                {
                  v27 = (unsigned int)v21 / (v22 * (unsigned int)v23);
                  if ( v27 >= 5 )
                    v27 = 4;
                  v39[v27 + 7] += *v25;
                  v39[12] += *v25;
                }
                v21 = (unsigned int)(v21 + 1);
                ++v25;
              }
              while ( (unsigned int)v21 < (unsigned int)v2 );
            }
          }
        }
        v28 = *(_QWORD *)(a1 + 1872);
        if ( v28 )
        {
          v21 = 0LL;
          v29 = v39[14];
          do
          {
            v30 = dword_1C00553D8 * (unsigned int)(unsigned __int16)v21;
            if ( *(_QWORD *)(v30 + v28) > v29 )
              v29 = *(_QWORD *)(v30 + v28);
            LOWORD(v21) = v21 + 1;
            v39[14] = v29;
          }
          while ( (unsigned __int16)v21 <= (unsigned __int16)g_RaidNumaHighestNodeNumber );
        }
        v31 = *(_QWORD *)(a1 + 96);
        if ( v31 )
        {
          v39[0] = *(_QWORD *)(v31 + 8);
          *(_OWORD *)((char *)&v39[1] + 1) = *(_OWORD *)(v31 + 16);
        }
        v39[13] = v4;
        if ( g_StorpTraceLoggingPerformanceHighResolutionTimer )
        {
          LOBYTE(v39[5]) = 8;
          v32 = L"2ms, 64ms, 2048ms, 5120ms, 5120+ms";
        }
        else
        {
          LOBYTE(v39[5]) = 7;
          v32 = L"16ms, 64ms, 2048ms, 5120ms, 5120+ms";
        }
        SecurityDescriptor = (int)WPP_MAIN_CB.SecurityDescriptor;
        v39[6] = v32;
        if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !LODWORD(WPP_MAIN_CB.SecurityDescriptor)
          || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
        {
          goto LABEL_50;
        }
        if ( *(_BYTE *)(a1 + 1704) )
        {
          SecurityDescriptor = -1;
          LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
        }
        if ( *(_BYTE *)(a1 + 1705) )
        {
          SecurityDescriptor = -1;
          LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
        }
        if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
        {
          SecurityDescriptor = -1;
          LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
        }
        if ( SecurityDescriptor )
          StorpTelemetryLogUnitPerfDataCriticalData(a1, v39, v21);
        else
LABEL_50:
          StorpTelemetryLogUnitPerfDataMeasures((const struct _TlgProvider_t *)a1, (__int64)v39);
        if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 2) != 0 )
          Template_qcccjjzssxcxqqqqqxxxxxzqb(
            *(_QWORD *)(a1 + 1880) / 0x2710uLL,
            v39[14] / 0x2710uLL,
            *(_QWORD *)(a1 + 1888) / 0x2710uLL,
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
            *(_BYTE *)(a1 + 88),
            *(_BYTE *)(a1 + 89),
            *(_BYTE *)(a1 + 90),
            a1 + 1688,
            *(_QWORD *)(a1 + 24) + 5192LL,
            *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4800LL),
            (const char *)v39,
            (const char *)&v39[1] + 1,
            v37,
            v39[5],
            v39[12],
            *(_DWORD *)(a1 + 528),
            *(_DWORD *)(a1 + 532),
            v39[14] / 0x2710uLL,
            *(_QWORD *)(a1 + 1880) / 0x2710uLL,
            *(_QWORD *)(a1 + 1888) / 0x2710uLL,
            v39[7],
            v39[8],
            v39[9],
            v39[10],
            v39[11],
            (const wchar_t *)v39[6],
            8 * v2,
            (__int64)v4);
      }
      v34 = 0;
    }
    else
    {
      v34 = -1073741801;
    }
  }
  else
  {
    v34 = -1073741823;
  }
  *(_QWORD *)(a1 + 528) = 0LL;
  v35 = *(void **)(a1 + 1872);
  if ( v35 )
    memset(v35, 0, (unsigned int)dword_1C00553DC);
  *(_QWORD *)(a1 + 1880) = 0LL;
  *(_QWORD *)(a1 + 1888) = 0LL;
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x65546152u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x65546152u);
  return v34;
}
