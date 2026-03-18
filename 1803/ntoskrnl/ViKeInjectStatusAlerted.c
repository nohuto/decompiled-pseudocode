/*
 * XREFs of ViKeInjectStatusAlerted @ 0x14082761C
 * Callers:
 *     VerifierKeDelayExecutionThread @ 0x140826110 (VerifierKeDelayExecutionThread.c)
 *     ViKeWaitForMultipleObjectsCommon @ 0x140827A14 (ViKeWaitForMultipleObjectsCommon.c)
 *     ViKeWaitForSingleObjectCommon @ 0x140827AFC (ViKeWaitForSingleObjectCommon.c)
 * Callees:
 *     VfUtilIsLocalSystem @ 0x140813FA8 (VfUtilIsLocalSystem.c)
 *     VfFaultsInjectResourceFailure @ 0x140824DA4 (VfFaultsInjectResourceFailure.c)
 */

_BOOL8 __fastcall ViKeInjectStatusAlerted(char a1)
{
  struct _KPROCESS *Process; // rbx
  _BOOL8 result; // rax

  result = 0;
  if ( a1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PsInitialSystemProcess )
    {
      if ( Process != PsInitialSystemProcess
        && Process != PsIdleProcess
        && (unsigned int)VfFaultsInjectResourceFailure(0)
        && !(unsigned int)VfUtilIsLocalSystem(Process) )
      {
        return 1;
      }
    }
  }
  return result;
}
