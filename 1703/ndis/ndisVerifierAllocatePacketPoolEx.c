/*
 * XREFs of ndisVerifierAllocatePacketPoolEx @ 0x1C0065AC0
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocatePacketPoolEx @ 0x1C0013C50 (NdisAllocatePacketPoolEx.c)
 *     ndisVerifierInjectResourceFailure @ 0x1C0065BBC (ndisVerifierInjectResourceFailure.c)
 */

void __fastcall ndisVerifierAllocatePacketPoolEx(
        PNDIS_STATUS Status,
        PNDIS_HANDLE PoolHandle,
        __int64 a3,
        __int64 a4,
        UINT ProtocolReservedLength)
{
  UINT v7; // r8d
  UINT v8; // r9d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int8)ndisVerifierInjectResourceFailure(Status, PoolHandle, a3, a4) )
  {
    *PoolHandle = 0LL;
    *Status = -1073741670;
  }
  else
  {
    NdisAllocatePacketPoolEx(Status, PoolHandle, v7, v8, ProtocolReservedLength);
    if ( !*Status )
      *((_QWORD *)*PoolHandle + 3) = retaddr;
  }
}
