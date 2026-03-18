/*
 * XREFs of NtWaitForKeyedEvent @ 0x1405BE16C
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

NTSTATUS __stdcall NtWaitForKeyedEvent(HANDLE EventHandle, PVOID Key, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  char v5; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  char *v8; // rcx
  unsigned __int64 *v9; // rsi
  __int64 **v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 *v15; // rcx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v17; // rcx
  __int64 *v18; // r13
  char v19; // al
  NTSTATUS result; // eax
  __int64 *v21; // rax
  __int64 v22; // rax
  struct _LIST_ENTRY *Blink; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  LIST_ENTRY *v27; // rax
  struct _KTHREAD *Flink; // rcx
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  NTSTATUS v30; // [rsp+34h] [rbp-74h]
  void *InitialStack; // [rsp+38h] [rbp-70h]
  PVOID v32; // [rsp+40h] [rbp-68h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-60h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER *p_QuadPart; // [rsp+C8h] [rbp+20h]

  p_QuadPart = Timeout;
  v30 = 0;
  InitialStack = 0LL;
  v5 = 1;
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
    v30 = result;
    v8 = (char *)Object;
    v32 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v8 = (char *)ExpCritSecOutOfMemoryEvent;
    v32 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v9 = (unsigned __int64 *)&v8[24 * (((unsigned __int64)Key >> 5) & 0x3F)];
  v10 = (__int64 **)(v9 + 1);
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
  v14 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v11, (ULONG_PTR)v9);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  v15 = *v10;
  if ( *v10 != (__int64 *)v10 )
  {
    v13 = (__int64)Process;
    do
    {
      v18 = v15 - 191;
      v12 = v15[4];
      if ( (v12 & 1) == 0 )
        break;
      if ( v12 == ((unsigned __int64)Key | 1) && (_KPROCESS *)v18[68] == Process )
      {
        v12 = *v15;
        v21 = (__int64 *)v15[1];
        if ( *(__int64 **)(*v15 + 8) != v15 || (__int64 *)*v21 != v15 )
          __fastfail(3u);
        *v21 = v12;
        *(_QWORD *)(v12 + 8) = v21;
        v15[1] = (__int64)v15;
        *v15 = (__int64)v15;
        goto LABEL_12;
      }
      v15 = (__int64 *)*v15;
    }
    while ( v15 != (__int64 *)v10 );
  }
  InitialStack = CurrentThread[1].InitialStack;
  CurrentThread[1].InitialStack = Key;
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  v17 = (struct _LIST_ENTRY *)v9[2];
  if ( (__int64 **)v17->Flink != v10 )
    __fastfail(3u);
  p_WaitListHead->Flink = (struct _LIST_ENTRY *)v10;
  CurrentThread[1].Header.WaitListHead.Blink = v17;
  v17->Flink = p_WaitListHead;
  v9[2] = (unsigned __int64)p_WaitListHead;
  v18 = 0LL;
LABEL_12:
  v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v9, v12, (__int64)Key, v13);
  KeAbPostRelease((ULONG_PTR)v9);
  if ( v18 )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(v18 + 201), 1, 1, 0);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v30 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, Alertable, p_QuadPart);
    if ( v30 )
    {
      --CurrentThread->KernelApcDisable;
      v22 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
      v26 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        ExfAcquirePushLockExclusiveEx(v9, v22, (ULONG_PTR)v9);
      if ( v26 )
        *(_BYTE *)(v26 + 26) |= 1u;
      v27 = &CurrentThread[1].Header.WaitListHead;
      Flink = (struct _KTHREAD *)CurrentThread[1].Header.WaitListHead.Flink;
      if ( Flink != (struct _KTHREAD *)&CurrentThread[1].Header.WaitListHead )
      {
        Blink = CurrentThread[1].Header.WaitListHead.Blink;
        if ( Flink->Header.WaitListHead.Flink != v27 || Blink->Flink != v27 )
          __fastfail(3u);
        Blink->Flink = (struct _LIST_ENTRY *)Flink;
        Flink->Header.WaitListHead.Flink = Blink;
        CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
        v27->Flink = v27;
        v5 = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v9, (__int64)Blink, v24, v25);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v5 )
        v30 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
    }
    CurrentThread[1].InitialStack = InitialStack;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( EventHandle )
    ObfDereferenceObject(v32);
  return v30;
}
