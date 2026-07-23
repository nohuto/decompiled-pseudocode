/*
 * XREFs of RtlWalkFrameChain @ 0x18000C460
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x18000C3C0 (RtlCaptureStackBackTrace.c)
 *     sub_180106FF4 @ 0x180106FF4 (sub_180106FF4.c)
 * Callees:
 *     sub_18000C4A0 @ 0x18000C4A0 (sub_18000C4A0.c)
 */

ULONG __cdecl RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  __int64 v3; // r8
  ULONG result; // eax

  if ( (Flags & 0xFFFF00FF) != 0 )
    return 0;
  v3 = Flags >> 8;
  if ( (unsigned int)v3 > 0xFE || Count == -1 )
    return 0;
  result = sub_18000C4A0(Callers, Count + 1, v3, (unsigned int)(v3 + 1));
  if ( result )
    --result;
  return result;
}
