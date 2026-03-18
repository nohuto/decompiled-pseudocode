/*
 * XREFs of PoNotifyVSyncChange @ 0x14006F5D0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x14006F988 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 */

__int64 __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
