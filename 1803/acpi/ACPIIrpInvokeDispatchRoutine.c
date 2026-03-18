/*
 * XREFs of ACPIIrpInvokeDispatchRoutine @ 0x1C00740FC
 * Callers:
 *     ACPIBusIrpEject @ 0x1C0076A20 (ACPIBusIrpEject.c)
 *     ACPIBusIrpQueryCapabilities @ 0x1C0076E40 (ACPIBusIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryPnpDeviceState @ 0x1C0077B80 (ACPIBusIrpQueryPnpDeviceState.c)
 *     ACPIBusIrpSetLock @ 0x1C00785F0 (ACPIBusIrpSetLock.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIIrpInvokeDispatchRoutine(
        ULONG_PTR a1,
        IRP *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(ULONG_PTR, IRP *, _QWORD, _QWORD),
        char a5)
{
  __int64 DeviceExtension; // rsi
  int Status; // eax
  unsigned int v10; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Status = a2->IoStatus.Status;
  v10 = -1073741637;
  if ( Status < 0 )
  {
    if ( Status != -1073741637 )
      goto LABEL_6;
  }
  else if ( !a5 )
  {
    goto LABEL_6;
  }
  v10 = a4(a1, a2, 0LL, 0LL);
LABEL_6:
  if ( (*(_BYTE *)(DeviceExtension + 8) & 0x20) == 0 )
  {
    if ( v10 == 259 )
      return v10;
    if ( v10 != -1073741637 )
      a2->IoStatus.Status = v10;
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741637 )
      return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
    goto LABEL_11;
  }
  if ( v10 != 259 )
  {
    if ( v10 == -1073741637 )
      v10 = a2->IoStatus.Status;
    else
      a2->IoStatus.Status = v10;
LABEL_11:
    IofCompleteRequest(a2, 0);
  }
  return v10;
}
