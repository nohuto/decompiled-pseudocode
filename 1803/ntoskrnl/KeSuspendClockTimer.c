/*
 * XREFs of KeSuspendClockTimer @ 0x14014EAE4
 * Callers:
 *     PopHandleNextState @ 0x140473200 (PopHandleNextState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
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
    result = off_140398968[0]();
    CurrentPrcb->PendingTickFlags &= ~1u;
  }
  if ( CurrentPrcb->Number == v2 )
    ++dword_1403B3DC8;
  if ( CurrentPrcb->ClockOwner )
    CurrentPrcb->ClockOwner = 0;
  return result;
}
