/*
 * XREFs of VslIsSecureKernelRunning @ 0x140132620
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x14042B098 (IopLiveDumpCaptureMemoryPages.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1406BA400 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1406BAD4C (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     <none>
 */

char VslIsSecureKernelRunning()
{
  return VslVsmEnabled;
}
