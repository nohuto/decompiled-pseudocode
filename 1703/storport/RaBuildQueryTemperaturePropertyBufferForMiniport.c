/*
 * XREFs of RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0038E88
 * Callers:
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C002F420 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C003BC20 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaBuildQueryTemperaturePropertyBufferForMiniport(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  int v8; // edx
  __int64 v9; // rsi
  unsigned int v10; // r14d
  char *Pool; // rax
  char *v12; // rbx
  int v13; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_DWORD *)v4 == 1 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    v4 = *(_QWORD *)(v4 + 24);
  }
  else
  {
    v9 = 0LL;
  }
  v10 = v8 + 28;
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, (unsigned int)(v8 + 28), 0x72536152u, a1);
  v12 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v10);
    *(_DWORD *)v12 = 28;
    *(_QWORD *)(v12 + 4) = 0x54415245504D4554LL;
    *((_DWORD *)v12 + 4) = 2954240;
    if ( v9 )
      v13 = *(_DWORD *)(v9 + 1000);
    else
      v13 = *(_DWORD *)(v4 + 4204);
    *((_DWORD *)v12 + 3) = v13;
    *((_DWORD *)v12 + 6) = v10 - 28;
    *((_DWORD *)v12 + 7) = 40;
    *((_DWORD *)v12 + 8) = 40;
  }
  else
  {
    v5 = -1073741670;
  }
  result = v5;
  *a3 = v12;
  *a4 = v10;
  return result;
}
