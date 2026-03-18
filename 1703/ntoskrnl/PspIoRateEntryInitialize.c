/*
 * XREFs of PspIoRateEntryInitialize @ 0x14054C92C
 * Callers:
 *     NtCreateJobObject @ 0x14054C614 (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x1406E1ADC (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1401161E0 (ExRundownCompleted.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void __fastcall PspIoRateEntryInitialize(struct _EX_RUNDOWN_REF *a1)
{
  memset(a1, 0, 0x38uLL);
  ExInitializePushLock(&a1[4].Count);
  ExWaitForRundownProtectionRelease(a1 + 4);
  ExRundownCompleted(a1 + 4);
  a1[2].Count = -1LL;
}
