/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x14008B4A0
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x14002D4E0 (KeSetIdealProcessorThreadByNumber.c)
 *     PpmEventArbitratorPerfStateChange @ 0x140146EBC (PpmEventArbitratorPerfStateChange.c)
 *     KeMaskInterrupt @ 0x14014BBAC (KeMaskInterrupt.c)
 *     IoGetAffinityInterrupt @ 0x140164F10 (IoGetAffinityInterrupt.c)
 *     PnprQuiesceProcessorDpc @ 0x140417D90 (PnprQuiesceProcessorDpc.c)
 *     PspWriteTebIdealProcessor @ 0x1404F87BC (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x1406A18A4 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x140710EC4 (EtwpProcessorRundown.c)
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
  if ( ProcIndex < 0x280 )
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
