/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x140298130
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapExtendContext @ 0x1402953E0 (RtlpHpHeapExtendContext.c)
 */

signed __int64 __fastcall RtlpHpSegLfhExtendContext(__int64 a1, __int64 a2)
{
  return RtlpHpHeapExtendContext(*(int **)(a1 + 112), a2);
}
