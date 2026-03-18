/*
 * XREFs of KeAlertThreadByThreadId @ 0x1400893F0
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     NtAlertThreadByThreadId @ 0x1404C6634 (NtAlertThreadByThreadId.c)
 *     VslCallEnclave @ 0x1406B3378 (VslCallEnclave.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x1400621E0 (KiSignalThread.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 */

__int64 __fastcall KeAlertThreadByThreadId(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 v4; // si
  char v5; // al
  int v7; // [rsp+50h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v7);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || *(_BYTE *)(a1 + 643) != 37
      || (v5 = KiSignalThread((__int64)CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v5) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 4u);
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
  return v4;
}
