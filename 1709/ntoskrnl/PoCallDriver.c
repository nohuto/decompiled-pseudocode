/*
 * XREFs of PoCallDriver @ 0x140131850
 * Callers:
 *     IoCancelFileOpen @ 0x1406B6F90 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x1407C2EE0 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
