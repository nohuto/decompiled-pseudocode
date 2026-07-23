/*
 * XREFs of NtReleaseKeyedEvent @ 0x140456358
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

NTSTATUS __stdcall NtReleaseKeyedEvent(HANDLE EventHandle, PVOID Key, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS v5; // r12d
  char v6; // r15
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  char *v9; // rcx
  unsigned __int64 *v10; // rsi
  struct _LIST_ENTRY *v11; // r14
  PRTL_BALANCED_NODE v12; // rax
  PRTL_BALANCED_NODE v13; // r13
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v15; // r13
  struct _LIST_ENTRY *v16; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  NTSTATUS result; // eax
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v20; // rcx
  PRTL_BALANCED_NODE v21; // rax
  PRTL_BALANCED_NODE v22; // r14
  char *v23; // rax
  struct _LIST_ENTRY *v24; // rdx
  struct _LIST_ENTRY *v25; // rcx
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  void *StackLimit; // [rsp+38h] [rbp-70h]
  PVOID v28; // [rsp+40h] [rbp-68h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-60h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER *Timeouta; // [rsp+C8h] [rbp+20h]

  Timeouta = Timeout;
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
    Timeouta = (LARGE_INTEGER *)&QuadPart;
  }
  if ( EventHandle )
  {
    result = ObReferenceObjectByHandle(EventHandle, 2u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v5 = result;
    v9 = (char *)Object;
    v28 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v9 = (char *)ExpCritSecOutOfMemoryEvent;
    v28 = (PVOID)ExpCritSecOutOfMemoryEvent;
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
  if ( v11->Flink == v11 )
  {
LABEL_34:
    StackLimit = CurrentThread[1].StackLimit;
    CurrentThread[1].StackLimit = (void *volatile)((unsigned __int64)Key | 1);
    p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
    v20 = v11->Flink;
    if ( v11->Flink->Blink != v11 )
      __fastfail(3u);
    p_WaitListHead->Flink = v20;
    CurrentThread[1].Header.WaitListHead.Blink = v11;
    v20->Blink = p_WaitListHead;
    v11->Flink = p_WaitListHead;
    v15 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v15 = Flink - 95;
      if ( Flink[2].Blink == Key && (_KPROCESS *)v15[34].Flink == Process )
        break;
      Flink = Flink->Flink;
      if ( Flink == v11 )
        goto LABEL_34;
    }
    v16 = Flink->Flink;
    Blink = Flink->Blink;
    if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
      __fastfail(3u);
    Blink->Flink = v16;
    v16->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  if ( v15 )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)&v15[100].Blink, 1, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    v5 = KeWaitForSingleObject(&CurrentThread[1].StateSaveArea, WrKeyedEvent, WaitMode, Alertable, Timeouta);
    if ( v5 )
    {
      --CurrentThread->KernelApcDisable;
      v21 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
      v22 = v21;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx(v10, v21, (ULONG_PTR)v10);
      if ( v22 )
        BYTE2(v22[1].Left) |= 1u;
      v23 = (char *)&CurrentThread[1].Header.WaitListHead;
      if ( *(char **)v23 != v23 )
      {
        v24 = *(struct _LIST_ENTRY **)v23;
        v25 = CurrentThread[1].Header.WaitListHead.Blink;
        if ( *(char **)(*(_QWORD *)v23 + 8LL) != v23 || (char *)v25->Flink != v23 )
          __fastfail(3u);
        v25->Flink = v24;
        v24->Blink = v25;
        CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
        *(_QWORD *)v23 = v23;
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
    ObfDereferenceObject(v28);
  return v5;
}
