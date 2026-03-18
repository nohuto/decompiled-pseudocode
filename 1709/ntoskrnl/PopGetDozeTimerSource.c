/*
 * XREFs of PopGetDozeTimerSource @ 0x14000EF34
 * Callers:
 *     PopWnfAudioCallback @ 0x140451960 (PopWnfAudioCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PopGetDozeTimerSource()
{
  unsigned int v0; // edi
  unsigned __int64 v1; // rbx

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_140365744 )
    v0 = dword_140365748;
  KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
  __writecr8(v1);
  return v0;
}
