/*
 * XREFs of RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0038BD0
 * Callers:
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C002A438 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C003BB54 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall RaBuildQueryTemperaturePropertyBufferForMiniport(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int *a4)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  int v8; // edx
  __int64 v9; // r14
  unsigned int v10; // ebp
  SIZE_T v11; // rdx
  char *Pool; // rax
  char *v13; // rbx
  int v14; // eax
  __int64 result; // rax

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 64);
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_DWORD *)v5 == 1 )
    v9 = *(_QWORD *)(v5 + 24);
  else
    v9 = *(_QWORD *)(a1 + 64);
  v10 = v8 + 28;
  v11 = (unsigned int)(v8 + 28);
  if ( *(_DWORD *)v5 != 1 )
    v5 = 0LL;
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, v11, 0x72536152u, a1);
  v13 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v10);
    *(_DWORD *)v13 = 28;
    *(_QWORD *)(v13 + 4) = 0x54415245504D4554LL;
    *((_DWORD *)v13 + 4) = 2954240;
    if ( v5 )
      v14 = *(_DWORD *)(v5 + 1032);
    else
      v14 = *(_DWORD *)(v9 + 4204);
    *((_DWORD *)v13 + 3) = v14;
    *((_DWORD *)v13 + 6) = v10 - 28;
    *((_DWORD *)v13 + 7) = 40;
    *((_DWORD *)v13 + 8) = 40;
  }
  else
  {
    v4 = -1073741670;
  }
  *a3 = v13;
  result = v4;
  *a4 = v10;
  return result;
}
