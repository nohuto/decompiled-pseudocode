/*
 * XREFs of ndisCmCleanupWorkRoutine @ 0x1C00E4780
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmCleanupSessionState@@YAXXZ @ 0x1C00672DC (-ndisCmCleanupSessionState@@YAXXZ.c)
 */

void ndisCmCleanupWorkRoutine()
{
  _InterlockedExchange(&ndisCmWorkItemQueued, 0);
  if ( ndisCmSessionCount )
    ndisCmCleanupSessionState();
}
