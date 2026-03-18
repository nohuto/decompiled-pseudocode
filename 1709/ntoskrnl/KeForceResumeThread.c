/*
 * XREFs of KeForceResumeThread @ 0x1400AA148
 * Callers:
 *     KeRequestTerminationThread @ 0x1400AB560 (KeRequestTerminationThread.c)
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     KeRundownApcQueues @ 0x1404D6A74 (KeRundownApcQueues.c)
 *     NtTerminateProcess @ 0x1404D9A54 (NtTerminateProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x1400AA1FC (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeForceResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  volatile signed __int32 *v4; // rsi
  __int64 v5; // r8
  unsigned int v6; // edi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (volatile signed __int32 *)(a1 + 736);
  KiAcquireKobjectLockSafe(a1 + 736);
  v6 = *(char *)(a1 + 644) + ((*(_DWORD *)(a1 + 120) >> 14) & 1);
  if ( v6 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xEu);
    *(_BYTE *)(a1 + 644) = 0;
  }
  LOBYTE(v5) = 1;
  KiResumeThread(a1, CurrentPrcb, v5);
  _InterlockedAnd(v4, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v6;
}
