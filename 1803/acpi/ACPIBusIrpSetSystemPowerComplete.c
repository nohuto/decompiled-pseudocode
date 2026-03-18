/*
 * XREFs of ACPIBusIrpSetSystemPowerComplete @ 0x1C0014AC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C001AC60 (ACPIDeviceIrpCompleteRequest.c)
 */

void __fastcall ACPIBusIrpSetSystemPowerComplete(
        ULONG_PTR DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(DeviceObject);
  Context[7] = 0LL;
  ACPIDeviceIrpCompleteRequest(DeviceExtension, Context, (unsigned int)IoStatus->Status);
}
