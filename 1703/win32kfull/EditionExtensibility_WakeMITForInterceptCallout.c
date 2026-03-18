/*
 * XREFs of EditionExtensibility_WakeMITForInterceptCallout @ 0x1C019FFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EditionExtensibility_WakeMITForInterceptCallout()
{
  if ( !_InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
    return 0LL;
  EtwTraceWakeDIT(1024LL);
  return WakeDIT(0x400u);
}
