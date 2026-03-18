/*
 * XREFs of KiUpdateVPBackingThreadPriority @ 0x1400EB950
 * Callers:
 *     NtYieldExecution @ 0x140040000 (NtYieldExecution.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x1400C38C0 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 * Callees:
 *     KiSetBasePriorityAndClearDecrement @ 0x14006B24C (KiSetBasePriorityAndClearDecrement.c)
 *     KiUpdateThreadPriority @ 0x1400EDCB0 (KiUpdateThreadPriority.c)
 *     KeReadGuestSchedulerAssistPriority @ 0x1401A5A6C (KeReadGuestSchedulerAssistPriority.c)
 */

char __fastcall KiUpdateVPBackingThreadPriority(__int64 a1, __int64 a2)
{
  int GuestSchedulerAssistPriority; // eax
  unsigned int v6; // edi
  char v7; // r11
  __int64 v8; // r9

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) == 0 )
    return 0;
  GuestSchedulerAssistPriority = KeReadGuestSchedulerAssistPriority(a1);
  v6 = GuestSchedulerAssistPriority;
  if ( v7 && (*(_BYTE *)(a1 + 564) & 0xF0) != 0 )
  {
    if ( GuestSchedulerAssistPriority <= *(char *)(a1 + 195) )
      return 1;
    goto LABEL_8;
  }
  if ( GuestSchedulerAssistPriority != *(char *)(a1 + 195) )
  {
LABEL_8:
    KiSetBasePriorityAndClearDecrement(a1, 0LL, 0);
    LOBYTE(v8) = a2 != 0;
    KiUpdateThreadPriority(a2, a1, v6, v8);
  }
  return 1;
}
