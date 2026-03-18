/*
 * XREFs of XilCommonBuffer_AcquireBuffer @ 0x1C000FE04
 * Callers:
 *     Interrupter_PrepareInterrupter @ 0x1C005C93C (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C000F6FC (CommonBuffer_AcquireBuffer.c)
 */

__int64 __fastcall XilCommonBuffer_AcquireBuffer(void *a1, int a2, int a3, int a4)
{
  return CommonBuffer_AcquireBuffer(a1, a2, a3, a4);
}
