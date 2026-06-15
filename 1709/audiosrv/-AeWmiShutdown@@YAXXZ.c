/*
 * XREFs of ?AeWmiShutdown@@YAXXZ @ 0x1800AB92C
 * Callers:
 *     DllMain @ 0x18003541C (DllMain.c)
 * Callees:
 *     <none>
 */

void AeWmiShutdown(void)
{
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_1800F1020);
    qword_1800F1020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
}
