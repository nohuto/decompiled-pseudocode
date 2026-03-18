/*
 * XREFs of EtwpCoverageSamplerUnloadImage @ 0x1407B89DC
 * Callers:
 *     EtwpTraceImageUnload @ 0x14003E620 (EtwpTraceImageUnload.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1407B3294 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampProcessRemoveModule @ 0x1407B6D48 (EtwpCovSampProcessRemoveModule.c)
 */

void __fastcall EtwpCoverageSamplerUnloadImage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&v11) < 0 )
    goto LABEL_8;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v6 = *(_QWORD *)(a1 + 2112);
    if ( !v6 )
      goto LABEL_8;
  }
  else
  {
    v6 = qword_1403A1CD8 + 752;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6 + 8, 0LL);
  *(_QWORD *)(v6 + 16) = KeGetCurrentThread();
  EtwpCovSampProcessRemoveModule(v6, a2, a3);
  *(_QWORD *)(v6 + 16) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 8), v8, v9, v10);
  KeAbPostRelease(v6 + 8);
  KeLeaveCriticalRegion();
LABEL_8:
  if ( v11 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&stru_1403A1CE0);
    KeLeaveCriticalRegion();
  }
}
