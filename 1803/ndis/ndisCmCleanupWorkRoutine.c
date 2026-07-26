/*
 * XREFs of ndisCmCleanupWorkRoutine @ 0x1C00F13C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmCleanupSessionState@@YAXXZ @ 0x1C006863C (-ndisCmCleanupSessionState@@YAXXZ.c)
 */

void ndisCmCleanupWorkRoutine()
{
  _InterlockedExchange(&ndisCmWorkItemQueued, 0);
  if ( ndisCmSessionCount )
    ndisCmCleanupSessionState();
}
