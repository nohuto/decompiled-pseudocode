/*
 * XREFs of PpvUtilTestStartedPdoStack @ 0x140146478
 * Callers:
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 * Callees:
 *     VfMajorTestStartedPdoStack @ 0x140822E74 (VfMajorTestStartedPdoStack.c)
 */

__int64 PpvUtilTestStartedPdoStack()
{
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
    return VfMajorTestStartedPdoStack();
  return result;
}
