/*
 * XREFs of RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C000D940
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C000D38C (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C003B910 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaBuildQueryPhysicalTopologyBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v4; // edi
  char *v7; // rbx
  __int64 v8; // rbp
  unsigned int v9; // esi
  char *Pool; // rax
  __int64 result; // rax

  v4 = 0;
  v7 = 0LL;
  v8 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  v9 = v8 + 28;
  if ( (unsigned __int64)(v8 + 28) > 0xFFFFFFFF )
  {
    v4 = -1073741811;
  }
  else
  {
    Pool = (char *)RaidAllocatePool(NonPagedPoolNx, v9, 0x72536152u, a1);
    v7 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, v9);
      *(_DWORD *)v7 = 28;
      *(_QWORD *)(v7 + 4) = 0x59474F4C4F504F54LL;
      *((_DWORD *)v7 + 4) = 2954240;
      *((_DWORD *)v7 + 3) = 60;
      *((_DWORD *)v7 + 6) = v8;
      *((_DWORD *)v7 + 7) = 56;
      *((_DWORD *)v7 + 8) = v8;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  result = v4;
  *a3 = v7;
  *a4 = v9;
  return result;
}
