/*
 * XREFs of KeSetThreadChargeOnlySchedulingGroup @ 0x1400071FC
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1400A0720 (PsImpersonateContainerOfThread.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14008D510 (KiUpdateTotalCyclesCurrentThread.c)
 */

char __fastcall KeSetThreadChargeOnlySchedulingGroup(__int64 a1, __int64 a2)
{
  bool v4; // zf
  struct _KPRCB *CurrentPrcb; // rsi
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x200) != 0 )
  {
    v4 = a2 == 0;
  }
  else
  {
    if ( !a2 )
      return 0;
    v4 = *(_QWORD *)(a1 + 104) == 0LL;
  }
  if ( !v4 )
    return 0;
  KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  KiUpdateTotalCyclesCurrentThread(CurrentPrcb, a1, 0LL);
  _enable();
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v7);
    while ( CurrentPrcb->PrcbLock );
  }
  if ( a2 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 9u);
    *(_QWORD *)(a1 + 104) = a2;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  }
  else
  {
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 9u);
  }
  _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  __writecr8(0LL);
  return 1;
}
