/*
 * XREFs of DbgkpSetProcessDebugObject @ 0x14067FB20
 * Callers:
 *     NtDebugActiveProcess @ 0x140680094 (NtDebugActiveProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     PsGetNextProcessThread @ 0x14047F100 (PsGetNextProcessThread.c)
 *     DbgkpMarkProcessPeb @ 0x14067EEF8 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeThreadMessages @ 0x14067F234 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x14067FE44 (DbgkpWakeTarget.c)
 */

__int64 DbgkpSetProcessDebugObject(ULONG_PTR BugCheckParameter1, PRKEVENT Event, int a3, ...)
{
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v4; // rbx
  int v5; // edi
  _QWORD *NextProcessThread; // r14
  struct _KEVENT *Flink; // r14
  __int64 v10; // rcx
  struct _KEVENT *v11; // rbx
  LONG SignalState; // eax
  struct _LIST_ENTRY *Blink; // r13
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rax
  struct _KEVENT **v16; // rax
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *v18; // rax
  LONG v19; // eax
  __int64 *v20; // rax
  struct _KTHREAD *v22; // [rsp+30h] [rbp-30h]
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  PKGUARDED_MUTEX Mutex; // [rsp+40h] [rbp-20h]
  __int64 *v25; // [rsp+48h] [rbp-18h] BYREF
  struct _KEVENT *v26; // [rsp+50h] [rbp-10h]
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
  v26 = (struct _KEVENT *)&v25;
  v5 = a3;
  v22 = CurrentThread;
  if ( a3 < 0 )
    v4 = 0LL;
  v28 = 0;
  if ( a3 >= 0 )
    v5 = 0;
  v29 = v4;
  v25 = (__int64 *)&v25;
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
    v10 = v5;
    while ( 1 )
    {
      v11 = Flink;
      Flink = *(struct _KEVENT **)&Flink->Header.Lock;
      SignalState = v11[3].Header.SignalState;
      if ( (SignalState & 4) != 0 && (struct _KTHREAD *)v11[3].Header.WaitListHead.Flink == CurrentThread )
        break;
LABEL_36:
      if ( Flink == (struct _KEVENT *)&Event[3].Header.WaitListHead )
      {
        v4 = v29;
        goto LABEL_38;
      }
    }
    Blink = v11[2].Header.WaitListHead.Blink;
    if ( v10 < 0 )
    {
      v17 = *(struct _LIST_ENTRY **)&v11->Header.Lock;
      v18 = v11->Header.WaitListHead.Flink;
      if ( *(struct _KEVENT **)(*(_QWORD *)&v11->Header.Lock + 8LL) != v11 || (struct _KEVENT *)v18->Flink != v11 )
        __fastfail(3u);
      v18->Flink = v17;
      v17->Blink = v18;
      v16 = (struct _KEVENT **)v26;
      if ( *(__int64 ***)&v26->Header.Lock != &v25 )
        __fastfail(3u);
    }
    else
    {
      if ( (SignalState & 0x10) == 0 )
      {
        if ( v27 )
        {
          v11[3].Header.SignalState = SignalState & 0xFFFFFFFB;
          KeSetEvent(Event, 0, 0);
          v27 = 0;
        }
        v11[3].Header.WaitListHead.Flink = 0LL;
        _InterlockedOr((volatile signed __int32 *)&Blink[108].Blink, 0x40u);
        goto LABEL_33;
      }
      _InterlockedOr((volatile signed __int32 *)&Blink[108].Blink, 0x80u);
      v14 = *(struct _LIST_ENTRY **)&v11->Header.Lock;
      v15 = v11->Header.WaitListHead.Flink;
      if ( *(struct _KEVENT **)(*(_QWORD *)&v11->Header.Lock + 8LL) != v11 || (struct _KEVENT *)v15->Flink != v11 )
        __fastfail(3u);
      v15->Flink = v14;
      v14->Blink = v15;
      v16 = (struct _KEVENT **)v26;
      if ( *(__int64 ***)&v26->Header.Lock != &v25 )
        __fastfail(3u);
    }
    *(_QWORD *)&v11->Header.Lock = &v25;
    v11->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v16;
    *v16 = v11;
    v26 = v11;
LABEL_33:
    v19 = v11[3].Header.SignalState;
    if ( (v19 & 8) != 0 )
    {
      v11[3].Header.SignalState = v19 & 0xFFFFFFF7;
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Blink[107]);
    }
    CurrentThread = v22;
    v10 = v5;
    goto LABEL_36;
  }
LABEL_38:
  KeReleaseGuardedMutex(Mutex);
  if ( v28 )
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x4F676244u);
  while ( v25 != (__int64 *)&v25 )
  {
    v20 = (__int64 *)*v25;
    if ( (__int64 **)v25[1] != &v25 || (__int64 *)v20[1] != v25 )
      __fastfail(3u);
    v25 = (__int64 *)*v25;
    v20[1] = (__int64)&v25;
    DbgkpWakeTarget();
  }
  if ( v5 >= 0 )
    DbgkpMarkProcessPeb(BugCheckParameter1);
  return (unsigned int)v5;
}
