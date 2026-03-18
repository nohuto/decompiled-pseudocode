/*
 * XREFs of IoRequestDeviceEject @ 0x1401FDF90
 * Callers:
 *     PipProcessStartPhase2 @ 0x140555E8C (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x1406D6218 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x1401FDFB0 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
