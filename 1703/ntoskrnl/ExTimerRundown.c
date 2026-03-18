/*
 * XREFs of ExTimerRundown @ 0x14004E2AC
 * Callers:
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     ExpCancelTimer @ 0x140049910 (ExpCancelTimer.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140049B60 (ObpTraceObjectDereferenceIfActive.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 ExTimerRundown()
{
  struct _KTHREAD *CurrentThread; // r14
  KIRQL v1; // al
  unsigned __int64 *p_ThreadLock; // rdi
  _QWORD *v3; // rcx
  KIRQL v4; // bp
  __int64 result; // rax
  ULONG_PTR v6; // rbx
  int v7; // ebp
  KIRQL v8; // r12
  signed __int64 BugCheckParameter4; // rdx

  CurrentThread = KeGetCurrentThread();
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackBase);
  p_ThreadLock = &CurrentThread[1].ThreadLock;
  while ( 1 )
  {
    v3 = (_QWORD *)*p_ThreadLock;
    v4 = v1;
    if ( (unsigned __int64 *)*p_ThreadLock == p_ThreadLock )
      break;
    v6 = (ULONG_PTR)(v3 - 28);
    ObfReferenceObjectWithTag(v3 - 28, 0x746C6644u);
    KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackBase);
    __writecr8(v4);
    v7 = 1;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 64));
    if ( (*(_BYTE *)(v6 + 304) & 1) != 0 && CurrentThread == *(struct _KTHREAD **)(v6 + 80) )
      v7 = ExpCancelTimer((PKTIMER)v6) + 1;
    KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 64));
    __writecr8(v8);
    ObpTraceObjectDereferenceIfActive(v6 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), -v7) - v7;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v6, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v6 - 48);
    }
    v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackBase);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackBase);
  result = v4;
  __writecr8(v4);
  return result;
}
