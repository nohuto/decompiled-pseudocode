/*
 * XREFs of EtwpLockUnlockBufferList @ 0x140010988
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1404F1E3C (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x14070F288 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140136B30 (ExfAcquireReleasePushLockExclusive.c)
 */

__int64 __fastcall EtwpLockUnlockBufferList(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  __int64 result; // rax
  __int64 *v3; // rcx
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    v3 = (__int64 *)(a1 + 696);
    _InterlockedOr(v5, 0);
    result = *v3;
    if ( (*v3 & 1) != 0 )
      return ExfAcquireReleasePushLockExclusive((ULONG_PTR)v3);
  }
  else
  {
    v1 = (KSPIN_LOCK *)(a1 + 696);
    result = *(_QWORD *)(a1 + 696);
    if ( result )
    {
      _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 696));
      KxReleaseSpinLock(v1);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
