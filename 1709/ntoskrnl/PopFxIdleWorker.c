/*
 * XREFs of PopFxIdleWorker @ 0x1400FE0E4
 * Callers:
 *     PopFxIdleComponent @ 0x1400E403C (PopFxIdleComponent.c)
 *     PopFxComponentWork @ 0x140158960 (PopFxComponentWork.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxAddLogEntry @ 0x1400FDE88 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x1400FE1D8 (PopFxIdleWorkerTail.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxIdleWorker(__int64 *BugCheckParameter2, unsigned int a2)
{
  __int64 v4; // rbx
  KIRQL v5; // r15
  char v6; // di
  void (__fastcall *v7)(__int64, _QWORD); // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(BugCheckParameter2[79] + 8LL * a2);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 128));
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 88), 0x40000000, 0x80000000) != 0x80000000 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 128));
    result = v5;
    __writecr8(v5);
    return result;
  }
  KeResetEvent((PRKEVENT)(v4 + 104));
  *(_DWORD *)(v4 + 136) = 2;
  v6 = 0;
  v7 = (void (__fastcall *)(__int64, _QWORD))BugCheckParameter2[15];
  if ( !v7 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFE);
    goto LABEL_4;
  }
  v7(BugCheckParameter2[22], a2);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFF) == 1 )
  {
LABEL_4:
    v6 = 1;
    goto LABEL_5;
  }
  PopFxAddLogEntry(BugCheckParameter2[6], a2, 13, 0LL);
LABEL_5:
  KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 128));
  result = v5;
  __writecr8(v5);
  if ( v6 )
    return PopFxIdleWorkerTail((ULONG_PTR)BugCheckParameter2);
  return result;
}
