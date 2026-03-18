/*
 * XREFs of FsRtlRemovePerStreamContext @ 0x140226510
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlRemovePerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  struct _FSRTL_PER_STREAM_CONTEXT *v9; // rbx
  _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *Blink; // rcx

  if ( !StreamContext || (StreamContext->Flags2 & 2) == 0 )
    return 0LL;
  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    ExAcquireFastMutex(StreamContext->FastMutex);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
  }
  v9 = 0LL;
  p_FilterContexts = &StreamContext->FilterContexts;
  Flink = StreamContext->FilterContexts.Flink;
  if ( InstanceId )
  {
    while ( Flink != p_FilterContexts )
    {
      if ( Flink[1].Flink == OwnerId && Flink[1].Blink == InstanceId )
        goto LABEL_9;
      Flink = Flink->Flink;
    }
  }
  else if ( OwnerId )
  {
    while ( Flink != p_FilterContexts )
    {
      if ( Flink[1].Flink == OwnerId )
        goto LABEL_9;
      Flink = Flink->Flink;
    }
  }
  else if ( Flink != p_FilterContexts )
  {
LABEL_9:
    v9 = (struct _FSRTL_PER_STREAM_CONTEXT *)Flink;
    if ( Flink )
    {
      v12 = Flink->Flink;
      if ( Flink->Flink->Blink != Flink
        || (Blink = Flink->Blink, (struct _FSRTL_PER_STREAM_CONTEXT *)Blink->Flink != v9) )
      {
        __fastfail(3u);
      }
      Blink->Flink = v12;
      v12->Blink = Blink;
    }
  }
  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    KeReleaseGuardedMutex(StreamContext->FastMutex);
  }
  else
  {
    ExReleasePushLockEx((ULONG_PTR)&StreamContext->PushLock, 0LL, v7, v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v9;
}
