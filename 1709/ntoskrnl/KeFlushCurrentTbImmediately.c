/*
 * XREFs of KeFlushCurrentTbImmediately @ 0x14017B290
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401EFD6C (HvlpGetEncryptedDataFromHypervisor.c)
 *     KeWakeProcessor @ 0x140207510 (KeWakeProcessor.c)
 *     KeThawExecution @ 0x1402097E0 (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x1402099CC (KiFreezeTargetExecution.c)
 *     KiSetPageAttributesTable @ 0x1404269A4 (KiSetPageAttributesTable.c)
 *     KeLoadMTRR @ 0x140426BF0 (KeLoadMTRR.c)
 *     PopHandleNextState @ 0x140439818 (PopHandleNextState.c)
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
