/*
 * XREFs of FsRtlLookupPerFileContext @ 0x1401E8A80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlLookupPerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  char *v3; // rbp
  struct _FSRTL_PER_FILE_CONTEXT *v4; // rdi
  struct _FSRTL_PER_FILE_CONTEXT **v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_FILE_CONTEXT *i; // rax

  v3 = (char *)*PerFileContextPointer;
  v4 = 0LL;
  if ( !*PerFileContextPointer )
    return 0LL;
  v7 = (struct _FSRTL_PER_FILE_CONTEXT **)(v3 + 8);
  if ( *v7 == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)v3, 0LL);
  if ( InstanceId )
  {
    for ( i = *v7; i != (struct _FSRTL_PER_FILE_CONTEXT *)v7; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
        goto LABEL_16;
    }
  }
  else if ( OwnerId )
  {
    for ( i = *v7; i != (struct _FSRTL_PER_FILE_CONTEXT *)v7; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
      {
LABEL_16:
        v4 = i;
        break;
      }
    }
  }
  else if ( *v7 != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
  {
    v4 = *v7;
  }
  ExReleasePushLockEx((ULONG_PTR)v3, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
