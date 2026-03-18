/*
 * XREFs of PoInitializeBroadcast @ 0x1405ECC84
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PnprQuiesceDevices @ 0x1404837F0 (PnprQuiesceDevices.c)
 *     PopDirectedDripsNotifyDrivers @ 0x1407619C4 (PopDirectedDripsNotifyDrivers.c)
 * Callees:
 *     PopHaltDeviceIdle @ 0x140153AFC (PopHaltDeviceIdle.c)
 *     PpmBeginHighPerfRequest @ 0x14016E780 (PpmBeginHighPerfRequest.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PopBuildDeviceNotifyList @ 0x140475B44 (PopBuildDeviceNotifyList.c)
 */

__int64 PoInitializeBroadcast()
{
  _QWORD *PoolWithTag; // rax
  unsigned int v1; // ebx
  _QWORD *v2; // rdi
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1D8uLL, 0x73734450u);
  v1 = 0;
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1D8uLL);
    v3 = v2 + 12;
    v2[2] = KeGetCurrentThread();
    v4 = 5LL;
    v2[1] = 0LL;
    v2[55] = v2 + 54;
    v2[54] = v2 + 54;
    do
    {
      *(v3 - 2) = v3 - 3;
      *(v3 - 3) = v3 - 3;
      *v3 = v3 - 1;
      *(v3 - 1) = v3 - 1;
      v3[2] = v3 + 1;
      v3[1] = v3 + 1;
      v5 = v3 + 3;
      v3[4] = v3 + 3;
      v3 += 9;
      *v5 = v5;
      --v4;
    }
    while ( v4 );
    PpmBeginHighPerfRequest();
    qword_1403A9FF0 = v2;
    PopCurrentBroadcast = 0LL;
    qword_1403A9FE8 = 0LL;
    PopBuildDeviceNotifyList(v2 + 6);
    PopHaltDeviceIdle();
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
