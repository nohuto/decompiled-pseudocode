/*
 * XREFs of ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x1C00A2210
 * Callers:
 *     <none>
 * Callees:
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C00A26E0 (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 */

void __fastcall FxInterrupt::_InterruptWorkItemCallback(FxInterrupt *DeferredContext)
{
  FxInterrupt::WorkItemHandler(DeferredContext);
}
