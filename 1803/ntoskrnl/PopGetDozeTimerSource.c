/*
 * XREFs of PopGetDozeTimerSource @ 0x140144C9C
 * Callers:
 *     PopWnfAudioCallback @ 0x1405E8F00 (PopWnfAudioCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PopGetDozeTimerSource()
{
  unsigned int v0; // edi
  unsigned __int64 v1; // rbx

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_1403A9FC4 )
    v0 = dword_1403A9FC8;
  KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
  __writecr8(v1);
  return v0;
}
