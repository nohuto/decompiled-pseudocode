/*
 * XREFs of ?EngCreateFile@@YAPEAXPEBG@Z @ 0x1C027BE70
 * Callers:
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C027BFC4 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     MakeSystemRelativePath @ 0x1C02B1F84 (MakeSystemRelativePath.c)
 */

void *__fastcall EngCreateFile(const unsigned __int16 *a1)
{
  NTSTATUS v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _UNICODE_STRING Destination; // [rsp+70h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+D8h] [rbp+6Fh] BYREF

  FileHandle = (void *)-1LL;
  if ( (unsigned int)MakeSystemRelativePath(a1, &Destination) )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = IoCreateFile(
           &FileHandle,
           0x120089u,
           &ObjectAttributes,
           &IoStatusBlock,
           0LL,
           0x80u,
           1u,
           1u,
           0x10u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x309u);
    v3 = (__int64)FileHandle;
    if ( v1 < 0 )
      v3 = -1LL;
    FileHandle = (void *)v3;
    Win32FreePool(Destination.Buffer, v2);
  }
  return FileHandle;
}
