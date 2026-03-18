/*
 * XREFs of _local_unwind @ 0x14015E3E0
 * Callers:
 *     ExpTimerDpcRoutine @ 0x14000D400 (ExpTimerDpcRoutine.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x140122390 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140125120 (KiBalanceSetManagerDeferredRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x14012DFA0 (CmpEnableLazyFlushDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x14012FD40 (ExpTimeZoneDpcRoutine.c)
 *     IopTimerDispatch @ 0x14012FE30 (IopTimerDispatch.c)
 *     ExpTimeRefreshDpcRoutine @ 0x140131870 (ExpTimeRefreshDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1401553A0 (ExpCenturyDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x1401572A0 (PopThermalZoneDpc.c)
 *     KiVerifyXcpt15 @ 0x14080C330 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x14084875C (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x1408488F0 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140848940 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140848990 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x1408489E0 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140848A30 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140848A90 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140848AF0 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140848B50 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140848BB0 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140848D10 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140848D80 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140848DD0 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x140848E48 (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwindEx @ 0x1400D5CB0 (RtlUnwindEx.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  struct _CONTEXT ContextRecord; // [rsp+0h] [rbp-4D8h] BYREF

  RtlUnwindEx(a1, a2, 0LL, 0LL, &ContextRecord, 0LL);
}
