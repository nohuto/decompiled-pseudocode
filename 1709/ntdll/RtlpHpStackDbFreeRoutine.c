/*
 * XREFs of RtlpHpStackDbFreeRoutine @ 0x1800FFDC0
 * Callers:
 *     RtlpHpStackTraceAllocAdd @ 0x18010003C (RtlpHpStackTraceAllocAdd.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlpHpStackDbFreeRoutine(unsigned __int64 a1)
{
  return RtlpHpMetadataFree(a1);
}
