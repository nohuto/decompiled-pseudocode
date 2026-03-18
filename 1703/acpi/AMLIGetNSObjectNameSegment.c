/*
 * XREFs of AMLIGetNSObjectNameSegment @ 0x1C0002120
 * Callers:
 *     ACPIGetPnpLocationString @ 0x1C0092660 (ACPIGetPnpLocationString.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C009C5A4 (AcpiArblibAllocateArbiterInstance.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00A2FDC (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectNameSegment(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)a1 + 40LL);
}
