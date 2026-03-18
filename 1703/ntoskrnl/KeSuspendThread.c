/*
 * XREFs of KeSuspendThread @ 0x140072F68
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PsSuspendThread @ 0x1404C7C50 (PsSuspendThread.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiSuspendThread @ 0x14007301C (KiSuspendThread.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 */

__int64 __fastcall KeSuspendThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  volatile signed __int32 *v4; // rdi
  unsigned int v5; // ebp

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (volatile signed __int32 *)(a1 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736));
  v5 = *(char *)(a1 + 644);
  if ( v5 == 127 )
  {
    _InterlockedAnd(v4, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741750);
  }
  ++*(_BYTE *)(a1 + 644);
  if ( !(unsigned __int8)KiSuspendThread(a1, CurrentPrcb) )
    --*(_BYTE *)(a1 + 644);
  _InterlockedAnd(v4, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v5;
}
