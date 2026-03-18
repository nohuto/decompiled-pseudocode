/*
 * XREFs of EtwpFailLogging @ 0x14027A444
 * Callers:
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1404CC5B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1400956B0 (EtwpLevelKeywordEnabled.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FA3C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseTraceBuffer @ 0x140153740 (EtwpReleaseTraceBuffer.c)
 *     EtwpTraceLostEvent @ 0x14027E008 (EtwpTraceLostEvent.c)
 *     EtwpUpdateEventsLostCount @ 0x14027EED0 (EtwpUpdateEventsLostCount.c)
 */

void __fastcall EtwpFailLogging(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r12
  unsigned int *v13; // rbp
  unsigned __int8 v14; // bp
  bool i; // zf
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdi

  v8 = *(_QWORD *)(a3 + 376);
  v9 = 0LL;
  v10 = a2;
  LOBYTE(a2) = a1;
  if ( *(_DWORD *)(a4 + 384) )
  {
    do
    {
      v13 = *(unsigned int **)(a4 + 48 * v9);
      if ( (v13[3] & 0x8000000) == 0 )
      {
        **(_DWORD **)(a4 + 48 * v9 + 8) = v13[7] | **(_DWORD **)(a4 + 48 * v9 + 8) & v13[8];
        EtwpUpdateEventsLostCount(v13, a2);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(a3 + 24, a7, v13 + 38, a6);
      }
      EtwpReleaseTraceBuffer((signed __int64 *)(a4 + 16 + 48 * v9));
      if ( a8 )
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v8 + 416) + 8LL * *v13), 1u);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *(_DWORD *)(a4 + 384) );
    LOBYTE(a2) = a1;
  }
  v14 = a5;
  for ( i = !_BitScanForward(&v16, a5); !i; i = !_BitScanForward(&v16, v14) )
  {
    v14 &= v14 - 1;
    if ( EtwpLevelKeywordEnabled(32LL * v16 + a3 + 112, a2, v10) )
    {
      v19 = *(unsigned __int16 *)(v18 + 6);
      if ( !a8
        || ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v8 + 416) + 8 * v19), 1u) )
      {
        if ( (unsigned int)v19 >= *(_DWORD *)(v8 + 8) )
          v20 = 1LL;
        else
          v20 = *(_QWORD *)(*(_QWORD *)(v8 + 424) + 8 * v19);
        if ( (v20 & 1) == 0 )
        {
          EtwpUpdateEventsLostCount(v20, v17);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
            EtwpTraceLostEvent(a3 + 24, a7, v20 + 152, a6);
        }
        if ( a8 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v8 + 416) + 8 * v19), 1u);
      }
    }
    LOBYTE(a2) = a1;
  }
}
