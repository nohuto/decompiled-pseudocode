/*
 * XREFs of KeSuspendClockTimer @ 0x1402032B4
 * Callers:
 *     PopHandleNextState @ 0x140439818 (PopHandleNextState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 KeSuspendClockTimer()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  int v2; // edi

  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned int)KiClockState;
  v2 = KiClockTimerOwner;
  if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    result = off_1403535C8[0]();
    CurrentPrcb->PendingTickFlags &= ~1u;
  }
  if ( CurrentPrcb->Number == v2 )
    ++dword_140370CE8;
  if ( CurrentPrcb->ClockOwner )
    CurrentPrcb->ClockOwner = 0;
  return result;
}
