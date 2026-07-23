/*
 * XREFs of RtlWalkFrameChain @ 0x180024B40
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x180024AA0 (RtlCaptureStackBackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x180109C10 (EtwpGetStackExtendedHeaderItem.c)
 * Callees:
 *     RtlpWalkFrameChain @ 0x180024BB0 (RtlpWalkFrameChain.c)
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
  result = RtlpWalkFrameChain(Callers, Count + 1, v3, (unsigned int)(v3 + 1));
  if ( result )
    --result;
  return result;
}
