/*
 * XREFs of NtWaitForKeyedEvent @ 0x140590C6C
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

NTSTATUS __stdcall NtWaitForKeyedEvent(HANDLE EventHandle, PVOID Key, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  char v5; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  char *v8; // rcx
  unsigned __int64 *v9; // rsi
  struct _LIST_ENTRY *v10; // r15
  PRTL_BALANCED_NODE v11; // rax
  PRTL_BALANCED_NODE v12; // r12
  struct _LIST_ENTRY *i; // rcx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY **p_Blink; // r13
  char v17; // al
  NTSTATUS result; // eax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v20; // rdx
  struct _LIST_ENTRY *Blink; // rax
  PRTL_BALANCED_NODE v22; // rax
  PRTL_BALANCED_NODE v23; // r15
  char *v24; // rax
  struct _LIST_ENTRY *v25; // rdx
  struct _LIST_ENTRY *v26; // rcx
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  NTSTATUS v28; // [rsp+34h] [rbp-74h]
  void *InitialStack; // [rsp+38h] [rbp-70h]
  PVOID v30; // [rsp+40h] [rbp-68h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-60h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER *p_QuadPart; // [rsp+C8h] [rbp+20h]

  p_QuadPart = Timeout;
  v28 = 0;
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
    v28 = result;
    v8 = (char *)Object;
    v30 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v8 = (char *)ExpCritSecOutOfMemoryEvent;
    v30 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v9 = (unsigned __int64 *)&v8[24 * (((unsigned __int64)Key >> 5) & 0x3F)];
  v10 = (struct _LIST_ENTRY *)(v9 + 1);
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, (__int64)v11, (__int16 *)v9);
  if ( v12 )
    BYTE2(v12[1].Left) |= 1u;
  for ( i = v10->Flink; i != v10; i = i->Flink )
  {
    p_Blink = &i[-96].Blink;
    Flink = i[2].Flink;
    if ( ((unsigned __int8)Flink & 1) == 0 )
      break;
    if ( Flink == (struct _LIST_ENTRY *)((unsigned __int64)Key | 1) && p_Blink[68] == (struct _LIST_ENTRY *)Process )
    {
      v20 = i->Flink;
      Blink = i->Blink;
      if ( i->Flink->Blink != i || Blink->Flink != i )
        __fastfail(3u);
      Blink->Flink = v20;
      v20->Blink = Blink;
      i->Blink = i;
      i->Flink = i;
      goto LABEL_12;
    }
  }
  InitialStack = CurrentThread[1].InitialStack;
  CurrentThread[1].InitialStack = Key;
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  v15 = (struct _LIST_ENTRY *)v9[2];
  if ( v15->Flink != v10 )
    __fastfail(3u);
  p_WaitListHead->Flink = v10;
  CurrentThread[1].Header.WaitListHead.Blink = v15;
  v15->Flink = p_WaitListHead;
  v9[2] = (unsigned __int64)p_WaitListHead;
  p_Blink = 0LL;
LABEL_12:
  v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  if ( p_Blink )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(p_Blink + 201), 1, 1, 0);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v28 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, Alertable, p_QuadPart);
    if ( v28 )
    {
      --CurrentThread->KernelApcDisable;
      v22 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
      v23 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        ExfAcquirePushLockExclusiveEx(v9, (__int64)v22, (__int16 *)v9);
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
        v5 = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v5 )
        v28 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
    }
    CurrentThread[1].InitialStack = InitialStack;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( EventHandle )
    ObfDereferenceObject(v30);
  return v28;
}
