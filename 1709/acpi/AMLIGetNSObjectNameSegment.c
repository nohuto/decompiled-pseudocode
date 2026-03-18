/*
 * XREFs of AMLIGetNSObjectNameSegment @ 0x1C000EC10
 * Callers:
 *     ACPIGetPnpLocationString @ 0x1C008BED0 (ACPIGetPnpLocationString.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C009F594 (AcpiArblibAllocateArbiterInstance.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00A5C28 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectNameSegment(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)a1 + 40LL);
}
