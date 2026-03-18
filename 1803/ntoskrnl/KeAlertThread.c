/*
 * XREFs of KeAlertThread @ 0x140043DB0
 * Callers:
 *     KeRequestTerminationThread @ 0x140043C6C (KeRequestTerminationThread.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1400CCBF0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     IoDecrementKeepAliveCount @ 0x1402374A0 (IoDecrementKeepAliveCount.c)
 *     KeAlertResumeThread @ 0x14023FD80 (KeAlertResumeThread.c)
 *     NtAlertThread @ 0x14077E450 (NtAlertThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiSignalThread @ 0x14002F9B0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

char __fastcall KeAlertThread(__int64 a1, __int64 a2)
{
  char v2; // bp
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  char v6; // si
  char v8; // al
  int v9; // [rsp+68h] [rbp+10h] BYREF

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v9);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = *(_BYTE *)(v2 + a1 + 114);
  if ( !v6 )
  {
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || (*(_DWORD *)(a1 + 116) & 0x10) == 0
      || v2 > *(char *)(a1 + 391)
      || (v8 = KiSignalThread((__int64)CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v8) )
    {
      *(_BYTE *)(v2 + a1 + 114) = 1;
    }
  }
  KiReleaseThreadLockSafe(a1);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 2, CurrentIrql);
  return v6;
}
