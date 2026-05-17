/*
 * XREFs of sub_18005C774 @ 0x18005C774
 * Callers:
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     sub_18005C6E0 @ 0x18005C6E0 (sub_18005C6E0.c)
 *     sub_18005C734 @ 0x18005C734 (sub_18005C734.c)
 *     sub_1800EB1A0 @ 0x1800EB1A0 (sub_1800EB1A0.c)
 *     sub_180102784 @ 0x180102784 (sub_180102784.c)
 * Callees:
 *     sub_18001EBF0 @ 0x18001EBF0 (sub_18001EBF0.c)
 */

unsigned __int64 sub_18005C774()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)sub_18001EBF0() << 32;
  return v0 | (unsigned int)sub_18001EBF0();
}
