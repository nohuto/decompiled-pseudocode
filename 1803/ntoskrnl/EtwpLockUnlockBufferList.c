/*
 * XREFs of EtwpLockUnlockBufferList @ 0x1400D3E98
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x140591300 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1407AD440 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400C5D80 (ExfAcquireReleasePushLockExclusive.c)
 */

signed __int64 __fastcall EtwpLockUnlockBufferList(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  signed __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 712);
  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    _InterlockedOr(v4, 0);
    result = *v1;
    if ( (*v1 & 1) != 0 )
      return ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(a1 + 712));
  }
  else
  {
    result = *v1;
    if ( *v1 )
    {
      _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 712));
      KxReleaseSpinLock(v1);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
