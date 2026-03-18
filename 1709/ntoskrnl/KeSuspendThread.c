/*
 * XREFs of KeSuspendThread @ 0x1400AC2F8
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     PsSuspendThread @ 0x1405829A0 (PsSuspendThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiSuspendThread @ 0x1400ABB8C (KiSuspendThread.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeSuspendThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  volatile signed __int32 *v4; // rdi
  __int64 v5; // r8
  unsigned int v6; // ebp

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (volatile signed __int32 *)(a1 + 736);
  KiAcquireKobjectLockSafe(a1 + 736);
  v6 = *(char *)(a1 + 644);
  if ( v6 == 127 )
  {
    _InterlockedAnd(v4, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741750);
  }
  ++*(_BYTE *)(a1 + 644);
  if ( !KiSuspendThread(a1, (__int64)CurrentPrcb, v5) )
    --*(_BYTE *)(a1 + 644);
  _InterlockedAnd(v4, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v6;
}
