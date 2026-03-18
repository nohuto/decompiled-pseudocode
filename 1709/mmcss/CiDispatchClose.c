/*
 * XREFs of CiDispatchClose @ 0x1C00095F0
 * Callers:
 *     <none>
 * Callees:
 *     CiTaskIndexDereference @ 0x1C000233C (CiTaskIndexDereference.c)
 *     CiThreadDereference @ 0x1C000AD58 (CiThreadDereference.c)
 *     CiProcessDereference @ 0x1C000B1A4 (CiProcessDereference.c)
 */

__int64 __fastcall CiDispatchClose(__int64 a1, IRP *a2)
{
  PFILE_OBJECT FileObject; // rcx
  _QWORD *FsContext; // rdi
  volatile signed __int64 *v5; // rcx

  FileObject = a2->Tail.Overlay.CurrentStackLocation->FileObject;
  FsContext = FileObject->FsContext;
  if ( FsContext )
  {
    if ( *(_DWORD *)FsContext == 1 )
    {
      ExAcquirePushLockExclusiveEx(FsContext + 2, 0LL);
      FsContext[1] = 0LL;
      FsContext[3] = 0LL;
      ExReleasePushLockExclusiveEx(FsContext + 2, 0LL);
      CiProcessDereference(FsContext);
    }
    else
    {
      v5 = (volatile signed __int64 *)FileObject->FsContext;
      if ( *(_DWORD *)FsContext )
        CiTaskIndexDereference(v5);
      else
        CiThreadDereference(v5);
    }
  }
  a2->IoStatus.Status = 0;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
