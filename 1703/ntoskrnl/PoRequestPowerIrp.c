/*
 * XREFs of PoRequestPowerIrp @ 0x140145E30
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestPowerIrp @ 0x140145E60 (PopRequestPowerIrp.c)
 */

NTSTATUS __stdcall PoRequestPowerIrp(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        PIRP *Irp)
{
  return PopRequestPowerIrp((int)DeviceObject, (__int64)Context, 0, (__int64)Irp);
}
