/*
 * XREFs of ExTimerRundown @ 0x140040D7C
 * Callers:
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExpCancelTimer @ 0x14005AA70 (ExpCancelTimer.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14005BAA0 (ObpTraceObjectDereferenceIfActive.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
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
  ULONG_PTR v9; // r15
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
    v9 = v6 - 48;
    ObpTraceObjectDereferenceIfActive(v6 - 48, (unsigned int)v7, 1953261124LL);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), -v7) - v7;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(v9 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v6 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v6 - 48) >> 8)],
          v6,
          6uLL,
          *(_QWORD *)(v9 + 8));
      if ( BugCheckParameter4 < 0 )
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
