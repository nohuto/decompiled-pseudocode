/*
 * XREFs of EtwTraceBeginPointerFrameCommit @ 0x1C00D9940
 * Callers:
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C010EAB8 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011C1B8 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 * Callees:
 *     Template_ddd @ 0x1C00DCC0C (Template_ddd.c)
 */

__int64 __fastcall EtwTraceBeginPointerFrameCommit(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return Template_ddd(a1, (unsigned int)&BeginPointerFrameCommit, a3, a1, a2, 0);
  return result;
}
