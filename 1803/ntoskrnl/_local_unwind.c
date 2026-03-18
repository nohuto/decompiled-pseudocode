/*
 * XREFs of _local_unwind @ 0x140188100
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x1400BF0B0 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1400C32F0 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimerDpcRoutine @ 0x1400CD640 (ExpTimerDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x1400D1410 (PopThermalZoneDpc.c)
 *     ExpCenturyDpcRoutine @ 0x1400D1750 (ExpCenturyDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x1400D1CA0 (CmpEnableLazyFlushDpcRoutine.c)
 *     IopTimerDispatch @ 0x1400D1F10 (IopTimerDispatch.c)
 *     ExpTimeRefreshDpcRoutine @ 0x14014CFC0 (ExpTimeRefreshDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x1402B7A00 (ExpTimeZoneDpcRoutine.c)
 *     KiVerifyXcpt15 @ 0x14087C330 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x1408B9D48 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x1408B9ED0 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x1408B9F20 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x1408B9F70 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x1408B9FC0 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x1408BA010 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x1408BA070 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x1408BA0D0 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x1408BA130 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x1408BA190 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x1408BA2F0 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x1408BA360 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x1408BA3B0 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x1408BA42C (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwindEx @ 0x14012DE70 (RtlUnwindEx.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  struct _CONTEXT ContextRecord; // [rsp+0h] [rbp-4D8h] BYREF

  RtlUnwindEx(a1, a2, 0LL, 0LL, &ContextRecord, 0LL);
}
