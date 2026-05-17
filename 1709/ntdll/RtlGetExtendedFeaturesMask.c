/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800886E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800886F8 (RtlpLocateXStateChunk.c)
 */

unsigned __int64 RtlGetExtendedFeaturesMask()
{
  return *(_QWORD *)RtlpLocateXStateChunk() & 0xFFFFFFFFFFFFFFFCuLL;
}
