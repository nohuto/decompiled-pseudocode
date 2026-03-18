/*
 * XREFs of RtlHpGlobalsInitialize @ 0x1401707CC
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x1402BD718 (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x14089EA18 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x140170804 (RtlpHeapGenerateRandomValue64.c)
 */

void *RtlHpGlobalsInitialize()
{
  void *result; // rax

  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  qword_1403A5F28 = RtlpHeapGenerateRandomValue64();
  result = &RtlpHeapFailureInfo;
  qword_1403A5F30 = (__int64)&RtlpHeapFailureInfo;
  return result;
}
