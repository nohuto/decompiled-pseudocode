/*
 * XREFs of PoInitializeBroadcast @ 0x140700A98
 * Callers:
 *     PnprQuiesceDevices @ 0x14042CC58 (PnprQuiesceDevices.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     PpmBeginHighPerfRequest @ 0x14015B880 (PpmBeginHighPerfRequest.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopHaltDeviceIdle @ 0x14023D4BC (PopHaltDeviceIdle.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopBuildDeviceNotifyList @ 0x140437204 (PopBuildDeviceNotifyList.c)
 */

__int64 PoInitializeBroadcast()
{
  char *PoolWithTag; // rax
  unsigned int v1; // edi
  char *v2; // rbx
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1D0uLL, 0x73734450u);
  v1 = 0;
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1D0uLL);
    v3 = v2 + 96;
    *((_QWORD *)v2 + 2) = KeGetCurrentThread();
    v4 = 5LL;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_QWORD *)v2 + 54) = v2 + 424;
    *((_QWORD *)v2 + 53) = v2 + 424;
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
    qword_140365770 = v2;
    PopCurrentBroadcast = 0LL;
    qword_140365768 = 0LL;
    PopBuildDeviceNotifyList(v2 + 48);
    PopHaltDeviceIdle();
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
