/*
 * XREFs of FsRtlRemovePerStreamContext @ 0x1401E46E0
 * Callers:
 *     FsRtlRemoveReservedPerStreamContext @ 0x1401E4830 (FsRtlRemoveReservedPerStreamContext.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlRemovePerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_STREAM_CONTEXT *Flink; // rdi
  struct _LIST_ENTRY *i; // rax
  _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *Blink; // rax

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
  Flink = 0LL;
  if ( InstanceId )
  {
    for ( i = StreamContext->FilterContexts.Flink; i != &StreamContext->FilterContexts; i = i->Flink )
    {
      if ( i[1].Flink == OwnerId && i[1].Blink == InstanceId )
        goto LABEL_20;
    }
  }
  else if ( OwnerId )
  {
    for ( i = StreamContext->FilterContexts.Flink; i != &StreamContext->FilterContexts; i = i->Flink )
    {
      if ( i[1].Flink == OwnerId )
      {
LABEL_20:
        Flink = (struct _FSRTL_PER_STREAM_CONTEXT *)i;
        goto LABEL_23;
      }
    }
  }
  else
  {
    p_FilterContexts = &StreamContext->FilterContexts;
    if ( p_FilterContexts->Flink != p_FilterContexts )
    {
      Flink = (struct _FSRTL_PER_STREAM_CONTEXT *)p_FilterContexts->Flink;
LABEL_23:
      if ( Flink )
      {
        v10 = Flink->Links.Flink;
        Blink = Flink->Links.Blink;
        if ( (struct _FSRTL_PER_STREAM_CONTEXT *)Flink->Links.Flink->Blink != Flink
          || (struct _FSRTL_PER_STREAM_CONTEXT *)Blink->Flink != Flink )
        {
          __fastfail(3u);
        }
        Blink->Flink = v10;
        v10->Blink = Blink;
      }
    }
  }
  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    KeReleaseGuardedMutex(StreamContext->FastMutex);
  }
  else
  {
    ExReleasePushLockEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return Flink;
}
