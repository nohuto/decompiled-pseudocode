/*
 * XREFs of NtCancelTimer @ 0x14004AB00
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     ExpCancelTimer @ 0x140049910 (ExpCancelTimer.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140049B60 (ObpTraceObjectDereferenceIfActive.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoDestroyReasonContext @ 0x14007227C (PoDestroyReasonContext.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  struct _KTIMER *v7; // rdi
  KSPIN_LOCK *v8; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v10; // r14
  int v11; // r15d
  LONG SignalState; // r12d
  signed __int64 v13; // rdx
  __int64 v14; // r14
  LIST_ENTRY *p_WaitListHead; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v18; // rcx
  KIRQL v19; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v22; // [rsp+98h] [rbp+10h]
  PVOID Object; // [rsp+A8h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v18 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CurrentState < 0x7FFFFFFF0000LL )
      v18 = (__int64)CurrentState;
    *(_BYTE *)v18 = *(_BYTE *)v18;
  }
  result = ObReferenceObjectByHandle(TimerHandle, 2u, ExTimerObjectType, PreviousMode, &Object, 0LL);
  v6 = result;
  if ( result >= 0 )
  {
    CurrentThread = 0LL;
    v22 = 0;
    v7 = (struct _KTIMER *)Object;
    v8 = (KSPIN_LOCK *)((char *)Object + 64);
    CurrentIrql = KeGetCurrentIrql();
    v19 = CurrentIrql;
    __writecr8(2uLL);
    KxAcquireSpinLock(v8);
    v10 = *(_QWORD *)&v7[4].Header.Lock;
    if ( v10 )
    {
      KxReleaseSpinLock(v8);
      __writecr8(CurrentIrql);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v14 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock);
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      v22 = 1;
      v19 = KeAcquireSpinLockRaiseToDpc(v8);
      v10 = *(_QWORD *)&v7[4].Header.Lock;
      *(_QWORD *)&v7[4].Header.Lock = 0LL;
      v7 = (struct _KTIMER *)Object;
    }
    v11 = ExpCancelTimer(v7) + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(v8, retaddr);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
      v7 = (struct _KTIMER *)Object;
    }
    __writecr8(v19);
    if ( v22 )
    {
      if ( v10 )
      {
        p_WaitListHead = &v7[4].Header.WaitListHead;
        Flink = p_WaitListHead->Flink;
        Blink = p_WaitListHead->Blink;
        if ( p_WaitListHead->Flink->Blink != p_WaitListHead || Blink->Flink != p_WaitListHead )
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        p_WaitListHead->Flink = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&ExpWakeTimerLock);
      KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
      KiLeaveCriticalRegionUnsafe(CurrentThread);
      v7 = (struct _KTIMER *)Object;
    }
    SignalState = v7->Header.SignalState;
    ObpTraceObjectDereferenceIfActive((_DWORD)v7 - 48);
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&v7[-1].Header.WaitListHead.Blink, -v11) - v11;
    if ( v13 <= 0 )
    {
      if ( v13 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v13);
      ObpDeferObjectDeletion((signed __int64)&v7[-1].Header.WaitListHead.Blink);
    }
    if ( CurrentState )
      *CurrentState = SignalState;
    if ( v10 )
      PoDestroyReasonContext(v10);
    return v6;
  }
  return result;
}
