/*
 * XREFs of VfDriverInitStarting @ 0x1407A2240
 * Callers:
 *     MmCallDllInitialize @ 0x1405C90B8 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x1408466E8 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
