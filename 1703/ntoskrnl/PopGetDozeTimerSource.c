/*
 * XREFs of PopGetDozeTimerSource @ 0x140131D84
 * Callers:
 *     PopWnfAudioCallback @ 0x140575E70 (PopWnfAudioCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PopGetDozeTimerSource()
{
  unsigned int v0; // edi
  unsigned __int64 v1; // rbx

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_14034B0E4 )
    v0 = dword_14034B0E8;
  KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
  __writecr8(v1);
  return v0;
}
