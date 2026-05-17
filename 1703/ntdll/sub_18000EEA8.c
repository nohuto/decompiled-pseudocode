/*
 * XREFs of sub_18000EEA8 @ 0x18000EEA8
 * Callers:
 *     sub_18000A73C @ 0x18000A73C (sub_18000A73C.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     sub_18000EC70 @ 0x18000EC70 (sub_18000EC70.c)
 *     sub_18000EE28 @ 0x18000EE28 (sub_18000EE28.c)
 *     sub_18000EE68 @ 0x18000EE68 (sub_18000EE68.c)
 *     sub_180061354 @ 0x180061354 (sub_180061354.c)
 *     sub_180061420 @ 0x180061420 (sub_180061420.c)
 * Callees:
 *     sub_180028C10 @ 0x180028C10 (sub_180028C10.c)
 */

unsigned __int64 sub_18000EEA8()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)sub_180028C10() << 32;
  return v0 | (unsigned int)sub_180028C10();
}
