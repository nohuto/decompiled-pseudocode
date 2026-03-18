/*
 * XREFs of KeSwitchFrozenProcessor @ 0x1402472C0
 * Callers:
 *     KdpSendWaitContinue @ 0x140804F74 (KdpSendWaitContinue.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     KiCheckStall @ 0x140247470 (KiCheckStall.c)
 *     KiSetDebuggerOwner @ 0x140247A48 (KiSetDebuggerOwner.c)
 */

__int64 __fastcall KeSwitchFrozenProcessor(ULONG a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  _BYTE *SchedulerAssist; // rax
  __int64 v6; // rdx
  _BYTE *v7; // rax

  v1 = a1;
  if ( a1 < KeQueryActiveProcessorCountEx(0xFFFFu) && !PoAllProcIntrDisabled )
  {
    _mm_lfence();
    v2 = KiProcessorBlock[v1];
    if ( ((*(_DWORD *)(v2 + 11656) - 2) & 0xFFFFFFFD) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      KiSetDebuggerOwner(v2);
      if ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
        return 3LL;
      if ( (CurrentPrcb->IpiFrozen & 0xF) != 4 )
        return 0LL;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
        SchedulerAssist[28] = 1;
      KeQueryPerformanceCounter(0LL);
      while ( CurrentPrcb != (struct _KPRCB *)KiDebuggerOwner )
      {
        LOBYTE(v6) = 1;
        KiCheckStall(CurrentPrcb, v6);
      }
      v7 = CurrentPrcb->SchedulerAssist;
      if ( v7 )
        v7[28] = 0;
    }
  }
  return 2LL;
}
