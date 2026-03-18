/*
 * XREFs of KiCompleteKernelInit @ 0x14042615C
 * Callers:
 *     KiInitializeKernel @ 0x140425860 (KiInitializeKernel.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     KeInitializeTimer2 @ 0x1400B2730 (KeInitializeTimer2.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     KeAttachProcess @ 0x1401216C0 (KeAttachProcess.c)
 *     KiSetProcessorIdle @ 0x140128644 (KiSetProcessorIdle.c)
 *     KiCreateCpuSetForProcessor @ 0x1404262B0 (KiCreateCpuSetForProcessor.c)
 */

__int64 __fastcall KiCompleteKernelInit(__int64 a1, __int64 a2, int a3)
{
  char v6; // di
  bool v7; // zf
  int v9; // [rsp+40h] [rbp+18h] BYREF

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
    qword_1403714D8 = 0LL;
    qword_1403714D0 = (__int64)&qword_1403714C8;
    qword_1403714C8 = (__int64)&qword_1403714C8;
    KeInitializeTimer2((__int64)&KiForegroundState);
    KeInitializeDpc((PRKDPC)&stru_140371448, (PKDEFERRED_ROUTINE)KiProcessPendingForegroundBoosts, 0LL);
    KeInitializeDpc(&stru_140371488, (PKDEFERRED_ROUTINE)KiTriggerForegroundBoostDpc, 0LL);
  }
  v6 = 0;
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 80LL), *(unsigned __int8 *)(a1 + 209));
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v7 = *(_QWORD *)(a1 + 16) == 0LL;
  *(_BYTE *)(a1 + 35) = 1;
  if ( v7 )
  {
    v6 = 1;
    KiSetProcessorIdle(a1, 1, 1);
  }
  KiUpdateThreadPriority(a1, a2, 0, v6);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  return KiCreateCpuSetForProcessor(a1);
}
