/*
 * XREFs of RtlWalkFrameChain @ 0x1401309E0
 * Callers:
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 *     RtlCaptureStackBackTrace @ 0x140130B00 (RtlCaptureStackBackTrace.c)
 *     KiDpcWatchdogCaptureStack @ 0x14023F64C (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x14029FBDC (SepGetStackTraceHash.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1402AD3E4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x1402AE564 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1402B4EE0 (EtwpCovSampCaptureKernelStack.c)
 *     PoDiagCaptureUsermodeStack @ 0x14048C544 (PoDiagCaptureUsermodeStack.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 *     EtwpCovSampCaptureUserStack @ 0x1407B3D90 (EtwpCovSampCaptureUserStack.c)
 *     ExpUpdateDebugInfo @ 0x1407BD7BC (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlpWalkFrameChain @ 0x14012B860 (RtlpWalkFrameChain.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1401309A0 (RtlEnoughStackSpaceForStackCapture.c)
 *     MmCanThreadFault @ 0x140130A80 (MmCanThreadFault.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  ULONG v4; // ebx
  BOOL v5; // esi
  int v6; // edi
  unsigned int v7; // ebp
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
  result = RtlpWalkFrameChain((__int64)Callers, v7, v4, v6);
  if ( result )
    return (__PAIR64__(result, v4 & 2) - 1) >> 32;
  return result;
}
