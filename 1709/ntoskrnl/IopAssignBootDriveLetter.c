/*
 * XREFs of IopAssignBootDriveLetter @ 0x14084468C
 * Callers:
 *     IopMarkBootPartition @ 0x140844A20 (IopMarkBootPartition.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x140060870 (IopBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     IoGetDeviceObjectPointer @ 0x140560DB0 (IoGetDeviceObjectPointer.c)
 */

NTSTATUS IopAssignBootDriveLetter()
{
  NTSTATUS result; // eax
  IRP *v1; // rax
  NTSTATUS Status; // ebx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  struct _IO_STATUS_BLOCK v4; // [rsp+60h] [rbp+27h] BYREF
  struct _KEVENT Object; // [rsp+70h] [rbp+37h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+5Fh]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+67h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+6Fh] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  result = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( result >= 0 )
  {
    LOWORD(Object.Header.Lock) = 0;
    Object.Header.SignalState = 0;
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    Object.Header.Size = 6;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    v1 = IopBuildDeviceIoControlRequest(7192644, (__int64)DeviceObject, 0LL, 0, 0LL, 0, 0, &Object, &v4, retaddr);
    if ( v1 )
    {
      Status = IofCallDriver(DeviceObject, v1);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = v4.Status;
      }
    }
    else
    {
      Status = -1073741670;
    }
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    return Status;
  }
  return result;
}
