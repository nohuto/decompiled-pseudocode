/*
 * XREFs of ExTimerRundown @ 0x1400A9724
 * Callers:
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140067BA8 (ObpTraceObjectDereferenceIfActive.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpCancelTimer @ 0x1400E1D98 (ExpCancelTimer.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 ExTimerRundown()
{
  struct _KTHREAD *CurrentThread; // r14
  KIRQL v1; // al
  void **p_StackBase; // rdi
  _QWORD *v3; // rcx
  KIRQL v4; // bp
  __int64 result; // rax
  ULONG_PTR v6; // rbx
  int v7; // ebp
  KIRQL v8; // r12
  signed __int64 BugCheckParameter4; // rdx

  CurrentThread = KeGetCurrentThread();
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  p_StackBase = &CurrentThread[1].StackBase;
  while ( 1 )
  {
    v3 = *p_StackBase;
    v4 = v1;
    if ( *p_StackBase == p_StackBase )
      break;
    v6 = (ULONG_PTR)(v3 - 28);
    ObfReferenceObjectWithTag(v3 - 28, 0x746C6644u);
    KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
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
    v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  result = v4;
  __writecr8(v4);
  return result;
}
