/*
 * XREFs of KeAlertThread @ 0x1400AB690
 * Callers:
 *     KeRequestTerminationThread @ 0x1400AB560 (KeRequestTerminationThread.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x14012B4B0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     IoDecrementKeepAliveCount @ 0x1401FA610 (IoDecrementKeepAliveCount.c)
 *     KeAlertResumeThread @ 0x140202738 (KeAlertResumeThread.c)
 *     NtAlertThread @ 0x14071AA50 (NtAlertThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x1400621E0 (KiSignalThread.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 */

char __fastcall KeAlertThread(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  char v6; // si
  char v8; // al
  int v9; // [rsp+68h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = *(_BYTE *)(a2 + a1 + 114);
  if ( !v6 )
  {
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || (*(_DWORD *)(a1 + 116) & 0x10) == 0
      || a2 > *(char *)(a1 + 391)
      || (v8 = KiSignalThread((__int64)CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v8) )
    {
      *(_BYTE *)(a2 + a1 + 114) = 1;
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 2u, CurrentIrql);
  return v6;
}
