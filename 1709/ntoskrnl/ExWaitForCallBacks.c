/*
 * XREFs of ExWaitForCallBacks @ 0x140757D08
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x1401F9E10 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x140203720 (KeDeregisterBoundCallback.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
