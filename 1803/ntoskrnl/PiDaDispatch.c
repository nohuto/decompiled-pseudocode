/*
 * XREFs of PiDaDispatch @ 0x14050A3B0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PiDqDispatch @ 0x14050B510 (PiDqDispatch.c)
 */

__int64 __fastcall PiDaDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  PFILE_OBJECT FileObject; // rdi
  unsigned int v7; // ebx
  wchar_t *Buffer; // r11
  void *v10; // rax
  unsigned __int64 v11; // rdx
  wchar_t *v12; // rcx
  __int64 v13; // rbx
  int v14; // r10d
  int v15; // r9d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  FileObject = CurrentStackLocation->FileObject;
  if ( CurrentStackLocation->MajorFunction )
  {
    return ((unsigned int (__fastcall *)(__int64, IRP *, IRP *))*(&funcs_14050A3F1 + 3 * (__int64)FileObject->FsContext))(
             a1,
             a2,
             a2);
  }
  else
  {
    Buffer = FileObject->FileName.Buffer;
    if ( !Buffer )
      goto LABEL_14;
    v10 = 0LL;
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (&IrpHandlingTable)[v11];
      v13 = (char *)Buffer - (char *)v12;
      do
      {
        v14 = *(wchar_t *)((char *)v12 + v13);
        v15 = *v12 - v14;
        if ( v15 )
          break;
        ++v12;
      }
      while ( v14 );
      if ( !v15 )
        break;
      v10 = (char *)v10 + 1;
      v11 += 3LL;
      if ( v11 >= 15 )
        goto LABEL_14;
    }
    if ( v10 == (void *)-1LL )
    {
LABEL_14:
      v7 = -1073741811;
      a2->IoStatus.Status = -1073741811;
      IofCompleteRequest(a2, 0);
      return v7;
    }
    FileObject->FsContext = v10;
    return ((unsigned int (__fastcall *)(__int64, IRP *, IRP *))*(&IrpHandlingTable + 3 * (_QWORD)v10 + 1))(a1, a2, a2);
  }
}
