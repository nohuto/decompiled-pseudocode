/*
 * XREFs of ?GetByObjectName@DeviceObjectPointer@Io@@SAJPEBU_UNICODE_STRING@@KKPEAV12@@Z @ 0x1C020B9C0
 * Callers:
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C020BC94 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ??1DeviceObjectPointer@Io@@QEAA@XZ @ 0x1C020B934 (--1DeviceObjectPointer@Io@@QEAA@XZ.c)
 */

__int64 __fastcall Io::DeviceObjectPointer::GetByObjectName(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  NTSTATUS v5; // ebx
  PDEVICE_OBJECT v6; // rax
  void *FileHandle[2]; // [rsp+30h] [rbp-29h] BYREF
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-19h]
  PVOID Object; // [rsp+48h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+27h] BYREF
  _DWORD v13[2]; // [rsp+90h] [rbp+37h] BYREF
  __int16 v14; // [rsp+98h] [rbp+3Fh]

  RelatedDeviceObject = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.SecurityQualityOfService = v13;
  ObjectAttributes.Length = 48;
  *(_OWORD *)FileHandle = 0LL;
  ObjectAttributes.Attributes = 512;
  v13[0] = 12;
  v13[1] = 2;
  v14 = 257;
  v5 = ZwOpenFile(FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v5 >= 0 )
  {
    v5 = ObReferenceObjectByHandle(FileHandle[0], 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    FileHandle[1] = Object;
    if ( v5 >= 0 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
      ObfReferenceObject(RelatedDeviceObject);
      *a4 = FileHandle[0];
      a4[1] = FileHandle[1];
      v6 = RelatedDeviceObject;
      RelatedDeviceObject = 0LL;
      a4[2] = v6;
      *(_OWORD *)FileHandle = 0LL;
    }
  }
  Io::DeviceObjectPointer::~DeviceObjectPointer((Io::DeviceObjectPointer *)FileHandle);
  return (unsigned int)v5;
}
