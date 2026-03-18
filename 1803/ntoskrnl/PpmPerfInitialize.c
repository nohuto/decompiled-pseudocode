/*
 * XREFs of PpmPerfInitialize @ 0x1408C2AD4
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x14064C21C (PopInitializeTimer.c)
 */

__int64 PpmPerfInitialize()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax

  qword_14044C350 = (__int64)&PpmPerfDomainHead;
  v0 = 2LL;
  PpmPerfDomainHead = (__int64)&PpmPerfDomainHead;
  dword_1403A65BC = 50;
  dword_1403A703C = 50;
  v1 = &unk_1403A7040;
  do
  {
    *(v1 - 2688) = 1;
    *v1 = 1;
    *(v1 - 2672) = 70;
    v1[16] = 70;
    *(v1 - 2674) = 30;
    v1[14] = 30;
    *(v1 - 2686) = 100;
    v1[2] = 100;
    *(v1 - 2684) = 100;
    v1[4] = 100;
    ++v1;
    --v0;
  }
  while ( v0 );
  dword_1403A65DC = 100;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmMediaBufferingWorker;
  dword_1403A705C = 100;
  PpmPerfLatencyBoostWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmPerfLatencySensitivityHintWorker;
  dword_1403A65E0 = 2;
  dword_1403A7060 = 2;
  PpmMediaBufferingWork = 0LL;
  WorkItem.Parameter = 0LL;
  WorkItem.List.Flink = 0LL;
  PpmPerfLatencyBoostWorkItem.Parameter = 0LL;
  PpmPerfLatencyBoostWorkItem.List.Flink = 0LL;
  PpmPerfQosIdleHysteresis = (unsigned int)(10 * PpmPerfQosTransitionHysteresis);
  return PopInitializeTimer(
           (__int64)&PpmPerfTelemetryTimer,
           (__int64)PpmPerfTelemetryCallback,
           0LL,
           (__int64)PpmPerfTelemetryWorker,
           0LL);
}
