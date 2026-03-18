/*
 * XREFs of ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x1C0192B28
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C011F164 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 TdrIsDodVSyncTimeoutForcedFlip(void)
{
  return _InterlockedExchange(&g_TdrForceDodVSyncTimeout, 0) != 0;
}
