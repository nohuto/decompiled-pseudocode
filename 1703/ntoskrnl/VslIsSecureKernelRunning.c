/*
 * XREFs of VslIsSecureKernelRunning @ 0x14003CC70
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x140416058 (IopLiveDumpCaptureMemoryPages.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14068E734 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14068F088 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     <none>
 */

char VslIsSecureKernelRunning()
{
  return VslVsmEnabled;
}
