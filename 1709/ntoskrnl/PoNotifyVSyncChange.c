/*
 * XREFs of PoNotifyVSyncChange @ 0x14000A3F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400B1788 (PoFxSendSystemLatencyUpdate.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 */

__int64 __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
