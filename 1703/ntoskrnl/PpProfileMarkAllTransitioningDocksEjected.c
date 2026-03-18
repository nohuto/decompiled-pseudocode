/*
 * XREFs of PpProfileMarkAllTransitioningDocksEjected @ 0x1406A0138
 * Callers:
 *     PnpProcessCompletedEject @ 0x140696080 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

void PpProfileMarkAllTransitioningDocksEjected()
{
  __int64 *i; // rax

  ExAcquireFastMutex(&PiProfileDeviceListLock);
  for ( i = (__int64 *)PiProfileDeviceListHead; i != &PiProfileDeviceListHead; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 2) != 1 )
      *((_DWORD *)i - 2) = 4;
  }
  KeReleaseGuardedMutex(&PiProfileDeviceListLock);
}
