/*
 * XREFs of ViKeInjectStatusAlerted @ 0x1407BA2B4
 * Callers:
 *     VerifierKeDelayExecutionThread @ 0x1407B8E70 (VerifierKeDelayExecutionThread.c)
 *     ViKeWaitForMultipleObjectsCommon @ 0x1407BA66C (ViKeWaitForMultipleObjectsCommon.c)
 *     ViKeWaitForSingleObjectCommon @ 0x1407BA754 (ViKeWaitForSingleObjectCommon.c)
 * Callees:
 *     VfUtilIsLocalSystem @ 0x1407A6E28 (VfUtilIsLocalSystem.c)
 *     VfFaultsInjectResourceFailure @ 0x1407B7B44 (VfFaultsInjectResourceFailure.c)
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
