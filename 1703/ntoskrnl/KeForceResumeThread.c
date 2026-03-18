/*
 * XREFs of KeForceResumeThread @ 0x140110D6C
 * Callers:
 *     KeRequestTerminationThread @ 0x14012008C (KeRequestTerminationThread.c)
 *     KeRundownApcQueues @ 0x140540148 (KeRundownApcQueues.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 *     NtTerminateProcess @ 0x14054E9C0 (NtTerminateProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x140110E20 (KiResumeThread.c)
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
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736));
  v6 = *(char *)(a1 + 644) + ((*(_DWORD *)(a1 + 120) >> 13) & 1);
  if ( v6 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xDu);
    *(_BYTE *)(a1 + 644) = 0;
  }
  LOBYTE(v5) = 1;
  KiResumeThread(a1, CurrentPrcb, v5);
  _InterlockedAnd(v4, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0, 1LL, 0LL, CurrentIrql);
  return v6;
}
