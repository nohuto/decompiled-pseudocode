/*
 * XREFs of NtCancelTimer @ 0x1400E1574
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140067BA8 (ObpTraceObjectDereferenceIfActive.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x1400B0710 (PoDestroyReasonContext.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     ExpCancelTimer @ 0x1400E1D98 (ExpCancelTimer.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS result; // eax
  NTSTATUS v6; // r15d
  struct _KTIMER *v7; // rsi
  KSPIN_LOCK *v8; // r13
  KIRQL v9; // bl
  _QWORD *v10; // rdi
  LONG SignalState; // ebx
  signed __int64 v12; // rdx
  PRTL_BALANCED_NODE v13; // rax
  PRTL_BALANCED_NODE v14; // rdi
  LIST_ENTRY *p_WaitListHead; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  char v19; // bl
  __int64 v20; // rcx
  int v21; // [rsp+30h] [rbp-58h]
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  _QWORD *v24; // [rsp+48h] [rbp-40h]
  KIRQL v25; // [rsp+98h] [rbp+10h]
  char v26; // [rsp+A0h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CurrentState < 0x7FFFFFFF0000LL )
      v20 = (__int64)CurrentState;
    *(_BYTE *)v20 = *(_BYTE *)v20;
  }
  result = ObReferenceObjectByHandle(TimerHandle, 2u, ExTimerObjectType, PreviousMode, &Object, 0LL);
  v6 = result;
  if ( result >= 0 )
  {
    CurrentThread = 0LL;
    v26 = 0;
    v7 = (struct _KTIMER *)Object;
    v8 = (KSPIN_LOCK *)((char *)Object + 64);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 8);
    v25 = v9;
    v10 = *(_QWORD **)&v7[4].Header.Lock;
    v24 = v10;
    if ( v10 )
    {
      KxReleaseSpinLock(v8);
      __writecr8(v9);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v13 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
      v14 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, (__int64)v13, (__int16 *)&ExpWakeTimerLock);
      if ( v14 )
        BYTE2(v14[1].Left) |= 1u;
      v26 = 1;
      v25 = KeAcquireSpinLockRaiseToDpc(v8);
      v10 = *(_QWORD **)&v7[4].Header.Lock;
      v24 = v10;
      *(_QWORD *)&v7[4].Header.Lock = 0LL;
      v7 = (struct _KTIMER *)Object;
    }
    v21 = ExpCancelTimer(v7) + 1;
    KxReleaseSpinLock(v8);
    __writecr8(v25);
    if ( v26 )
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
      v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
      KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v7 = (struct _KTIMER *)Object;
    }
    SignalState = v7->Header.SignalState;
    ObpTraceObjectDereferenceIfActive((_DWORD)v7 - 48);
    v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&v7[-1].Header.WaitListHead.Blink, -v21) - v21;
    if ( v12 <= 0 )
    {
      if ( v12 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v12);
      ObpDeferObjectDeletion(&v7[-1].Header.WaitListHead.Blink);
    }
    if ( CurrentState )
      *CurrentState = SignalState;
    if ( v10 )
      PoDestroyReasonContext(v10);
    return v6;
  }
  return result;
}
