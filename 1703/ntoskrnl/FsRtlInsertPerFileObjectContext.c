/*
 * XREFs of FsRtlInsertPerFileObjectContext @ 0x140051050
 * Callers:
 *     <none>
 * Callees:
 *     IoGetFileObjectFilterContext @ 0x140051164 (IoGetFileObjectFilterContext.c)
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileObjectContext(PFILE_OBJECT FileObject, PFSRTL_PER_FILEOBJECT_CONTEXT Ptr)
{
  NTSTATUS result; // eax
  _QWORD *PoolWithTag; // rax
  void *v6; // r9
  _QWORD *v7; // rax
  signed __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rbx
  struct _LIST_ENTRY *v11; // rdx
  struct _LIST_ENTRY *v12; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h]

  if ( !FileObject )
    return -1073741811;
  result = IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 1);
  if ( result >= 0 )
  {
    if ( !BugCheckParameter2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x58434F46u);
      BugCheckParameter2 = (ULONG_PTR)PoolWithTag;
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        return -1073741670;
      *PoolWithTag = 0LL;
      v7 = PoolWithTag + 1;
      v14 = 0LL;
      v7[1] = v7;
      *v7 = v7;
      if ( FileObject->FileObjectExtension )
      {
        IopGetFileObjectExtension(FileObject, 3LL);
        if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 32), v8, 0LL) )
          goto LABEL_7;
        v6 = (void *)BugCheckParameter2;
      }
      ExFreePoolWithTag(v6, 0);
      IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 0LL);
      if ( !BugCheckParameter2 )
        return -1073741823;
    }
LABEL_7:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v11 = *(struct _LIST_ENTRY **)(v10 + 8);
    v12 = (struct _LIST_ENTRY *)(v10 + 8);
    if ( v11->Blink != (struct _LIST_ENTRY *)(v10 + 8) )
      __fastfail(3u);
    Ptr->Links.Flink = v11;
    Ptr->Links.Blink = v12;
    v11->Blink = &Ptr->Links;
    v12->Flink = &Ptr->Links;
    ExReleasePushLockEx(v10, 0LL);
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
    return 0;
  }
  return result;
}
