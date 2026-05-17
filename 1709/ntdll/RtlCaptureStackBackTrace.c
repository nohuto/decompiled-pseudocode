/*
 * XREFs of RtlCaptureStackBackTrace @ 0x180024AA0
 * Callers:
 *     RtlActivateActivationContextEx @ 0x180017E20 (RtlActivateActivationContextEx.c)
 *     RtlReleaseActivationContext @ 0x180035E40 (RtlReleaseActivationContext.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlGetCallersAddress @ 0x1800EA510 (RtlGetCallersAddress.c)
 *     RtlpHeapTrkTrackStack @ 0x1800F7D6C (RtlpHeapTrkTrackStack.c)
 *     RtlStdLogStackTrace @ 0x1800FA370 (RtlStdLogStackTrace.c)
 *     RtlpHpStackTraceAddStack @ 0x1800FFF48 (RtlpHpStackTraceAddStack.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x180102410 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x180024B40 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // edi
  ULONG v7; // ebx
  ULONG v8; // eax
  ULONG v9; // ecx
  unsigned int v10; // r8d
  unsigned int i; // edx
  __int64 v13; // rax

  v4 = 0xFFFF;
  if ( FramesToCapture <= 0xFFFF )
    v4 = FramesToCapture;
  if ( FramesToSkip > 0xFE )
    return 0;
  v7 = FramesToSkip + 1;
  v8 = RtlWalkFrameChain(BackTrace, v4 + v7, v7 << 8);
  v9 = 0;
  v10 = v8;
  if ( v8 <= v7 )
    return 0;
  if ( BackTraceHash )
  {
    for ( i = 0; i < v4; v9 += LODWORD(BackTrace[v13]) )
    {
      if ( i + v7 >= v10 )
        break;
      v13 = i++;
    }
    *BackTraceHash = v9;
  }
  else
  {
    LOWORD(i) = v8 - v7;
  }
  return i;
}
