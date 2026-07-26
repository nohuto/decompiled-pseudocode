/*
 * XREFs of ndisVerifierAllocatePacketPool @ 0x1C0066CA0
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocatePacketPool @ 0x1C0051150 (NdisAllocatePacketPool.c)
 *     ndisVerifierInjectResourceFailure @ 0x1C0066E04 (ndisVerifierInjectResourceFailure.c)
 */

void __fastcall ndisVerifierAllocatePacketPool(PNDIS_STATUS Status, PNDIS_HANDLE PoolHandle, __int64 a3, __int64 a4)
{
  UINT v6; // r8d
  UINT v7; // r9d
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int8)ndisVerifierInjectResourceFailure(Status, PoolHandle, a3, a4) )
  {
    *PoolHandle = 0LL;
    *Status = -1073741670;
  }
  else
  {
    NdisAllocatePacketPool(Status, PoolHandle, v6, v7);
    if ( !*Status )
      *((_QWORD *)*PoolHandle + 3) = retaddr;
  }
}
