/*
 * XREFs of PoCallDriver @ 0x14014A0B0
 * Callers:
 *     IoCancelFileOpen @ 0x14068B2F0 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x140780D30 (ViFilterDispatchPower.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
