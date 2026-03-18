/*
 * XREFs of PoCreatePowerRequest @ 0x1404C73E0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x14007227C (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x140072528 (PoCaptureReasonContext.c)
 *     PopCreateKernelPowerRequest @ 0x1404C7330 (PopCreateKernelPowerRequest.c)
 */

NTSTATUS __stdcall PoCreatePowerRequest(
        PVOID *PowerRequest,
        PDEVICE_OBJECT DeviceObject,
        PCOUNTED_REASON_CONTEXT Context)
{
  NTSTATUS KernelPowerRequest; // ebx
  int *v6; // [rsp+40h] [rbp+8h] BYREF
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  *PowerRequest = 0LL;
  if ( !DeviceObject )
    return -1073741811;
  KernelPowerRequest = PoCaptureReasonContext((unsigned __int64)Context, 0LL, (__int64)DeviceObject, 1, 0LL, &v6);
  if ( KernelPowerRequest < 0
    || (KernelPowerRequest = PopCreateKernelPowerRequest((__int64 *)&v7, v6), KernelPowerRequest < 0) )
  {
    if ( v6 )
      PoDestroyReasonContext(v6);
  }
  else
  {
    *PowerRequest = v7;
  }
  return KernelPowerRequest;
}
