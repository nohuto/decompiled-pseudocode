/*
 * XREFs of ZwQueryVirtualMemory @ 0x14017E3A0
 * Callers:
 *     RtlpHpFixedHeapCreate @ 0x140244D50 (RtlpHpFixedHeapCreate.c)
 *     SepGetStackTraceHash @ 0x140246B0C (SepGetStackTraceHash.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14024A28C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     LdrpResGetMappingSize @ 0x14042982C (LdrpResGetMappingSize.c)
 *     sub_1405484E0 @ 0x1405484E0 (sub_1405484E0.c)
 *     RtlCreateHeap @ 0x1405735D0 (RtlCreateHeap.c)
 *     EtwpTiQueryVad @ 0x14070FC80 (EtwpTiQueryVad.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
