/*
 * XREFs of IoRequestDeviceEject @ 0x14023A960
 * Callers:
 *     PipProcessStartPhase2 @ 0x1405CA7BC (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x14073FEE4 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x14023A980 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
