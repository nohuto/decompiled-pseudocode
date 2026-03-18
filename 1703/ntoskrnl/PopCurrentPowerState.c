/*
 * XREFs of PopCurrentPowerState @ 0x1404C4460
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopCurrentPowerStatePrecise @ 0x140577B60 (PopCurrentPowerStatePrecise.c)
 *     PopEsEnterSleepShutdown @ 0x140579A84 (PopEsEnterSleepShutdown.c)
 *     PopEsUpdateState @ 0x140583DF4 (PopEsUpdateState.c)
 *     PopEsStartTelemetry @ 0x140583E84 (PopEsStartTelemetry.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14034B528, 0LL);
  *a1 = xmmword_14034B538;
  a1[1] = xmmword_14034B548;
  PopReleaseRwLock((ULONG_PTR)&qword_14034B528);
}
