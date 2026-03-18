/*
 * XREFs of EtwTraceBeginPointerFrameCommit @ 0x1C00DFCA0
 * Callers:
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C010DA08 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011B014 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 * Callees:
 *     McTemplateK0qqq @ 0x1C00E3664 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceBeginPointerFrameCommit(struct _MCGEN_TRACE_CONTEXT *Arg0, unsigned int Arg1, const GUID *a3)
{
  ULONG result; // eax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0qqq(Arg0, &BeginPointerFrameCommit, a3, (const unsigned int)Arg0, Arg1, 0);
  return result;
}
