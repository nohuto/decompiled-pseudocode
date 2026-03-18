/*
 * XREFs of PpmPerfInitialize @ 0x140851C2C
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1405E53BC (PopInitializeTimer.c)
 */

__int64 PpmPerfInitialize()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax

  qword_1404011C8 = (__int64)&PpmPerfDomainHead;
  v0 = 2LL;
  PpmPerfDomainHead = (__int64)&PpmPerfDomainHead;
  dword_140362E1C = 50;
  dword_14036389C = 50;
  v1 = &unk_1403638A0;
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
  dword_140362E3C = 100;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmMediaBufferingWorker;
  dword_1403638BC = 100;
  PpmPerfLatencyBoostWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmPerfLatencySensitivityHintWorker;
  dword_140362E40 = 2;
  dword_1403638C0 = 2;
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
