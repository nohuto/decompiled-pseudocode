/*
 * XREFs of XilCommonBuffer_AcquireBuffers @ 0x1C000FE4C
 * Callers:
 *     Interrupter_PrepareInterrupter @ 0x1C005C93C (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     CommonBuffer_AcquireBuffers @ 0x1C000F748 (CommonBuffer_AcquireBuffers.c)
 */

__int64 __fastcall XilCommonBuffer_AcquireBuffers(KSPIN_LOCK *a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  return CommonBuffer_AcquireBuffers(a1, a2, a3, a4, a5, a6, 0LL);
}
