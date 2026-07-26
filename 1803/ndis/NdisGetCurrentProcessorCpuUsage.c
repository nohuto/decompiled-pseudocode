/*
 * XREFs of NdisGetCurrentProcessorCpuUsage @ 0x1C0051730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisGetCurrentProcessorCpuUsage(PULONG pCpuUsage)
{
  ExGetCurrentProcessorCpuUsage(pCpuUsage);
}
