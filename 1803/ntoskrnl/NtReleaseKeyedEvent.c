/*
 * XREFs of NtReleaseKeyedEvent @ 0x1405BD078
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     KeReleaseSemaphore @ 0x14013E800 (KeReleaseSemaphore.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
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
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  __int64 *Flink; // rax
  __int64 *v18; // r13
  __int64 *v19; // rcx
  char v20; // al
  NTSTATUS result; // eax
  LIST_ENTRY *p_WaitListHead; // rax
  __int64 *v23; // rcx
  __int64 v24; // rax
  struct _LIST_ENTRY *Blink; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r14
  LIST_ENTRY *v29; // rax
  struct _KTHREAD *v30; // rcx
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  void *InitialStack; // [rsp+38h] [rbp-70h]
  PVOID v33; // [rsp+40h] [rbp-68h]
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
    v33 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v9 = (char *)ExpCritSecOutOfMemoryEvent;
    v33 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v10 = (unsigned __int64 *)&v9[24 * (((unsigned __int64)Key >> 5) & 0x3F)];
  v11 = (struct _LIST_ENTRY *)(v10 + 1);
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
  v16 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v12, (ULONG_PTR)v10);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  Flink = (__int64 *)v11->Flink;
  if ( v11->Flink == v11 )
  {
LABEL_23:
    InitialStack = CurrentThread[1].InitialStack;
    CurrentThread[1].InitialStack = (void *)((unsigned __int64)Key | 1);
    p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
    v23 = (__int64 *)v11->Flink;
    if ( v11->Flink->Blink != v11 )
      __fastfail(3u);
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)v23;
    CurrentThread[1].Header.WaitListHead.Blink = v11;
    v23[1] = (__int64)p_WaitListHead;
    v11->Flink = p_WaitListHead;
    v18 = 0LL;
  }
  else
  {
    v13 = (__int64)Process;
    while ( 1 )
    {
      v18 = Flink - 191;
      if ( (PVOID)Flink[4] == Key && (_KPROCESS *)v18[68] == Process )
        break;
      Flink = (__int64 *)*Flink;
      if ( Flink == (__int64 *)v11 )
        goto LABEL_23;
    }
    v13 = *Flink;
    v19 = (__int64 *)Flink[1];
    if ( *(__int64 **)(*Flink + 8) != Flink || (__int64 *)*v19 != Flink )
      __fastfail(3u);
    *v19 = v13;
    *(_QWORD *)(v13 + 8) = v19;
    Flink[1] = (__int64)Flink;
    *Flink = (__int64)Flink;
  }
  v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v20 & 2) != 0 && (v20 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10, v13, v14, v15);
  KeAbPostRelease((ULONG_PTR)v10);
  if ( v18 )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(v18 + 201), 1, 1, 0);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v5 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, Alertable, p_QuadPart);
    if ( v5 )
    {
      --CurrentThread->KernelApcDisable;
      v24 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
      v28 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx(v10, v24, (ULONG_PTR)v10);
      if ( v28 )
        *(_BYTE *)(v28 + 26) |= 1u;
      v29 = &CurrentThread[1].Header.WaitListHead;
      v30 = (struct _KTHREAD *)CurrentThread[1].Header.WaitListHead.Flink;
      if ( v30 != (struct _KTHREAD *)&CurrentThread[1].Header.WaitListHead )
      {
        Blink = CurrentThread[1].Header.WaitListHead.Blink;
        if ( v30->Header.WaitListHead.Flink != v29 || Blink->Flink != v29 )
          __fastfail(3u);
        Blink->Flink = (struct _LIST_ENTRY *)v30;
        v30->Header.WaitListHead.Flink = Blink;
        CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
        v29->Flink = v29;
        v6 = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v10, (__int64)Blink, v26, v27);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v6 )
        v5 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
    }
    CurrentThread[1].InitialStack = InitialStack;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( EventHandle )
    ObfDereferenceObject(v33);
  return v5;
}
