/*
 * XREFs of PopCaptureTimeOnProcZero @ 0x1404314C4
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140438F48 (PopDiagComputeEarlyHiberStats.c)
 *     PopDiagTraceHiberStats @ 0x140703B78 (PopDiagTraceHiberStats.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
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
    Dpc.Number = 1280;
  KeInsertQueueDpc(&Dpc, &SystemArgument1, &Event);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return SystemArgument1;
}
