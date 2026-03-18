/*
 * XREFs of RIMGetDeviceObjectPointer @ 0x1C0055740
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C0007C54 (RIMDeliverConfigRequest.c)
 *     RIMUpdateMonitorQuirk @ 0x1C0008ADC (RIMUpdateMonitorQuirk.c)
 *     RIMGetDeviceParent @ 0x1C00098C8 (RIMGetDeviceParent.c)
 *     RIMCreateHidDesc @ 0x1C0054FD4 (RIMCreateHidDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C00582E8 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C008DA68 (RIMSetDeviceIdleTimeout.c)
 *     rimOnPnpArrived @ 0x1C0094660 (rimOnPnpArrived.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ddD @ 0x1C0106D2C (WPP_RECORDER_SF_ddD.c)
 */

__int64 __fastcall RIMGetDeviceObjectPointer(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        void **a4,
        PVOID *a5,
        PDEVICE_OBJECT *a6)
{
  int v7; // edx
  NTSTATUS v8; // ebx
  int v9; // r8d
  int v10; // r9d
  struct _FILE_OBJECT *v11; // rcx
  int ShareAccess; // [rsp+20h] [rbp-59h]
  int OpenOptions; // [rsp+28h] [rbp-51h]
  void *FileHandle; // [rsp+40h] [rbp-39h] BYREF
  PVOID Object; // [rsp+48h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+7h] BYREF
  _DWORD v19[2]; // [rsp+90h] [rbp+17h] BYREF
  __int16 v20; // [rsp+98h] [rbp+1Fh]

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.SecurityQualityOfService = v19;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v19[0] = 12;
  v19[1] = 2;
  v20 = 257;
  v8 = ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v8 < 0 )
    goto LABEL_7;
  v8 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  if ( v8 < 0 )
  {
    ZwClose(FileHandle);
  }
  else
  {
    v11 = (struct _FILE_OBJECT *)Object;
    *a5 = Object;
    *a6 = IoGetRelatedDeviceObject(v11);
    *a4 = FileHandle;
  }
  if ( v8 < 0 )
LABEL_7:
    WPP_RECORDER_SF_ddD(WPP_GLOBAL_Control->DeviceExtension, v7, v9, v10, ShareAccess, OpenOptions);
  return (unsigned int)v8;
}
