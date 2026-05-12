/*
 * XREFs of StorpAdapterTopologyWorkItemRoutine @ 0x1C000E310
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     memset @ 0x1C001F680 (memset.c)
 */

void __fastcall StorpAdapterTopologyWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  void *DeviceExtension; // r14
  _DWORD *OutputBuffer; // rbx
  char v5; // r12
  SIZE_T OutputBufferLength; // rdi
  size_t v7; // r15
  PIRP v8; // rax
  struct _KEVENT Event; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+Fh] BYREF
  __int64 InputBuffer; // [rsp+78h] [rbp+1Fh] BYREF
  int v12; // [rsp+80h] [rbp+27h]

  DeviceExtension = DeviceObject->DeviceExtension;
  OutputBuffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&Event, 0, sizeof(Event));
  v5 = 0;
  InputBuffer = 0LL;
  v12 = 0;
  if ( !KeGetCurrentIrql() )
  {
    LODWORD(OutputBufferLength) = 18768;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    OutputBuffer = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4950uLL, 0x65546152u);
    if ( OutputBuffer )
    {
      v7 = 18768LL;
      do
      {
        memset(OutputBuffer, 0, v7);
        InputBuffer = 53LL;
        v8 = IoBuildDeviceIoControlRequest(
               0x2D1400u,
               *((PDEVICE_OBJECT *)DeviceExtension + 1),
               &InputBuffer,
               0xCu,
               OutputBuffer,
               OutputBufferLength,
               0,
               &Event,
               &IoStatusBlock);
        if ( !v8 )
          break;
        v8->IoStatus.Status = -1073741637;
        if ( IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 1), v8) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        if ( OutputBuffer[1] <= (unsigned int)OutputBufferLength )
          break;
        if ( v5 )
          break;
        OutputBufferLength = (unsigned int)OutputBuffer[1];
        ExFreePoolWithTag(OutputBuffer, 0x65546152u);
        v5 = 1;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v7 = OutputBufferLength;
        OutputBuffer = ExAllocatePoolWithTag(NonPagedPoolNx, OutputBufferLength, 0x65546152u);
      }
      while ( OutputBuffer );
    }
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 32));
  if ( OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0x65546152u);
  if ( Context )
    IoFreeWorkItem(Context);
}
