/*
 * XREFs of VfDriverInitStarting @ 0x14080ED70
 * Callers:
 *     MmCallDllInitialize @ 0x140611478 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x1408B65A4 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
