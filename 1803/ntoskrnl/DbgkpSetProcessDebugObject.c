/*
 * XREFs of DbgkpSetProcessDebugObject @ 0x14070F46C
 * Callers:
 *     NtDebugActiveProcess @ 0x14070F9D8 (NtDebugActiveProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     PsGetNextProcessThread @ 0x1404E8150 (PsGetNextProcessThread.c)
 *     DbgkpMarkProcessPeb @ 0x14070E7A8 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeThreadMessages @ 0x14070EB0C (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x14070F788 (DbgkpWakeTarget.c)
 */

__int64 DbgkpSetProcessDebugObject(ULONG_PTR BugCheckParameter1, PRKEVENT Event, int a3, ...)
{
  struct _KTHREAD *CurrentThread; // r13
  int v4; // edi
  struct _EX_RUNDOWN_REF *v7; // rbx
  _QWORD *NextProcessThread; // r14
  struct _KEVENT *Flink; // r14
  struct _KEVENT *v10; // rbx
  LONG SignalState; // eax
  struct _LIST_ENTRY *Blink; // r13
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *v14; // rax
  PVOID *v15; // rax
  struct _KEVENT **v16; // rax
  LONG v17; // eax
  PVOID v18; // rcx
  __int64 v19; // rax
  struct _KTHREAD *v21; // [rsp+30h] [rbp-30h]
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  PKGUARDED_MUTEX Mutex; // [rsp+40h] [rbp-20h]
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID *p_P; // [rsp+50h] [rbp-10h]
  char v26; // [rsp+A8h] [rbp+48h]
  char v27; // [rsp+B0h] [rbp+50h]
  struct _EX_RUNDOWN_REF *v28; // [rsp+B8h] [rbp+58h] BYREF
  va_list va; // [rsp+B8h] [rbp+58h]
  va_list va1; // [rsp+C0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v28 = va_arg(va1, struct _EX_RUNDOWN_REF *);
  CurrentThread = KeGetCurrentThread();
  p_P = &P;
  v21 = CurrentThread;
  P = &P;
  v26 = 1;
  v4 = a3;
  v27 = 0;
  if ( a3 >= 0 )
  {
    v7 = v28;
    v4 = 0;
  }
  else
  {
    v7 = 0LL;
    v28 = 0LL;
  }
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      v27 = 1;
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      if ( *(_QWORD *)(BugCheckParameter1 + 1056) )
        break;
      *(_QWORD *)(BugCheckParameter1 + 1056) = Event;
      ObfReferenceObjectWithTag(v7, 0x4F676244u);
      NextProcessThread = PsGetNextProcessThread(BugCheckParameter1, v7);
      if ( !NextProcessThread )
        goto LABEL_10;
      *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      v27 = 0;
      ObfDereferenceObjectWithTag(v7, 0x4F676244u);
      v4 = DbgkpPostFakeThreadMessages(
             BugCheckParameter1,
             Event,
             (unsigned __int64)NextProcessThread,
             &Object,
             (struct _EX_RUNDOWN_REF **)va);
      if ( v4 < 0 )
      {
        v7 = 0LL;
        v28 = 0LL;
        goto LABEL_10;
      }
      ObfDereferenceObjectWithTag(Object, 0x4F676244u);
      v7 = v28;
    }
    v4 = -1073741752;
  }
LABEL_10:
  Mutex = (PKGUARDED_MUTEX)&Event[1];
  ExAcquireFastMutex((PFAST_MUTEX)&Event[1]);
  if ( v4 >= 0 )
  {
    if ( (Event[4].Header.LockNV & 1) != 0 )
    {
      *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
      v4 = -1073740972;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 3u);
      ObfReferenceObject(Event);
      v7 = v28;
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
LABEL_34:
      if ( Flink == (struct _KEVENT *)&Event[3].Header.WaitListHead )
      {
        v7 = v28;
        goto LABEL_36;
      }
    }
    Blink = v10[2].Header.WaitListHead.Blink;
    if ( v4 < 0 )
    {
      if ( (struct _KEVENT *)Flink->Header.WaitListHead.Flink != v10
        || (v16 = (struct _KEVENT **)v10->Header.WaitListHead.Flink, *v16 != v10) )
      {
        __fastfail(3u);
      }
      *v16 = Flink;
      Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v16;
      v15 = p_P;
      if ( *p_P != &P )
        __fastfail(3u);
    }
    else
    {
      if ( (SignalState & 0x10) == 0 )
      {
        if ( v26 )
        {
          v10[3].Header.SignalState = SignalState & 0xFFFFFFFB;
          KeSetEvent(Event, 0, 0);
          v26 = 0;
        }
        v10[3].Header.WaitListHead.Flink = 0LL;
        _InterlockedOr((volatile signed __int32 *)&Blink[109], 0x40u);
        goto LABEL_31;
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
LABEL_31:
    v17 = v10[3].Header.SignalState;
    if ( (v17 & 8) != 0 )
    {
      v10[3].Header.SignalState = v17 & 0xFFFFFFF7;
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Blink[107].Blink);
    }
    CurrentThread = v21;
    goto LABEL_34;
  }
LABEL_36:
  KeReleaseGuardedMutex(Mutex);
  if ( v27 )
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x4F676244u);
  while ( 1 )
  {
    v18 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P || (v19 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
      __fastfail(3u);
    P = *(PVOID *)P;
    *(_QWORD *)(v19 + 8) = &P;
    DbgkpWakeTarget(v18);
  }
  if ( v4 >= 0 )
    DbgkpMarkProcessPeb(BugCheckParameter1);
  return (unsigned int)v4;
}
