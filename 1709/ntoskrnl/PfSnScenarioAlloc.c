/*
 * XREFs of PfSnScenarioAlloc @ 0x140453130
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PfSnScenarioAlloc(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x70506343u);
}
