/*
 * XREFs of ??$SAFE_DELETE@VCCrossThreadComposition@@@@YAXAEAPEAVCCrossThreadComposition@@@Z @ 0x18013B520
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18013B684 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CIndependentRefreshRateScheduler@@UEAA@XZ @ 0x18013C224 (--1CIndependentRefreshRateScheduler@@UEAA@XZ.c)
 * Callees:
 *     ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x18013BA10 (--_ECCrossThreadComposition@@UEAAPEAXI@Z.c)
 */

void *__fastcall SAFE_DELETE<CCrossThreadComposition>(CCrossThreadComposition **a1)
{
  CCrossThreadComposition *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CCrossThreadComposition::`vector deleting destructor'(v2, 1u);
    *a1 = 0LL;
  }
  return result;
}
