/*
 * XREFs of ndisMSetIndicatePacketHandler @ 0x1C00035E8
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C010DF4C (ndisPmInitializeMiniport.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall ndisMSetIndicatePacketHandler(__int64 a1))(NDIS_HANDLE MiniportAdapterHandle)
{
  int v1; // eax
  __int64 (__fastcall *v2)(ULONG_PTR); // rax
  bool v3; // cf
  __int64 (__fastcall *result)(NDIS_HANDLE); // rax

  v1 = *(_DWORD *)(a1 + 464);
  if ( v1 )
  {
    if ( v1 == 3 )
      goto LABEL_4;
    v2 = ndisMIndicatePacket;
  }
  else
  {
    v2 = ethFilterDprIndicateReceivePacket;
  }
  *(_QWORD *)(a1 + 1896) = v2;
LABEL_4:
  v3 = *(_BYTE *)(a1 + 32) < 6u;
  result = *(__int64 (__fastcall **)(NDIS_HANDLE))(a1 + 1896);
  *(_QWORD *)(a1 + 2160) = result;
  *(_QWORD *)(a1 + 3408) = result;
  *(_BYTE *)(a1 + 2684) = 1;
  if ( v3 && *(_DWORD *)(a1 + 2248) == 1 )
  {
    result = ndisMIndicatePacketsToNetBufferLists;
    *(_QWORD *)(a1 + 1896) = ndisMIndicatePacketsToNetBufferLists;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x20000000) != 0 )
  {
    result = *(__int64 (__fastcall **)(NDIS_HANDLE))(a1 + 1896);
    *(_QWORD *)(a1 + 432) = result;
    *(_BYTE *)(a1 + 2672) = 1;
  }
  return result;
}
