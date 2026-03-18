/*
 * XREFs of FsRtlRemovePerFileContext @ 0x1402263B0
 * Callers:
 *     <none>
 * Callees:
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlRemovePerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // r14
  struct _FSRTL_PER_FILE_CONTEXT **v7; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _FSRTL_PER_FILE_CONTEXT *Flink; // rax
  struct _FSRTL_PER_FILE_CONTEXT *v12; // rdi
  struct _LIST_ENTRY *v13; // rcx
  struct _FSRTL_PER_FILE_CONTEXT **Blink; // rax
  struct _KTHREAD *v15; // rcx
  bool v16; // zf

  v5 = _InterlockedCompareExchange64((volatile signed __int64 *)PerFileContextPointer, 0LL, 0LL);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  v7 = (struct _FSRTL_PER_FILE_CONTEXT **)(v5 + 8);
  if ( *v7 == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v5, 0LL);
  Flink = *v7;
  v12 = 0LL;
  if ( InstanceId )
  {
    while ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    {
      if ( Flink->OwnerId == OwnerId && Flink->InstanceId == InstanceId )
        goto LABEL_10;
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( OwnerId )
  {
    while ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    {
      if ( Flink->OwnerId == OwnerId )
        goto LABEL_10;
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
  {
LABEL_10:
    v12 = Flink;
    if ( Flink )
    {
      v13 = Flink->Links.Flink;
      Blink = (struct _FSRTL_PER_FILE_CONTEXT **)Flink->Links.Blink;
      if ( (struct _FSRTL_PER_FILE_CONTEXT *)v13->Blink != v12 || *Blink != v12 )
        __fastfail(3u);
      *Blink = (struct _FSRTL_PER_FILE_CONTEXT *)v13;
      v13->Blink = (struct _LIST_ENTRY *)Blink;
    }
  }
  ExReleasePushLockEx(v6, 0LL, v9, v10);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable++ == -1;
  if ( v16
    && ($005F0E83B22994B61E86C72E0CE43C71 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    if ( KeGetCurrentIrql() )
    {
      LOBYTE(v15) = 1;
      KeGetCurrentThread()->ApcState.KernelApcPending = 1;
      HalRequestSoftwareInterrupt(v15);
    }
    else
    {
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      __writecr8(0LL);
    }
  }
  return v12;
}
