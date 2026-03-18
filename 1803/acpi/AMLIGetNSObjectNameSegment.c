/*
 * XREFs of AMLIGetNSObjectNameSegment @ 0x1C0043A44
 * Callers:
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0074CA0 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIGetPnpLocationString @ 0x1C007CF70 (ACPIGetPnpLocationString.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0085C6C (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectNameSegment(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)a1 + 40LL);
}
