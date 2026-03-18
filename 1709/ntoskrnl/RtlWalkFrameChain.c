/*
 * XREFs of RtlWalkFrameChain @ 0x1400D5800
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 *     RtlCaptureStackBackTrace @ 0x1400D5700 (RtlCaptureStackBackTrace.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401E53E8 (HvpViewMapUnpinForFileOffset.c)
 *     KiDpcWatchdogCaptureStack @ 0x140202568 (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x14025E24C (SepGetStackTraceHash.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14027A620 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x14027FF24 (EtwpTraceStackWalk.c)
 *     PoDiagCaptureUsermodeStack @ 0x140449580 (PoDiagCaptureUsermodeStack.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     ExpUpdateDebugInfo @ 0x140756D18 (ExpUpdateDebugInfo.c)
 * Callees:
 *     MmCanThreadFault @ 0x1400D5780 (MmCanThreadFault.c)
 *     RtlpWalkFrameChain @ 0x1400D68B0 (RtlpWalkFrameChain.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400D9B84 (RtlEnoughStackSpaceForStackCapture.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  ULONG v4; // ebx
  BOOL v5; // esi
  ULONG v6; // edi
  ULONG v7; // ebp
  ULONG result; // eax

  if ( (Flags & 0xFFFF00FC) != 0 )
    return 0;
  v4 = Flags & 3;
  if ( Flags >> 8 > 0xFE )
    return 0;
  if ( Count == -1 )
    return 0;
  v5 = (Flags & 2) == 0;
  v6 = v5 + (Flags >> 8);
  v7 = v5 + Count;
  if ( !(unsigned int)MmCanThreadFault() && (v4 & 1) != 0 )
    return 0;
  if ( !(unsigned int)RtlEnoughStackSpaceForStackCapture() )
    return 0;
  result = RtlpWalkFrameChain(Callers, v7, v4, v6);
  if ( result )
    return (__PAIR64__(result, v4 & 2) - 1) >> 32;
  return result;
}
