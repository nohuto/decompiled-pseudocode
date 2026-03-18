/*
 * XREFs of IoUpdateShareAccess @ 0x14043D480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  _DWORD *FileObjectExtension; // rax
  char v3; // al
  bool v4; // zf

  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension || (v4 = (*FileObjectExtension & 1) == 0, v3 = 1, v4) )
    v3 = 0;
  if ( (FileObject->ReadAccess || FileObject->WriteAccess || FileObject->DeleteAccess) && !v3 )
  {
    ++ShareAccess->OpenCount;
    ShareAccess->Readers += FileObject->ReadAccess;
    ShareAccess->Writers += FileObject->WriteAccess;
    ShareAccess->Deleters += FileObject->DeleteAccess;
    ShareAccess->SharedRead += FileObject->SharedRead;
    ShareAccess->SharedWrite += FileObject->SharedWrite;
    ShareAccess->SharedDelete += FileObject->SharedDelete;
  }
}
