/*
 * XREFs of PopRunMaximumIrpWorkers @ 0x140155118
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     PopCreateDynamicIrpWorker @ 0x14016C860 (PopCreateDynamicIrpWorker.c)
 */

int PopRunMaximumIrpWorkers()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  _QWORD *v2; // rax
  bool v3; // sf
  _BYTE Object[4]; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+34h] [rbp-24h]
  _QWORD v7[2]; // [rsp+38h] [rbp-20h] BYREF
  int v8; // [rsp+48h] [rbp-10h]

  ExAcquireFastMutex(&PopIrpWorkerMutex);
  PopCreateIrpWorkerAllowed = 0;
  v0 = (unsigned int)(15 - PopIrpWorkerPendingCount - PopIrpWorkerCount);
  PopIrpWorkerPendingCount += v0;
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  v6 = 0;
  v7[1] = v7;
  v1 = 0LL;
  Object[0] = 5;
  v2 = v7;
  v7[0] = v7;
  Object[2] = 8;
  v8 = v0;
  if ( (_DWORD)v0 )
  {
    do
    {
      v3 = (int)PopCreateDynamicIrpWorker(Object) < 0;
      LODWORD(v2) = v1 + 1;
      if ( v3 )
        LODWORD(v2) = v1;
      v1 = (unsigned int)v2;
      --v0;
    }
    while ( v0 );
  }
  if ( (_DWORD)v1 )
  {
    do
    {
      LODWORD(v2) = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      --v1;
    }
    while ( v1 );
  }
  return (int)v2;
}
