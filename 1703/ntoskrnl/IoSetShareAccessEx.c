/*
 * XREFs of IoSetShareAccessEx @ 0x140005710
 * Callers:
 *     RawCreate @ 0x140421D48 (RawCreate.c)
 *     IoSetShareAccess @ 0x1404220B0 (IoSetShareAccess.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetShareAccessEx(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        PBOOLEAN WritePermission)
{
  _DWORD *FileObjectExtension; // rax
  char v6; // r11
  bool v7; // dl

  FileObjectExtension = FileObject->FileObjectExtension;
  v6 = DesiredShareAccess;
  FileObject->ReadAccess = (DesiredAccess & 0x21) != 0;
  FileObject->WriteAccess = (DesiredAccess & 6) != 0;
  FileObject->DeleteAccess = BYTE2(DesiredAccess) & 1;
  v7 = FileObjectExtension && (*FileObjectExtension & 1) != 0;
  if ( (DesiredAccess & 0x21) == 0 && (DesiredAccess & 6) == 0 && (DesiredAccess & 0x10000) == 0 )
    goto LABEL_9;
  FileObject->SharedWrite = (v6 & 2) != 0;
  FileObject->SharedRead = v6 & 1;
  FileObject->SharedDelete = (v6 & 4) != 0;
  if ( WritePermission && !*WritePermission && (v6 & 1) == 0 )
    FileObject->SharedRead = 1;
  if ( !v7 )
  {
    ShareAccess->OpenCount = 1;
    ShareAccess->Readers = FileObject->ReadAccess;
    ShareAccess->Writers = FileObject->WriteAccess;
    ShareAccess->Deleters = FileObject->DeleteAccess;
    ShareAccess->SharedRead = FileObject->SharedRead;
    ShareAccess->SharedWrite = FileObject->SharedWrite;
    ShareAccess->SharedDelete = FileObject->SharedDelete;
  }
  else
  {
LABEL_9:
    *(_QWORD *)&ShareAccess->SharedRead = 0LL;
    *(_QWORD *)&ShareAccess->Writers = 0LL;
    *(_QWORD *)&ShareAccess->OpenCount = 0LL;
    ShareAccess->SharedDelete = 0;
  }
}
