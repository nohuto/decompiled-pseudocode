/*
 * XREFs of ?AeWmiShutdown@@YAXXZ @ 0x1800B86F0
 * Callers:
 *     DllMain @ 0x18004B674 (DllMain.c)
 * Callees:
 *     <none>
 */

void AeWmiShutdown(void)
{
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_1800DA020);
    qword_1800DA020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
}
