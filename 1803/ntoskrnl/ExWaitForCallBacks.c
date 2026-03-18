/*
 * XREFs of ExWaitForCallBacks @ 0x1407BEA78
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140236F90 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x140240B00 (KeDeregisterBoundCallback.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
