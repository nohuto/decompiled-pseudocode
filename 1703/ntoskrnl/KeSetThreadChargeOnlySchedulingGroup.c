/*
 * XREFs of KeSetThreadChargeOnlySchedulingGroup @ 0x140044420
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x140044504 (PsImpersonateContainerOfThread.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiStartThreadCycleAccumulation @ 0x140043CC0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 */

char __fastcall KeSetThreadChargeOnlySchedulingGroup(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x100) == 0 )
  {
    if ( a2 )
    {
      if ( *(_QWORD *)(a1 + 104) )
        return 0;
      goto LABEL_4;
    }
    return 0;
  }
  if ( a2 )
    return 0;
LABEL_4:
  KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL);
  KiStartThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0);
  _enable();
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( CurrentPrcb->PrcbLock );
  }
  if ( a2 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 8u);
    *(_QWORD *)(a1 + 104) = a2;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  }
  else
  {
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 8u);
  }
  _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  __writecr8(0LL);
  return 1;
}
