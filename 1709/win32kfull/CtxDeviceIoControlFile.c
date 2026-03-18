/*
 * XREFs of CtxDeviceIoControlFile @ 0x1C02A8068
 * Callers:
 *     EngFileIoControl @ 0x1C0268110 (EngFileIoControl.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CtxDeviceIoControlFile(
        struct _FILE_OBJECT *Object,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        int a7,
        int a8,
        PIO_STATUS_BLOCK a9)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK *IoStatusBlock; // rsi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbp
  PIRP v16; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v18; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  if ( (Object->Flags & 2) != 0 )
    return -1073741776;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  IoStatusBlock = (struct _IO_STATUS_BLOCK *)&v18;
  if ( a9 )
    IoStatusBlock = a9;
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  v16 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          RelatedDeviceObject,
          InputBuffer,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          IoStatusBlock);
  if ( !v16 )
    return -1073741670;
  ObfReferenceObject(Object);
  CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
  v16->Tail.Overlay.OriginalFileObject = Object;
  CurrentStackLocation[-1].FileObject = Object;
  v16->Flags |= 4u;
  result = IofCallDriver(RelatedDeviceObject, v16);
  if ( result == 259 )
  {
    result = KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
    if ( !result )
      return IoStatusBlock->Status;
  }
  return result;
}
