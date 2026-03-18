/*
 * XREFs of ExWaitForCallBacks @ 0x140718628
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x1401F4290 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401FD630 (KeDeregisterBoundCallback.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ExWaitForCallBacks(PEX_RUNDOWN_REF RunRef)
{
  ExWaitForRundownProtectionRelease(RunRef);
}
