/*
 * XREFs of ndisQueryReenumerateSelfInterface @ 0x1C00E0514
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisQueryDriverInterface @ 0x1C00E0408 (ndisQueryDriverInterface.c)
 */

__int64 __fastcall ndisQueryReenumerateSelfInterface(PDEVICE_OBJECT DeviceObject, PVOID *a2)
{
  _WORD *PoolWithTag; // rax
  __int64 v5; // r9
  NTSTATUS DriverInterface; // edi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6962444Eu);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  DriverInterface = ndisQueryDriverInterface(
                      DeviceObject,
                      (unsigned __int64)&GUID_DEVICE_RESET_INTERFACE_STANDARD,
                      1u,
                      v5,
                      PoolWithTag);
  if ( DriverInterface < 0 )
  {
    ExFreePoolWithTag(*a2, 0);
    *a2 = 0LL;
  }
  return (unsigned int)DriverInterface;
}
