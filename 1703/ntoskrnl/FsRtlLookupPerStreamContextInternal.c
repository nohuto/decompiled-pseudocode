/*
 * XREFs of FsRtlLookupPerStreamContextInternal @ 0x1401E44F0
 * Callers:
 *     FsRtlLookupReservedPerStreamContext @ 0x14000B960 (FsRtlLookupReservedPerStreamContext.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlLookupPerStreamContextInternal(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_STREAM_CONTEXT *Flink; // rdi
  struct _LIST_ENTRY *i; // rax
  _LIST_ENTRY *p_FilterContexts; // rax

  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    ExAcquireFastMutex(StreamContext->FastMutex);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
  }
  Flink = 0LL;
  if ( InstanceId )
  {
    for ( i = StreamContext->FilterContexts.Flink; i != &StreamContext->FilterContexts; i = i->Flink )
    {
      if ( i[1].Flink == OwnerId && i[1].Blink == InstanceId )
        goto LABEL_17;
    }
  }
  else if ( OwnerId )
  {
    for ( i = StreamContext->FilterContexts.Flink; i != &StreamContext->FilterContexts; i = i->Flink )
    {
      if ( i[1].Flink == OwnerId )
      {
LABEL_17:
        Flink = (struct _FSRTL_PER_STREAM_CONTEXT *)i;
        break;
      }
    }
  }
  else
  {
    p_FilterContexts = &StreamContext->FilterContexts;
    if ( p_FilterContexts->Flink != p_FilterContexts )
      Flink = (struct _FSRTL_PER_STREAM_CONTEXT *)p_FilterContexts->Flink;
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
