/*
 * XREFs of PspIoRateEntryDeactivate @ 0x140445AF8
 * Callers:
 *     PspIoRateEntryActivate @ 0x140445410 (PspIoRateEntryActivate.c)
 *     PspSetJobIoRateControl @ 0x1404454F8 (PspSetJobIoRateControl.c)
 *     PspJobIoRateControlDisable @ 0x14050B3F8 (PspJobIoRateControlDisable.c)
 *     PspSetJobIoRateControlForVolume @ 0x140717E94 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x140007C70 (IoStopDiskIoAttributionForContext.c)
 *     IoStopIoRateControl @ 0x140007DDC (IoStopIoRateControl.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PspIoRateEntryDeactivate(struct _EX_RUNDOWN_REF *a1)
{
  _RTL_BALANCED_NODE *Count; // rcx

  ExWaitForRundownProtectionRelease(a1 + 4);
  IoStopIoRateControl(a1[5].Count);
  Count = (_RTL_BALANCED_NODE *)a1[6].Count;
  a1[5].Count = 0LL;
  if ( Count )
  {
    IoStopDiskIoAttributionForContext(Count);
    IoDiskIoAttributionDereference(a1[6].Count);
    a1[6].Count = 0LL;
  }
}
