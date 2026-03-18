/*
 * XREFs of FsRtlRemovePerFileObjectContext @ 0x14001B940
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlRemovePerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  _QWORD *FileObjectExtension; // rax
  ULONG_PTR v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v8; // rbx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *Flink; // rax
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT **v13; // rax

  if ( !FileObject )
    return 0LL;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( FileObjectExtension )
  {
    if ( FileObjectExtension != IopRevocationExtension )
    {
      v6 = FileObjectExtension[4];
      if ( v6 )
      {
        CurrentThread = KeGetCurrentThread();
        v8 = 0LL;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v6, 0LL);
        if ( InstanceId )
        {
          Flink = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v6 + 8);
          if ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v6 + 8) )
          {
            while ( Flink->OwnerId != OwnerId || Flink->InstanceId != InstanceId )
            {
              Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
              if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v6 + 8) )
                goto LABEL_14;
            }
            goto LABEL_9;
          }
        }
        else if ( OwnerId )
        {
          Flink = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v6 + 8);
          if ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v6 + 8) )
          {
            while ( Flink->OwnerId != OwnerId )
            {
              Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
              if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v6 + 8) )
                goto LABEL_14;
            }
LABEL_9:
            v8 = Flink;
            goto LABEL_10;
          }
        }
        else
        {
          v13 = (struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v6 + 8);
          if ( *v13 != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v13 )
          {
            v8 = *v13;
LABEL_10:
            if ( v8 )
            {
              v10 = v8->Links.Flink;
              Blink = v8->Links.Blink;
              if ( (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v8->Links.Flink->Blink != v8
                || (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Blink->Flink != v8 )
              {
                __fastfail(3u);
              }
              Blink->Flink = v10;
              v10->Blink = Blink;
            }
          }
        }
LABEL_14:
        ExReleasePushLockEx(v6, 0LL);
        KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
        return v8;
      }
    }
  }
  return 0LL;
}
