/*
 * XREFs of ExpReleaseSpinLockDisabled @ 0x1400B206C
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x1400B1F00 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1400B1F80 (ExInterlockedInsertTailList.c)
 *     ExInterlockedRemoveHeadList @ 0x1400B2000 (ExInterlockedRemoveHeadList.c)
 *     ExInterlockedAddUlong @ 0x14014B160 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x1402BB430 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x1402BB490 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x1402BB4E0 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

__int64 __fastcall ExpReleaseSpinLockDisabled(volatile signed __int64 *a1, char a2)
{
  __int64 result; // rax

  _InterlockedAnd64(a1, 0LL);
  result = KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  if ( a2 )
    _enable();
  return result;
}
