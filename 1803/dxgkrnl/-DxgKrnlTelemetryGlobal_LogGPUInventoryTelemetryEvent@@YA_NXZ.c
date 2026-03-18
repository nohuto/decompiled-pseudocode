/*
 * XREFs of ?DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent@@YA_NXZ @ 0x1C01E3668
 * Callers:
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0001370 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

char DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent(void)
{
  if ( (unsigned __int64)(MEMORY[0xFFFFF78000000014] - qword_1C007A730) <= 0xC92A69C000LL )
    return 0;
  qword_1C007A730 = MEMORY[0xFFFFF78000000014];
  return 1;
}
