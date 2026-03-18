/*
 * XREFs of VslIsSecureKernelRunning @ 0x1400D2E2C
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x140481BA4 (IopLiveDumpCaptureMemoryPages.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14071F3A0 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14071FCD8 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     <none>
 */

char VslIsSecureKernelRunning()
{
  return VslVsmEnabled;
}
