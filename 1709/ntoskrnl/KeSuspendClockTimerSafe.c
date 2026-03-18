/*
 * XREFs of KeSuspendClockTimerSafe @ 0x140203310
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x14042C094 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x14042CDC0 (PnprQuiesceProcessorDpc.c)
 *     PnprQuiesceProcessors @ 0x14042D168 (PnprQuiesceProcessors.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 KeSuspendClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *v1; // rbx
  int v2; // esi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  int v5; // edi

  if ( KeGetEffectiveIrql() >= 0xDu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = (unsigned int)KiClockState;
    v5 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      result = off_1403535C8[0]();
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    if ( CurrentPrcb->Number == v5 )
      ++dword_140370CE8;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xDuLL);
    v1 = KeGetCurrentPrcb();
    v2 = KiClockTimerOwner;
    if ( (v1->PendingTickFlags & 1) != 0 )
    {
      off_1403535C8[0]();
      v1->PendingTickFlags &= ~1u;
    }
    if ( v1->Number == v2 )
      ++dword_140370CE8;
    if ( v1->ClockOwner )
      v1->ClockOwner = 0;
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
