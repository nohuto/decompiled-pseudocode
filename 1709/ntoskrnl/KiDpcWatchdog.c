/*
 * XREFs of KiDpcWatchdog @ 0x140129830
 * Callers:
 *     <none>
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400E3424 (KiResetGlobalDpcWatchdogProfiler.c)
 */

void __fastcall KiDpcWatchdog(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  CurrentPrcb->DpcWatchdogCount = 0;
  KiResetGlobalDpcWatchdogProfiler((__int64)CurrentPrcb);
  _enable();
}
