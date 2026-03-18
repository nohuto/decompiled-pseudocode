/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x140040C40
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x1400C1EC0 (KeSetIdealProcessorThreadByNumber.c)
 *     KeMaskInterrupt @ 0x1401688E4 (KeMaskInterrupt.c)
 *     IoGetAffinityInterrupt @ 0x140184510 (IoGetAffinityInterrupt.c)
 *     PnprQuiesceProcessorDpc @ 0x140483960 (PnprQuiesceProcessorDpc.c)
 *     PspWriteTebIdealProcessor @ 0x1404B8A58 (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x140733AE0 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1407AF830 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  unsigned int v3; // ecx

  if ( !ProcIndex )
  {
    *ProcNumber = 0;
    return 0;
  }
  if ( ProcIndex < 0x500 )
  {
    v3 = KiProcessorIndexToNumberMappingTable[ProcIndex];
    if ( v3 )
    {
      ProcNumber->Reserved = 0;
      ProcNumber->Group = v3 >> 6;
      ProcNumber->Number = v3 & 0x3F;
      return 0;
    }
  }
  return -1073741811;
}
