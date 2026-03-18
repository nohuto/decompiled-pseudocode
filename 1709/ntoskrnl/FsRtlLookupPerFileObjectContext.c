/*
 * XREFs of FsRtlLookupPerFileObjectContext @ 0x140100040
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlLookupPerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  _QWORD *FileObjectExtension; // rax
  ULONG_PTR v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v9; // rbp
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *Flink; // rax
  struct _KTHREAD *v11; // rdx
  bool v12; // zf
  struct _FSRTL_PER_FILEOBJECT_CONTEXT **v13; // rax

  if ( !FileObject )
    return 0LL;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension )
    return 0LL;
  if ( FileObjectExtension == IopRevocationExtension )
    return 0LL;
  v7 = FileObjectExtension[4];
  if ( !v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(v7, 0LL);
  if ( InstanceId )
  {
    Flink = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 8);
    if ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v7 + 8) )
    {
      while ( Flink->OwnerId != OwnerId || Flink->InstanceId != InstanceId )
      {
        Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
        if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v7 + 8) )
          goto LABEL_11;
      }
      goto LABEL_10;
    }
  }
  else
  {
    if ( !OwnerId )
    {
      v13 = (struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 8);
      if ( *v13 != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v13 )
        v9 = *v13;
      goto LABEL_11;
    }
    Flink = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 8);
    if ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v7 + 8) )
    {
      while ( Flink->OwnerId != OwnerId )
      {
        Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
        if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v7 + 8) )
          goto LABEL_11;
      }
LABEL_10:
      v9 = Flink;
    }
  }
LABEL_11:
  ExReleasePushLockEx(v7, 0LL);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable++ == -1;
  if ( v12
    && ($B476B70DB57F76B110DA5B9238C3E934 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v9;
}
