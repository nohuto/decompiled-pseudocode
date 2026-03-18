/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x140032680
 * Callers:
 *     KeMaskInterrupt @ 0x14014BBAC (KeMaskInterrupt.c)
 *     KeSetTargetProcessorDpc @ 0x140201330 (KeSetTargetProcessorDpc.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140088D10 (KeGetProcessorIndexFromNumber.c)
 */

NTSTATUS __stdcall KeSetTargetProcessorDpcEx(PKDPC Dpc, PPROCESSOR_NUMBER ProcNumber)
{
  ULONG ProcessorIndexFromNumber; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return -1073741811;
  if ( !Dpc->DpcData )
    Dpc->Number = ProcessorIndexFromNumber + 640;
  return 0;
}
