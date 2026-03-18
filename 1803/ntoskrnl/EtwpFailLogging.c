/*
 * XREFs of EtwpFailLogging @ 0x1400CF814
 * Callers:
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1404D3060 (EtwpWriteUserEvent.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006430 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006660 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseTraceBuffer @ 0x14006220C (EtwpReleaseTraceBuffer.c)
 *     EtwpUpdateEventsLostCount @ 0x1400CF900 (EtwpUpdateEventsLostCount.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1401093F0 (EtwpLevelKeywordEnabled.c)
 *     EtwpTraceLostEvent @ 0x1402B11AC (EtwpTraceLostEvent.c)
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
  __int64 v8; // r12
  __int64 v9; // rsi
  unsigned __int8 v12; // bp
  bool i; // zf
  unsigned int v14; // ecx
  __int64 v15; // rdi
  unsigned int *v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rbx

  v8 = a2;
  v9 = *(_QWORD *)(a3 + 376);
  LOBYTE(a2) = a1;
  if ( *(_DWORD *)(a4 + 384) )
  {
    v15 = 0LL;
    do
    {
      v16 = *(unsigned int **)(a4 + 48 * v15);
      if ( (v16[3] & 0x8000000) == 0 )
      {
        **(_DWORD **)(a4 + 48 * v15 + 8) = v16[7] | **(_DWORD **)(a4 + 48 * v15 + 8) & v16[8];
        EtwpUpdateEventsLostCount(v16, a2);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(a3 + 24, a7, v16 + 38, a6);
      }
      EtwpReleaseTraceBuffer((signed __int64 *)(a4 + 16 + 48 * v15));
      if ( a8 )
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v9 + 424) + 8LL * *v16), 1u);
      v15 = (unsigned int)(v15 + 1);
    }
    while ( (unsigned int)v15 < *(_DWORD *)(a4 + 384) );
    LOBYTE(a2) = a1;
  }
  v12 = a5;
  for ( i = !_BitScanForward(&v14, a5); !i; i = !_BitScanForward(&v14, v12) )
  {
    v12 &= v12 - 1;
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(32LL * v14 + a3 + 112, a2, v8) )
    {
      v18 = *(unsigned __int16 *)(v17 + 6);
      v19 = v18;
      if ( !a8
        || ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v9 + 424) + 8 * v18), 1u) )
      {
        if ( (unsigned int)v18 >= *(_DWORD *)(v9 + 16) )
          v20 = 1LL;
        else
          v20 = *(_QWORD *)(*(_QWORD *)(v9 + 432) + 8 * v18);
        if ( (v20 & 1) == 0 )
        {
          EtwpUpdateEventsLostCount(v20, a2);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
            EtwpTraceLostEvent(a3 + 24, a7, v20 + 152, a6);
        }
        if ( a8 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v9 + 424) + 8 * v19), 1u);
      }
    }
    LOBYTE(a2) = a1;
  }
}
