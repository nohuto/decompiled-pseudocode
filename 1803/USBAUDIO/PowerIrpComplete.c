/*
 * XREFs of PowerIrpComplete @ 0x1C0001F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PowerIrpComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context)
{
  KeSetEvent((PRKEVENT)(Context + 536), 0, 0);
  KeReleaseSemaphore((PRKSEMAPHORE)(Context + 648), 0, 1, 0);
}
