/*
 * XREFs of FsRtlRemovePerFileContext @ 0x1401E45E0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlRemovePerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  signed __int64 v5; // rax
  ULONG_PTR v6; // rbp
  struct _FSRTL_PER_FILE_CONTEXT **v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_FILE_CONTEXT *v10; // rdi
  struct _FSRTL_PER_FILE_CONTEXT *i; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v5 = _InterlockedCompareExchange64((volatile signed __int64 *)PerFileContextPointer, 0LL, 0LL);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  v8 = (struct _FSRTL_PER_FILE_CONTEXT **)(v5 + 8);
  if ( *v8 == (struct _FSRTL_PER_FILE_CONTEXT *)v8 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  v10 = 0LL;
  if ( InstanceId )
  {
    for ( i = *v8; i != (struct _FSRTL_PER_FILE_CONTEXT *)v8; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
        goto LABEL_17;
    }
  }
  else if ( OwnerId )
  {
    for ( i = *v8; i != (struct _FSRTL_PER_FILE_CONTEXT *)v8; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
      {
LABEL_17:
        v10 = i;
        goto LABEL_20;
      }
    }
  }
  else if ( *v8 != (struct _FSRTL_PER_FILE_CONTEXT *)v8 )
  {
    v10 = *v8;
LABEL_20:
    if ( v10 )
    {
      Flink = v10->Links.Flink;
      Blink = v10->Links.Blink;
      if ( (struct _FSRTL_PER_FILE_CONTEXT *)v10->Links.Flink->Blink != v10
        || (struct _FSRTL_PER_FILE_CONTEXT *)Blink->Flink != v10 )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
  }
  ExReleasePushLockEx(v6, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v10;
}
