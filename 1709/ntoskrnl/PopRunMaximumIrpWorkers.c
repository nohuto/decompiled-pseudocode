/*
 * XREFs of PopRunMaximumIrpWorkers @ 0x1402490CC
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PopCreateDynamicIrpWorker @ 0x140156004 (PopCreateDynamicIrpWorker.c)
 */

int PopRunMaximumIrpWorkers()
{
  __int64 v0; // rbx
  unsigned int v1; // edi
  _QWORD *v2; // rax
  bool v3; // sf
  __int64 v4; // rbx
  _BYTE Object[4]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+34h] [rbp-24h]
  _QWORD v8[2]; // [rsp+38h] [rbp-20h] BYREF
  int v9; // [rsp+48h] [rbp-10h]

  ExAcquireFastMutex(&PopIrpWorkerMutex);
  PopCreateIrpWorkerAllowed = 0;
  v0 = (unsigned int)(15 - PopIrpWorkerPendingCount - PopIrpWorkerCount);
  PopIrpWorkerPendingCount += v0;
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  v7 = 0;
  v8[1] = v8;
  v1 = 0;
  Object[0] = 5;
  v2 = v8;
  v8[0] = v8;
  Object[2] = 8;
  v9 = v0;
  if ( (_DWORD)v0 )
  {
    do
    {
      v3 = (int)PopCreateDynamicIrpWorker((__int64)Object) < 0;
      LODWORD(v2) = v1 + 1;
      if ( v3 )
        LODWORD(v2) = v1;
      v1 = (unsigned int)v2;
      --v0;
    }
    while ( v0 );
  }
  if ( v1 )
  {
    v4 = v1;
    do
    {
      LODWORD(v2) = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      --v4;
    }
    while ( v4 );
  }
  return (int)v2;
}
