/*
 * XREFs of DbgkpSetProcessDebugObject @ 0x1406AACFC
 * Callers:
 *     NtDebugActiveProcess @ 0x1406AB268 (NtDebugActiveProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PsGetNextProcessThread @ 0x1404D9170 (PsGetNextProcessThread.c)
 *     DbgkpMarkProcessPeb @ 0x1406AA048 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeThreadMessages @ 0x1406AA3AC (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x1406AB018 (DbgkpWakeTarget.c)
 */

__int64 DbgkpSetProcessDebugObject(ULONG_PTR BugCheckParameter1, PRKEVENT Event, int a3, ...)
{
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v4; // rbx
  int v5; // edi
  _QWORD *NextProcessThread; // r14
  struct _KEVENT *Flink; // r14
  struct _KEVENT *v10; // rbx
  LONG SignalState; // eax
  struct _LIST_ENTRY *Blink; // r15
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *v14; // rax
  PVOID *v15; // rax
  struct _LIST_ENTRY *v16; // rax
  struct _LIST_ENTRY *v17; // rcx
  LONG v18; // eax
  PVOID v19; // rcx
  __int64 v20; // rax
  struct _KTHREAD *v22; // [rsp+30h] [rbp-30h]
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  PKGUARDED_MUTEX Mutex; // [rsp+40h] [rbp-20h]
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID *p_P; // [rsp+50h] [rbp-10h]
  char v27; // [rsp+A8h] [rbp+48h]
  char v28; // [rsp+B0h] [rbp+50h]
  _QWORD *v29; // [rsp+B8h] [rbp+58h] BYREF
  va_list va; // [rsp+B8h] [rbp+58h]
  va_list va1; // [rsp+C0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v29 = va_arg(va1, _QWORD *);
  CurrentThread = KeGetCurrentThread();
  v4 = v29;
  p_P = &P;
  v5 = a3;
  v22 = CurrentThread;
  if ( a3 < 0 )
    v4 = 0LL;
  v28 = 0;
  if ( a3 >= 0 )
    v5 = 0;
  v29 = v4;
  P = &P;
  v27 = 1;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v28 = 1;
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      if ( *(_QWORD *)(BugCheckParameter1 + 1056) )
        break;
      *(_QWORD *)(BugCheckParameter1 + 1056) = Event;
      ObfReferenceObjectWithTag(v4, 0x4F676244u);
      NextProcessThread = PsGetNextProcessThread(BugCheckParameter1, v4);
      if ( !NextProcessThread )
        goto LABEL_11;
      *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      v28 = 0;
      ObfDereferenceObjectWithTag(v4, 0x4F676244u);
      v5 = DbgkpPostFakeThreadMessages(BugCheckParameter1, Event, NextProcessThread, &Object, (_QWORD **)va);
      if ( v5 < 0 )
      {
        v4 = 0LL;
        v29 = 0LL;
        goto LABEL_11;
      }
      ObfDereferenceObjectWithTag(Object, 0x4F676244u);
      v4 = v29;
    }
    v5 = -1073741752;
  }
LABEL_11:
  Mutex = (PKGUARDED_MUTEX)&Event[1];
  ExAcquireFastMutex((PFAST_MUTEX)&Event[1]);
  if ( v5 >= 0 )
  {
    if ( (Event[4].Header.LockNV & 1) != 0 )
    {
      *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
      v5 = -1073740972;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 3u);
      ObfReferenceObject(Event);
      v4 = v29;
    }
  }
  Flink = (struct _KEVENT *)Event[3].Header.WaitListHead.Flink;
  if ( Flink != (struct _KEVENT *)&Event[3].Header.WaitListHead )
  {
    while ( 1 )
    {
      v10 = Flink;
      Flink = *(struct _KEVENT **)&Flink->Header.Lock;
      SignalState = v10[3].Header.SignalState;
      if ( (SignalState & 4) != 0 && (struct _KTHREAD *)v10[3].Header.WaitListHead.Flink == CurrentThread )
        break;
LABEL_35:
      if ( Flink == (struct _KEVENT *)&Event[3].Header.WaitListHead )
      {
        v4 = v29;
        goto LABEL_37;
      }
    }
    Blink = v10[2].Header.WaitListHead.Blink;
    if ( v5 < 0 )
    {
      v16 = *(struct _LIST_ENTRY **)&v10->Header.Lock;
      if ( *(struct _KEVENT **)(*(_QWORD *)&v10->Header.Lock + 8LL) != v10
        || (v17 = v10->Header.WaitListHead.Flink, (struct _KEVENT *)v17->Flink != v10) )
      {
        __fastfail(3u);
      }
      v17->Flink = v16;
      v16->Blink = v17;
      v15 = p_P;
      if ( *p_P != &P )
        __fastfail(3u);
    }
    else
    {
      if ( (SignalState & 0x10) == 0 )
      {
        if ( v27 )
        {
          v10[3].Header.SignalState = SignalState & 0xFFFFFFFB;
          KeSetEvent(Event, 0, 0);
          v27 = 0;
        }
        v10[3].Header.WaitListHead.Flink = 0LL;
        _InterlockedOr((volatile signed __int32 *)&Blink[109], 0x40u);
        goto LABEL_32;
      }
      _InterlockedOr((volatile signed __int32 *)&Blink[109], 0x80u);
      v13 = *(struct _LIST_ENTRY **)&v10->Header.Lock;
      if ( *(struct _KEVENT **)(*(_QWORD *)&v10->Header.Lock + 8LL) != v10
        || (v14 = v10->Header.WaitListHead.Flink, (struct _KEVENT *)v14->Flink != v10) )
      {
        __fastfail(3u);
      }
      v14->Flink = v13;
      v13->Blink = v14;
      v15 = p_P;
      if ( *p_P != &P )
        __fastfail(3u);
    }
    *(_QWORD *)&v10->Header.Lock = &P;
    v10->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v15;
    *v15 = v10;
    p_P = (PVOID *)v10;
LABEL_32:
    v18 = v10[3].Header.SignalState;
    if ( (v18 & 8) != 0 )
    {
      v10[3].Header.SignalState = v18 & 0xFFFFFFF7;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Blink[107].Blink);
    }
    CurrentThread = v22;
    goto LABEL_35;
  }
LABEL_37:
  KeReleaseGuardedMutex(Mutex);
  if ( v28 )
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x4F676244u);
  while ( 1 )
  {
    v19 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P || (v20 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
      __fastfail(3u);
    P = *(PVOID *)P;
    *(_QWORD *)(v20 + 8) = &P;
    DbgkpWakeTarget(v19);
  }
  if ( v5 >= 0 )
    DbgkpMarkProcessPeb(BugCheckParameter1);
  return (unsigned int)v5;
}
