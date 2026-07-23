/*
 * XREFs of NtReleaseKeyedEvent @ 0x140590F8C
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeReleaseSemaphore @ 0x1400DBA40 (KeReleaseSemaphore.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
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
  struct _LIST_ENTRY **p_Blink; // r13
  struct _LIST_ENTRY *v16; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  char v18; // al
  NTSTATUS result; // eax
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v21; // rcx
  PRTL_BALANCED_NODE v22; // rax
  PRTL_BALANCED_NODE v23; // r14
  char *v24; // rax
  struct _LIST_ENTRY *v25; // rdx
  struct _LIST_ENTRY *v26; // rcx
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  void *InitialStack; // [rsp+38h] [rbp-70h]
  PVOID v29; // [rsp+40h] [rbp-68h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-60h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER *p_QuadPart; // [rsp+C8h] [rbp+20h]

  p_QuadPart = Timeout;
  v5 = 0;
  InitialStack = 0LL;
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
    result = ObReferenceObjectByHandle(EventHandle, 2u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
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
    ExfAcquirePushLockExclusiveEx(v10, (__int64)v12, (__int16 *)v10);
  if ( v13 )
    BYTE2(v13[1].Left) |= 1u;
  Flink = v11->Flink;
  if ( v11->Flink == v11 )
  {
LABEL_22:
    InitialStack = CurrentThread[1].InitialStack;
    CurrentThread[1].InitialStack = (void *)((unsigned __int64)Key | 1);
    p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
    v21 = v11->Flink;
    if ( v11->Flink->Blink != v11 )
      __fastfail(3u);
    p_WaitListHead->Flink = v21;
    CurrentThread[1].Header.WaitListHead.Blink = v11;
    v21->Blink = p_WaitListHead;
    v11->Flink = p_WaitListHead;
    p_Blink = 0LL;
  }
  else
  {
    while ( 1 )
    {
      p_Blink = &Flink[-96].Blink;
      if ( Flink[2].Flink == Key && p_Blink[68] == (struct _LIST_ENTRY *)Process )
        break;
      Flink = Flink->Flink;
      if ( Flink == v11 )
        goto LABEL_22;
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
  v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  if ( p_Blink )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(p_Blink + 201), 1, 1, 0);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v5 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, Alertable, p_QuadPart);
    if ( v5 )
    {
      --CurrentThread->KernelApcDisable;
      v22 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
      v23 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx(v10, (__int64)v22, (__int16 *)v10);
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
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v6 )
        v5 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
    }
    CurrentThread[1].InitialStack = InitialStack;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( EventHandle )
    ObfDereferenceObject(v29);
  return v5;
}
