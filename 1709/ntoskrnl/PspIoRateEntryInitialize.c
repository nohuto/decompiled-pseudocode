/*
 * XREFs of PspIoRateEntryInitialize @ 0x14050B788
 * Callers:
 *     NtCreateJobObject @ 0x14050B45C (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x140717E94 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400ADB30 (ExRundownCompleted.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall PspIoRateEntryInitialize(struct _EX_RUNDOWN_REF *a1)
{
  memset(a1, 0, 0x38uLL);
  ExInitializePushLock(&a1[4].Count);
  ExWaitForRundownProtectionRelease(a1 + 4);
  ExRundownCompleted(a1 + 4);
  a1[2].Count = -1LL;
}
