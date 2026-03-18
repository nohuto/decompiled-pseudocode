/*
 * XREFs of EditionExtensibility_WakeMITForInterceptCallout @ 0x1C01BAC20
 * Callers:
 *     <none>
 * Callees:
 *     WakeDIT @ 0x1C00FDA3C (WakeDIT.c)
 */

__int64 EditionExtensibility_WakeMITForInterceptCallout()
{
  if ( !_InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
    return 0LL;
  EtwTraceWakeDIT(4096LL);
  return WakeDIT(0x1000u);
}
