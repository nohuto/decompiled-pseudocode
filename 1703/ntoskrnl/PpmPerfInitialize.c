/*
 * XREFs of PpmPerfInitialize @ 0x1408246A4
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PpmPerfInitialize()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  __int64 result; // rax

  qword_1403E4068 = (__int64)&PpmPerfDomainHead;
  v0 = 2LL;
  PpmPerfDomainHead = (__int64)&PpmPerfDomainHead;
  dword_14034923C = 50;
  dword_1403497B4 = 50;
  v1 = &unk_1403497B8;
  do
  {
    *(v1 - 1400) = 1;
    *v1 = 1;
    *(v1 - 1384) = 70;
    v1[16] = 70;
    *(v1 - 1386) = 30;
    v1[14] = 30;
    *(v1 - 1398) = 100;
    v1[2] = 100;
    *(v1 - 1396) = 100;
    v1[4] = 100;
    ++v1;
    --v0;
  }
  while ( v0 );
  PpmMediaBufferingWork = 0LL;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmMediaBufferingWorker;
  PpmPerfLatencyBoostWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmPerfLatencySensitivityHintWorker;
  WorkItem.Parameter = 0LL;
  WorkItem.List.Flink = 0LL;
  PpmPerfLatencyBoostWorkItem.Parameter = 0LL;
  PpmPerfLatencyBoostWorkItem.List.Flink = 0LL;
  result = (unsigned int)(10 * PpmPerfVirtualLittleHysteresis);
  dword_14034925C = 100;
  PpmPerfVirtualLittleHysteresis100Ns = result;
  dword_1403497D4 = 100;
  dword_140349260 = 2;
  dword_1403497D8 = 2;
  return result;
}
