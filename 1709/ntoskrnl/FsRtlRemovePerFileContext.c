/*
 * XREFs of FsRtlRemovePerFileContext @ 0x1401E8C70
 * Callers:
 *     <none>
 * Callees:
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
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
  struct _FSRTL_PER_FILE_CONTEXT *v9; // rdi
  struct _FSRTL_PER_FILE_CONTEXT *i; // rax
  struct _KTHREAD *v11; // rcx
  bool v12; // zf
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

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
  v9 = 0LL;
  if ( InstanceId )
  {
    for ( i = *v7; i != (struct _FSRTL_PER_FILE_CONTEXT *)v7; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
        goto LABEL_19;
    }
  }
  else if ( OwnerId )
  {
    for ( i = *v7; i != (struct _FSRTL_PER_FILE_CONTEXT *)v7; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
      {
LABEL_19:
        v9 = i;
        goto LABEL_22;
      }
    }
  }
  else if ( *v7 != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
  {
    v9 = *v7;
LABEL_22:
    if ( v9 )
    {
      Flink = v9->Links.Flink;
      Blink = v9->Links.Blink;
      if ( (struct _FSRTL_PER_FILE_CONTEXT *)v9->Links.Flink->Blink != v9
        || (struct _FSRTL_PER_FILE_CONTEXT *)Blink->Flink != v9 )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
  }
  ExReleasePushLockEx(v6, 0LL);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable++ == -1;
  if ( v12
    && ($B476B70DB57F76B110DA5B9238C3E934 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    if ( KeGetCurrentIrql() )
    {
      LOBYTE(v11) = 1;
      KeGetCurrentThread()->ApcState.KernelApcPending = 1;
      HalRequestSoftwareInterrupt(v11);
    }
    else
    {
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      __writecr8(0LL);
    }
  }
  return v9;
}
