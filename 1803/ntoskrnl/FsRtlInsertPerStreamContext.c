/*
 * XREFs of FsRtlInsertPerStreamContext @ 0x140226100
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

NTSTATUS __stdcall FsRtlInsertPerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER PerStreamContext,
        PFSRTL_PER_STREAM_CONTEXT Ptr)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  struct _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *Flink; // rcx

  if ( !PerStreamContext || (PerStreamContext->Flags2 & 2) == 0 )
    return -1073741808;
  if ( (*((_BYTE *)PerStreamContext + 7) & 0xF0u) < 0x10 )
  {
    ExAcquireFastMutex(PerStreamContext->FastMutex);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PerStreamContext->PushLock, 0LL);
  }
  p_FilterContexts = &PerStreamContext->FilterContexts;
  Flink = PerStreamContext->FilterContexts.Flink;
  if ( Flink->Blink != &PerStreamContext->FilterContexts )
    __fastfail(3u);
  Ptr->Links.Blink = p_FilterContexts;
  Ptr->Links.Flink = Flink;
  Flink->Blink = &Ptr->Links;
  p_FilterContexts->Flink = &Ptr->Links;
  if ( (*((_BYTE *)PerStreamContext + 7) & 0xF0u) < 0x10 )
  {
    KeReleaseGuardedMutex(PerStreamContext->FastMutex);
  }
  else
  {
    ExReleasePushLockEx((ULONG_PTR)&PerStreamContext->PushLock, 0LL, v5, v6);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0;
}
