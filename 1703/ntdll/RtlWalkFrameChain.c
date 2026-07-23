/*
 * XREFs of RtlWalkFrameChain @ 0x180031370
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x1800312D0 (RtlCaptureStackBackTrace.c)
 *     sub_180104C60 @ 0x180104C60 (sub_180104C60.c)
 * Callees:
 *     sub_1800313E0 @ 0x1800313E0 (sub_1800313E0.c)
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
  result = sub_1800313E0(Callers, Count + 1, v3, (unsigned int)(v3 + 1));
  if ( result )
    --result;
  return result;
}
