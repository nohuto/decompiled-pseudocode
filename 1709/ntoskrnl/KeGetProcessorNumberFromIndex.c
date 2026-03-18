/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x1400E6240
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x1400E5800 (KeSetIdealProcessorThreadByNumber.c)
 *     KeMaskInterrupt @ 0x140129578 (KeMaskInterrupt.c)
 *     IoGetAffinityInterrupt @ 0x14012FFA0 (IoGetAffinityInterrupt.c)
 *     PnprQuiesceProcessorDpc @ 0x14042CDC0 (PnprQuiesceProcessorDpc.c)
 *     PspWriteTebIdealProcessor @ 0x14053F518 (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x1406CC140 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x14074E58C (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  unsigned int v2; // ecx

  if ( !ProcIndex )
  {
    *ProcNumber = 0;
    return 0;
  }
  if ( ProcIndex < 0x500 )
  {
    v2 = KiProcessorIndexToNumberMappingTable[ProcIndex];
    if ( v2 )
    {
      ProcNumber->Reserved = 0;
      ProcNumber->Group = v2 >> 6;
      ProcNumber->Number = v2 & 0x3F;
      return 0;
    }
  }
  return -1073741811;
}
