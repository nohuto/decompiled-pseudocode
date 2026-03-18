/*
 * XREFs of ExpQueryCodeIntegrityCertificateInfo @ 0x140754C3C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x14017DDC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14017DE00 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x14017E200 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     FsRtlGetFileSize @ 0x1404FA2F0 (FsRtlGetFileSize.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406B71C0 (IoConvertFileHandleToKernelHandle.c)
 *     SeValidateFileAsImageType @ 0x140727F9C (SeValidateFileAsImageType.c)
 */

__int64 __fastcall ExpQueryCodeIntegrityCertificateInfo(void *a1, unsigned int a2)
{
  PVOID v2; // rsi
  HANDLE FileHandle; // r14
  int v4; // edi
  NTSTATUS v5; // eax
  HANDLE Handle; // [rsp+50h] [rbp-19h] BYREF
  PVOID Object; // [rsp+58h] [rbp-11h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-9h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  PVOID BaseAddress; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE SectionHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  Handle = 0LL;
  v2 = 0LL;
  SectionHandle = 0LL;
  FileHandle = 0LL;
  BaseAddress = 0LL;
  if ( a2 > 1 )
  {
    v4 = -1073741811;
  }
  else
  {
    v4 = IoConvertFileHandleToKernelHandle(a1, KeGetCurrentThread()->PreviousMode, 1u, 0, &Handle);
    if ( v4 >= 0 )
    {
      FileHandle = Handle;
      v5 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      v2 = Object;
      v4 = v5;
      if ( v5 >= 0 )
      {
        if ( *((_BYTE *)Object + 78) || *((_BYTE *)Object + 75) )
        {
          v4 = -1073741757;
        }
        else
        {
          v4 = FsRtlGetFileSize((PFILE_OBJECT)Object, &FileSize);
          if ( v4 >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            ObjectAttributes.ObjectName = 0LL;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v4 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
            if ( v4 >= 0 )
            {
              ViewSize = FileSize.QuadPart;
              v4 = ZwMapViewOfSection(
                     SectionHandle,
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     &BaseAddress,
                     0LL,
                     0LL,
                     0LL,
                     &ViewSize,
                     ViewShare,
                     0,
                     2u);
              if ( v4 < 0 )
              {
                BaseAddress = 0LL;
                goto LABEL_18;
              }
              v4 = SeValidateFileAsImageType();
              if ( v4 >= 0 )
                v4 = 0;
            }
            else
            {
              SectionHandle = 0LL;
            }
          }
        }
      }
      else
      {
        v2 = 0LL;
      }
    }
  }
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
LABEL_18:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v4;
}
