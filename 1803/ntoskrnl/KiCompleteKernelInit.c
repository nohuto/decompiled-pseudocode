/*
 * XREFs of KiCompleteKernelInit @ 0x14047AF10
 * Callers:
 *     KiInitializeKernel @ 0x14047A5D0 (KiInitializeKernel.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeInitializeTimer2 @ 0x140086040 (KeInitializeTimer2.c)
 *     KiSetProcessorIdle @ 0x1400A9678 (KiSetProcessorIdle.c)
 *     KeAttachProcess @ 0x1400C7820 (KeAttachProcess.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiUpdateThreadPriority @ 0x1400EDCB0 (KiUpdateThreadPriority.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiCreateCpuSetForProcessor @ 0x14047B0A4 (KiCreateCpuSetForProcessor.c)
 */

__int64 __fastcall KiCompleteKernelInit(__int64 a1, __int64 a2, int a3)
{
  char v6; // si
  struct _KPRCB *CurrentPrcb; // rdi
  bool v8; // zf
  int v10; // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
  {
    *(_DWORD *)(a1 + 11864) = KiMaximumDpcQueueDepth;
    *(_DWORD *)(a1 + 11872) = KiMinimumDpcRate;
    *(_DWORD *)(a1 + 23444) = KiAdjustDpcThreshold;
  }
  KeGetCurrentIrql();
  __writecr8(2uLL);
  _enable();
  KeAttachProcess(PsInitialSystemProcess);
  if ( !a3 )
  {
    qword_1403B46D8 = 0LL;
    qword_1403B46D0 = (__int64)&qword_1403B46C8;
    qword_1403B46C8 = (__int64)&qword_1403B46C8;
    KeInitializeTimer2((__int64)&KiForegroundState);
    KeInitializeDpc((PRKDPC)&stru_1403B4648, (PKDEFERRED_ROUTINE)KiProcessPendingForegroundBoosts, 0LL);
    KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)KiTriggerForegroundBoostDpc, 0LL);
  }
  v6 = 0;
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 80LL), *(unsigned __int8 *)(a1 + 209));
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 88LL), *(unsigned __int8 *)(a1 + 209));
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v10);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v8 = *(_QWORD *)(a1 + 16) == 0LL;
  *(_BYTE *)(a1 + 35) = 1;
  if ( v8 )
  {
    v6 = 1;
    KiSetProcessorIdle(a1, 1, 1);
  }
  KiUpdateThreadPriority((struct _KPRCB *)a1, a2, 0, v6);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  return KiCreateCpuSetForProcessor(a1);
}
