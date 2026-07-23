/*
 * XREFs of NtWaitForKeyedEvent @ 0x14045651C
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseSemaphore @ 0x1400E2BA0 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtWaitForKeyedEvent(HANDLE EventHandle, PVOID Key, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS v5; // r13d
  char v6; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  char *v9; // rcx
  unsigned __int64 *v10; // rsi
  struct _LIST_ENTRY *v11; // r12
  PRTL_BALANCED_NODE v12; // rax
  PRTL_BALANCED_NODE v13; // r15
  struct _LIST_ENTRY *Flink; // rcx
  __int64 i; // r15
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v17; // rcx
  NTSTATUS result; // eax
  __int64 v19; // rdx
  struct _LIST_ENTRY *v20; // rdx
  struct _LIST_ENTRY *Blink; // rax
  PRTL_BALANCED_NODE v22; // rax
  PRTL_BALANCED_NODE v23; // r15
  char *v24; // rax
  struct _LIST_ENTRY *v25; // rdx
  struct _LIST_ENTRY *v26; // rcx
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  void *StackLimit; // [rsp+38h] [rbp-70h]
  PVOID v29; // [rsp+40h] [rbp-68h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-60h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER *p_QuadPart; // [rsp+C8h] [rbp+20h]

  p_QuadPart = Timeout;
  v5 = 0;
  StackLimit = 0LL;
  v6 = 1;
  if ( ((unsigned __int8)Key & 1) != 0 )
    return -1073741585;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  WaitMode = PreviousMode;
  if ( Timeout )
  {
    if ( PreviousMode && ((unsigned __int64)&Timeout[1] > 0x7FFFFFFF0000LL || &Timeout[1] < Timeout) )
      MEMORY[0x7FFFFFFF0000] = 0;
    QuadPart = Timeout->QuadPart;
    p_QuadPart = (LARGE_INTEGER *)&QuadPart;
  }
  if ( EventHandle )
  {
    result = ObReferenceObjectByHandle(EventHandle, 1u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v5 = result;
    v9 = (char *)Object;
    v29 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v9 = (char *)ExpCritSecOutOfMemoryEvent;
    v29 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v10 = (unsigned __int64 *)&v9[24 * (((unsigned __int64)Key >> 5) & 0x3F)];
  v11 = (struct _LIST_ENTRY *)(v10 + 1);
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v12, (ULONG_PTR)v10);
  if ( v13 )
    BYTE2(v13[1].Left) |= 1u;
  Flink = v11->Flink;
  for ( i = (__int64)&v11->Flink[-95]; Flink != v11; i = (__int64)&Flink[-95] )
  {
    v19 = *(_QWORD *)(i + 1560);
    if ( (v19 & 1) == 0 )
      break;
    if ( v19 == ((unsigned __int64)Key | 1) && *(_KPROCESS **)(i + 544) == Process )
    {
      v20 = Flink->Flink;
      Blink = Flink->Blink;
      if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
        __fastfail(3u);
      Blink->Flink = v20;
      v20->Blink = Blink;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      goto LABEL_12;
    }
    Flink = Flink->Flink;
  }
  StackLimit = CurrentThread[1].StackLimit;
  CurrentThread[1].StackLimit = Key;
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  v17 = (struct _LIST_ENTRY *)v10[2];
  if ( v17->Flink != v11 )
    __fastfail(3u);
  p_WaitListHead->Flink = v11;
  CurrentThread[1].Header.WaitListHead.Blink = v17;
  v17->Flink = p_WaitListHead;
  v10[2] = (unsigned __int64)p_WaitListHead;
  i = 0LL;
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  if ( i )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(i + 1608), 1, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    v5 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrKeyedEvent, WaitMode, Alertable, p_QuadPart);
    if ( v5 )
    {
      --CurrentThread->KernelApcDisable;
      v22 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
      v23 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx(v10, v22, (ULONG_PTR)v10);
      if ( v23 )
        BYTE2(v23[1].Left) |= 1u;
      v24 = (char *)&CurrentThread[1].Header.WaitListHead;
      if ( *(char **)v24 != v24 )
      {
        v25 = *(struct _LIST_ENTRY **)v24;
        v26 = CurrentThread[1].Header.WaitListHead.Blink;
        if ( *(char **)(*(_QWORD *)v24 + 8LL) != v24 || (char *)v26->Flink != v24 )
          __fastfail(3u);
        v26->Flink = v25;
        v25->Blink = v26;
        CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
        *(_QWORD *)v24 = v24;
        v6 = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      if ( v6 )
        v5 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrKeyedEvent, 0, 0, 0LL);
    }
    CurrentThread[1].StackLimit = StackLimit;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( EventHandle )
    ObfDereferenceObject(v29);
  return v5;
}
