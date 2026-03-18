/*
 * XREFs of PfSnScenarioAlloc @ 0x140566AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PfSnScenarioAlloc(unsigned int a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x70506343u);
}
