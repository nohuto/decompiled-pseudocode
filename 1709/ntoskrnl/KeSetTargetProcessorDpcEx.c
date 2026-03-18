/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x14011AF00
 * Callers:
 *     KeMaskInterrupt @ 0x140129578 (KeMaskInterrupt.c)
 *     KeSetTargetProcessorDpc @ 0x140207720 (KeSetTargetProcessorDpc.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14008CE90 (KeGetProcessorIndexFromNumber.c)
 */

NTSTATUS __stdcall KeSetTargetProcessorDpcEx(PKDPC Dpc, PPROCESSOR_NUMBER ProcNumber)
{
  ULONG ProcessorIndexFromNumber; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return -1073741811;
  if ( !Dpc->DpcData )
    Dpc->Number = ProcessorIndexFromNumber + 1280;
  return 0;
}
