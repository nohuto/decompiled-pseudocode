/*
 * XREFs of ndisCmCleanupWorkRoutine @ 0x1C00EE7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmCleanupSessionState@@YAXXZ @ 0x1C0067ABC (-ndisCmCleanupSessionState@@YAXXZ.c)
 */

void ndisCmCleanupWorkRoutine()
{
  _InterlockedExchange(&ndisCmWorkItemQueued, 0);
  if ( ndisCmSessionCount )
    ndisCmCleanupSessionState();
}
