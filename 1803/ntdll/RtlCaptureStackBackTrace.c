/*
 * XREFs of RtlCaptureStackBackTrace @ 0x18000C3C0
 * Callers:
 *     RtlReleaseActivationContext @ 0x180024580 (RtlReleaseActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x18004DFF0 (RtlActivateActivationContextEx.c)
 *     RtlGetCallersAddress @ 0x1800E66D0 (RtlGetCallersAddress.c)
 *     sub_1800F41DC @ 0x1800F41DC (sub_1800F41DC.c)
 *     sub_1800F6A30 @ 0x1800F6A30 (sub_1800F6A30.c)
 *     sub_1800FC664 @ 0x1800FC664 (sub_1800FC664.c)
 *     sub_1800FCA5C @ 0x1800FCA5C (sub_1800FCA5C.c)
 *     sub_1800FF100 @ 0x1800FF100 (sub_1800FF100.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x18000C460 (RtlWalkFrameChain.c)
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
