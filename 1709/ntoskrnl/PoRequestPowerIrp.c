/*
 * XREFs of PoRequestPowerIrp @ 0x1400B3B70
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestPowerIrp @ 0x1400B3BA0 (PopRequestPowerIrp.c)
 */

NTSTATUS __stdcall PoRequestPowerIrp(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        PIRP *Irp)
{
  return PopRequestPowerIrp((int)DeviceObject, (__int64)Context, 0, (PIRP)Irp);
}
