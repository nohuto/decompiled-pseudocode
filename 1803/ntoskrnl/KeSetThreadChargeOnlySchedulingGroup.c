/*
 * XREFs of KeSetThreadChargeOnlySchedulingGroup @ 0x140060FE0
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x140060940 (KiStartThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

char __fastcall KeSetThreadChargeOnlySchedulingGroup(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v5; // rdx
  struct _KPRCB *v6; // rbp
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x200) == 0 )
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
  v6 = KeGetCurrentPrcb();
  v8 = 0;
  while ( 1 )
  {
    LOBYTE(v5) = 1;
    KiSetVpThreadSpinLockCount(v6, v5);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      break;
    KiSetVpThreadSpinLockCount(v6, 0LL);
    do
      KeYieldProcessorEx(&v8);
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
  KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  __writecr8(0LL);
  return 1;
}
