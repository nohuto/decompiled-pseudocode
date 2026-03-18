/*
 * XREFs of PpvUtilTestStartedPdoStack @ 0x1400FB750
 * Callers:
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 * Callees:
 *     VfMajorTestStartedPdoStack @ 0x1407B5180 (VfMajorTestStartedPdoStack.c)
 */

__int64 PpvUtilTestStartedPdoStack()
{
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
    return VfMajorTestStartedPdoStack();
  return result;
}
