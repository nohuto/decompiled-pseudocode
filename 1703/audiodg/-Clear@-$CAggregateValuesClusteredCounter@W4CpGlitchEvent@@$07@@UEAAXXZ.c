/*
 * XREFs of ?Clear@?$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$07@@UEAAXXZ @ 0x14001BB50
 * Callers:
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x1400198E0 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 * Callees:
 *     <none>
 */

void *__fastcall CAggregateValuesClusteredCounter<enum CpGlitchEvent,8>::Clear(__int64 a1)
{
  return memset((void *)(a1 + 48), 0, 0x20uLL);
}
