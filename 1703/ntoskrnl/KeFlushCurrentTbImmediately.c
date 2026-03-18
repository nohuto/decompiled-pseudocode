/*
 * XREFs of KeFlushCurrentTbImmediately @ 0x14017BB00
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401EAB9C (HvlpGetEncryptedDataFromHypervisor.c)
 *     KeWakeProcessor @ 0x140201080 (KeWakeProcessor.c)
 *     KeThawExecution @ 0x1402034E8 (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x1402036D4 (KiFreezeTargetExecution.c)
 *     PopHandleNextState @ 0x1404063E0 (PopHandleNextState.c)
 *     KeLoadMTRR @ 0x14040E400 (KeLoadMTRR.c)
 *     KiSetPageAttributesTable @ 0x14040E8D8 (KiSetPageAttributesTable.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KeFlushCurrentTbImmediately()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 result; // rax

  v0 = __readcr4();
  if ( (v0 & 0x20080) != 0 )
  {
    result = v0 ^ 0x80;
    __writecr4(v0 ^ 0x80);
    __writecr4(v0);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
