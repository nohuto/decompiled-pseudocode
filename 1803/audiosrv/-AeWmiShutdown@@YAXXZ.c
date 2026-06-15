/*
 * XREFs of ?AeWmiShutdown@@YAXXZ @ 0x1800E634C
 * Callers:
 *     DllMain @ 0x1800632DC (DllMain.c)
 * Callees:
 *     <none>
 */

void AeWmiShutdown(void)
{
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_18011E020);
    qword_18011E020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
}
