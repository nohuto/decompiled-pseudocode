/*
 * XREFs of VfDriverInitStarting @ 0x140761DA4
 * Callers:
 *     MmCallDllInitialize @ 0x140586B80 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x1407F99D8 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
