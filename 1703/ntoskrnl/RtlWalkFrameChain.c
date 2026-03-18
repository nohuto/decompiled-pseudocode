/*
 * XREFs of RtlWalkFrameChain @ 0x1400E4A90
 * Callers:
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 *     RtlCaptureStackBackTrace @ 0x14006E1E0 (RtlCaptureStackBackTrace.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401E12D0 (HvpViewMapUnpinForFileOffset.c)
 *     KiDpcWatchdogCaptureStack @ 0x1401FC7A8 (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x140246B0C (SepGetStackTraceHash.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140252C94 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x140256F38 (EtwpTraceStackWalk.c)
 *     PoDiagCaptureUsermodeStack @ 0x14045EBA0 (PoDiagCaptureUsermodeStack.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     ExpUpdateDebugInfo @ 0x140717598 (ExpUpdateDebugInfo.c)
 * Callees:
 *     MmCanThreadFault @ 0x1400E49D0 (MmCanThreadFault.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400E4A50 (RtlEnoughStackSpaceForStackCapture.c)
 *     RtlpWalkFrameChain @ 0x1400E4C20 (RtlpWalkFrameChain.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  ULONG v4; // edi
  ULONG v5; // ebx
  ULONG v6; // esi
  ULONG result; // eax
  int v8; // ebp

  if ( (Flags & 0xFFFF00FC) != 0 )
    return 0;
  v4 = Flags & 3;
  if ( Flags >> 8 > 0xFE || Count == -1 )
    return 0;
  v8 = (Flags & 2) == 0;
  v5 = v8 + (Flags >> 8);
  v6 = v8 + Count;
  if ( !MmCanThreadFault() && (v4 & 1) != 0 || !(unsigned int)RtlEnoughStackSpaceForStackCapture() )
    return 0;
  result = RtlpWalkFrameChain(Callers, v6, v4, v5);
  if ( result )
    result -= v8;
  return result;
}
