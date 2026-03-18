/*
 * XREFs of PopCaptureTimeOnProcZero @ 0x14040A76C
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopDiagComputeEarlyHiberStats @ 0x14040A6BC (PopDiagComputeEarlyHiberStats.c)
 *     PopDiagTraceHiberStats @ 0x140577F20 (PopDiagTraceHiberStats.c)
 * Callees:
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 */

__int64 PopCaptureTimeOnProcZero()
{
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp-48h] BYREF
  __int64 SystemArgument1; // [rsp+A0h] [rbp+8h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopTimestampTargetProcessor, 0LL);
  Dpc.Importance = 2;
  if ( !Dpc.DpcData )
    Dpc.Number = 640;
  KeInsertQueueDpc(&Dpc, &SystemArgument1, &Event);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return SystemArgument1;
}
