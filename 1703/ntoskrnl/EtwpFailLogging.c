/*
 * XREFs of EtwpFailLogging @ 0x1401319A4
 * Callers:
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1404F0990 (EtwpWriteUserEvent.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400053B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140061BB0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseTraceBuffer @ 0x140087070 (EtwpReleaseTraceBuffer.c)
 *     EtwpLevelKeywordEnabled @ 0x1400F2C40 (EtwpLevelKeywordEnabled.c)
 *     EtwpUpdateEventsLostCount @ 0x140131B10 (EtwpUpdateEventsLostCount.c)
 *     EtwpTraceLostEvent @ 0x140255744 (EtwpTraceLostEvent.c)
 */

void __fastcall EtwpFailLogging(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rbp
  __int64 v9; // rdi
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // si
  bool i; // zf
  unsigned int v16; // ecx
  unsigned int *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdi

  v8 = *(_QWORD *)(a3 + 376);
  v9 = 0LL;
  v13 = a1;
  if ( *(_DWORD *)(a4 + 384) )
  {
    do
    {
      v17 = *(unsigned int **)(a4 + 48 * v9);
      if ( (v17[3] & 0x8000000) == 0 )
      {
        **(_DWORD **)(a4 + 48 * v9 + 8) = v17[7] | **(_DWORD **)(a4 + 48 * v9 + 8) & v17[8];
        EtwpUpdateEventsLostCount(v17);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(a3 + 24, a7, v17 + 34, a6);
      }
      EtwpReleaseTraceBuffer((signed __int64 *)(a4 + 16 + 48 * v9));
      if ( a8 )
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 8LL * *v17 + 408), 1u);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *(_DWORD *)(a4 + 384) );
    v13 = a1;
  }
  v14 = a5;
  for ( i = !_BitScanForward(&v16, a5); !i; i = !_BitScanForward(&v16, v14) )
  {
    v14 &= v14 - 1;
    if ( EtwpLevelKeywordEnabled(32LL * v16 + a3 + 112, v13, a2) )
    {
      v19 = *(unsigned __int16 *)(v18 + 6);
      if ( !a8 || ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 8 * v19 + 408), 1u) )
      {
        if ( (unsigned int)v19 >= 0x40 )
          v20 = 1LL;
        else
          v20 = *(_QWORD *)(v8 + 8 * v19 + 920);
        if ( (v20 & 1) == 0 )
        {
          EtwpUpdateEventsLostCount(v20);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
            EtwpTraceLostEvent(a3 + 24, a7, v20 + 136, a6);
        }
        if ( a8 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 8 * v19 + 408), 1u);
      }
    }
    v13 = a1;
  }
}
