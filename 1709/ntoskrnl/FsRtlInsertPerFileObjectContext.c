/*
 * XREFs of FsRtlInsertPerFileObjectContext @ 0x140110E60
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     IoChangeFileObjectFilterContext @ 0x140110F4C (IoChangeFileObjectFilterContext.c)
 *     IoGetFileObjectFilterContext @ 0x140110FA0 (IoGetFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileObjectContext(PFILE_OBJECT FileObject, PFSRTL_PER_FILEOBJECT_CONTEXT Ptr)
{
  NTSTATUS result; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v6; // r8
  _QWORD *v7; // r10
  _QWORD *v8; // rax
  void *v9; // r10
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rbx
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp+8h] BYREF

  if ( !FileObject )
    return -1073741811;
  result = IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 1);
  if ( result >= 0 )
  {
    if ( BugCheckParameter2 )
      goto LABEL_6;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x58434F46u);
    BugCheckParameter2 = (ULONG_PTR)PoolWithTag;
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    *PoolWithTag = 0LL;
    LOBYTE(v6) = 1;
    v8 = PoolWithTag + 1;
    v8[1] = v8;
    *v8 = v8;
    if ( (int)IoChangeFileObjectFilterContext(FileObject, v7, v6) >= 0
      || (ExFreePoolWithTag(v9, 0),
          IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 0LL),
          BugCheckParameter2) )
    {
LABEL_6:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v11 = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v12 = (struct _LIST_ENTRY *)(v11 + 8);
      v13 = *(struct _LIST_ENTRY **)(v11 + 8);
      if ( v13->Blink != (struct _LIST_ENTRY *)(v11 + 8) )
        __fastfail(3u);
      Ptr->Links.Flink = v13;
      Ptr->Links.Blink = v12;
      v13->Blink = &Ptr->Links;
      v12->Flink = &Ptr->Links;
      ExReleasePushLockEx(v11, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
