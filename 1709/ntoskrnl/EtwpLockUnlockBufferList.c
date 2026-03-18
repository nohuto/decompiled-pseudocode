/*
 * XREFs of EtwpLockUnlockBufferList @ 0x1400E091C
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1405322C8 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x14074AF90 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1401324CC (ExfAcquireReleasePushLockExclusive.c)
 */

__int64 __fastcall EtwpLockUnlockBufferList(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  __int64 result; // rax
  __int64 *v3; // rcx
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    v3 = (__int64 *)(a1 + 712);
    _InterlockedOr(v5, 0);
    result = *v3;
    if ( (*v3 & 1) != 0 )
      return ExfAcquireReleasePushLockExclusive((ULONG_PTR)v3);
  }
  else
  {
    v1 = (KSPIN_LOCK *)(a1 + 712);
    result = *(_QWORD *)(a1 + 712);
    if ( result )
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
