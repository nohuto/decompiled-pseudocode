/*
 * XREFs of _local_unwind @ 0x140169A90
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x1400045B0 (ExpCenturyDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x140004B30 (ExpTimeRefreshDpcRoutine.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x14002E1B0 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x14002EEC0 (KiBalanceSetManagerDeferredRoutine.c)
 *     IopTimerDispatch @ 0x14003A410 (IopTimerDispatch.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x14003B360 (CmpEnableLazyFlushDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x140130F90 (PopThermalZoneDpc.c)
 *     ExpTimerDpcRoutine @ 0x140135DD0 (ExpTimerDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140259F20 (ExpTimeZoneDpcRoutine.c)
 *     KiVerifyXcpt15 @ 0x1407DC2E0 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x1408186F4 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x140818880 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x1408188D0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140818920 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140818970 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x1408189C0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140818A20 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140818A80 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140818AE0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140818B40 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140818CA0 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140818D10 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140818D60 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x140818DD8 (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwindEx @ 0x140009D90 (RtlUnwindEx.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  struct _CONTEXT ContextRecord; // [rsp+0h] [rbp-4D8h] BYREF

  RtlUnwindEx(a1, a2, 0LL, 0LL, &ContextRecord, 0LL);
}
