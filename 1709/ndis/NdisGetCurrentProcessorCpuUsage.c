/*
 * XREFs of NdisGetCurrentProcessorCpuUsage @ 0x1C0050DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisGetCurrentProcessorCpuUsage(PULONG pCpuUsage)
{
  ExGetCurrentProcessorCpuUsage(pCpuUsage);
}
