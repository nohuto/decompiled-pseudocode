/*
 * XREFs of RtlpHpStackDbAllocRoutine @ 0x1800FFDB0
 * Callers:
 *     RtlpHpStackTraceAllocAdd @ 0x18010003C (RtlpHpStackTraceAllocAdd.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpHpStackDbAllocRoutine(size_t a1)
{
  return RtlpHpMetadataAlloc(a1, 0);
}
