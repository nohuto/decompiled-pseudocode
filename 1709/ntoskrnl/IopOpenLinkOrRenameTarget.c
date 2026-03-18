/*
 * XREFs of IopOpenLinkOrRenameTarget @ 0x140587A24
 * Callers:
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     IoSetInformation @ 0x14059BCF0 (IoSetInformation.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14002469C (IopGetFileObjectExtension.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     IoCreateFileEx @ 0x14053C540 (IoCreateFileEx.c)
 *     IopGetBasicInformationFile @ 0x140587C5C (IopGetBasicInformationFile.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406B71C0 (IoConvertFileHandleToKernelHandle.c)
 */

__int64 __fastcall IopOpenLinkOrRenameTarget(_QWORD *a1, __int64 a2, __int64 a3, struct _FILE_OBJECT *a4)
{
  HANDLE v4; // rdi
  bool v6; // zf
  __int64 v8; // r13
  int v10; // esi
  __int64 result; // rax
  __int64 v12; // rcx
  char v13; // al
  _QWORD *FileObjectExtension; // rax
  __int64 v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r8
  NTSTATUS v20; // ebx
  ACCESS_MASK v21; // edx
  HANDLE v22; // rsi
  struct _FILE_OBJECT *v23; // r14
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  __int64 v27; // [rsp+48h] [rbp-B8h]
  int v28; // [rsp+50h] [rbp-B0h]
  int v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE FileHandle; // [rsp+88h] [rbp-78h] BYREF
  PVOID v33; // [rsp+90h] [rbp-70h] BYREF
  _WORD v34[4]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-60h]
  _BYTE DriverContext[40]; // [rsp+A8h] [rbp-58h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v37; // [rsp+D0h] [rbp-30h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp+8h] BYREF
  char v40; // [rsp+138h] [rbp+38h]

  v4 = 0LL;
  v6 = (a4->Flags & 0x800) == 0;
  v8 = a2;
  Handle = 0LL;
  v10 = 2;
  if ( v6 )
  {
    result = IopGetBasicInformationFile(a4);
    if ( (int)result < 0 )
      return result;
    if ( (v40 & 0x10) != 0 )
      v10 = 4;
  }
  v12 = *(_QWORD *)(a3 + 8);
  if ( v12 )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      LOBYTE(a2) = 1;
      result = IoConvertFileHandleToKernelHandle(v12, a2, 0LL, 0LL, &Handle);
      if ( (int)result < 0 )
        return result;
      v4 = Handle;
    }
    else
    {
      v4 = *(HANDLE *)(a3 + 8);
      Handle = v4;
    }
  }
  v34[0] = *(_WORD *)(a3 + 16);
  v34[1] = v34[0];
  ObjectAttributes.Length = 48;
  v35 = a3 + 20;
  v13 = ~(unsigned __int8)(a4->Flags >> 11);
  ObjectAttributes.RootDirectory = v4;
  ObjectAttributes.Attributes = v13 & 0x40 | 0x200;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v34;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  memset(DriverContext, 0, sizeof(DriverContext));
  strcpy(DriverContext, "(");
  *(_QWORD *)&DriverContext[32] = 1LL;
  FileObjectExtension = (_QWORD *)IopGetFileObjectExtension((__int64)a4, 1, 0LL);
  if ( FileObjectExtension )
    *(_QWORD *)&DriverContext[16] = *FileObjectExtension;
  v17 = IopGetFileObjectExtension(v15, 0, v16);
  v18 = *(_QWORD *)(v8 + 184);
  *(_QWORD *)&DriverContext[24] = v17;
  v20 = IoCreateFileEx(
          &FileHandle,
          v10 | 0x100000,
          &ObjectAttributes,
          &IoStatusBlock,
          (PLARGE_INTEGER)(v19 & (unsigned __int64)Object),
          v19 & HandleInformation,
          3u,
          1u,
          0x4000u,
          (PVOID)(v19 & v27),
          v19 & v28,
          (CREATE_FILE_TYPE)(v19 & v29),
          (PVOID)(v19 & v30),
          ((*(_BYTE *)(v18 - 70) & 1) == 0) | 0x104,
          (PIO_DRIVER_CREATE_CONTEXT)DriverContext);
  if ( v20 >= 0 )
  {
    v21 = v10;
    v22 = FileHandle;
    v20 = ObReferenceObjectByHandle(FileHandle, v21, (POBJECT_TYPE)IoFileObjectType, 0, &v33, &v37);
    if ( v20 < 0 )
    {
      ObCloseHandle(v22, 0);
    }
    else
    {
      v23 = (struct _FILE_OBJECT *)v33;
      ObfDereferenceObject(v33);
      RelatedDeviceObject = IoGetRelatedDeviceObject(a4);
      if ( IoGetRelatedDeviceObject(v23) == RelatedDeviceObject )
      {
        *(_QWORD *)(v18 - 48) = v23;
        v20 = 0;
        *a1 = v22;
      }
      else
      {
        ObCloseHandle(v22, 0);
        v20 = -1073741612;
      }
    }
  }
  if ( v4 )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
      ObCloseHandle(Handle, 0);
  }
  return (unsigned int)v20;
}
