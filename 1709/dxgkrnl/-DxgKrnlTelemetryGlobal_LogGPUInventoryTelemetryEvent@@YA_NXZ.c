/*
 * XREFs of ?DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent@@YA_NXZ @ 0x1C0123BD8
 * Callers:
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C000EFC0 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

char DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent(void)
{
  if ( (unsigned __int64)(MEMORY[0xFFFFF78000000014] - qword_1C0060818) <= 0xC92A69C000LL )
    return 0;
  qword_1C0060818 = MEMORY[0xFFFFF78000000014];
  return 1;
}
