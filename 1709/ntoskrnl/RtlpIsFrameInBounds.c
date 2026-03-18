/*
 * XREFs of RtlpIsFrameInBounds @ 0x1400D9B68
 * Callers:
 *     RtlDispatchException @ 0x1400D9210 (RtlDispatchException.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsFrameInBounds(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return (a2 & 7) == 0 && a2 >= *a1 && a2 < *a3;
}
