/*
 * XREFs of XilCommonBuffer_ReleaseBuffers @ 0x1C000FE8C
 * Callers:
 *     Interrupter_PrepareInterrupter @ 0x1C005C93C (Interrupter_PrepareInterrupter.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C005CC04 (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x1C0040CC8 (XilCoreCommonBuffer_ReleaseBuffers.c)
 */

__int64 __fastcall XilCommonBuffer_ReleaseBuffers(__int64 a1, __int64 a2)
{
  return XilCoreCommonBuffer_ReleaseBuffers(a1 + 80, a2);
}
