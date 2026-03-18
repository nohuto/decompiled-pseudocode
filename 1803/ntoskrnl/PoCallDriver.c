/*
 * XREFs of PoCallDriver @ 0x14016C610
 * Callers:
 *     IoCancelFileOpen @ 0x14071BC10 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x140830460 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
