/*
 * XREFs of RtlSetExtendedFeaturesMask @ 0x1800886B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800886F8 (RtlpLocateXStateChunk.c)
 */

unsigned __int64 *RtlSetExtendedFeaturesMask()
{
  unsigned __int64 *result; // rax
  __int64 v1; // r10

  result = (unsigned __int64 *)RtlpLocateXStateChunk();
  *result = v1 & MEMORY[0x7FFE03D8] & 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}
