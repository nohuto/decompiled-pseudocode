/*
 * XREFs of ndisMSetIndicatePacketHandler @ 0x1C001F014
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMSetIndicatePacketHandler(__int64 a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v2)(ULONG_PTR); // rdx
  bool v3; // cf

  result = *(unsigned int *)(a1 + 464);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 3 )
    {
      v2 = *(__int64 (__fastcall **)(ULONG_PTR))(a1 + 1896);
      goto LABEL_4;
    }
    v2 = ndisMIndicatePacket;
  }
  else
  {
    v2 = ethFilterDprIndicateReceivePacket;
  }
  *(_QWORD *)(a1 + 1896) = v2;
LABEL_4:
  v3 = *(_BYTE *)(a1 + 32) < 6u;
  *(_QWORD *)(a1 + 2160) = v2;
  *(_QWORD *)(a1 + 3408) = v2;
  *(_BYTE *)(a1 + 2684) = 1;
  if ( v3 && *(_DWORD *)(a1 + 2248) == 1 )
  {
    v2 = (__int64 (__fastcall *)(ULONG_PTR))ndisMIndicatePacketsToNetBufferLists;
    *(_QWORD *)(a1 + 1896) = ndisMIndicatePacketsToNetBufferLists;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x20000000) != 0 )
  {
    *(_QWORD *)(a1 + 432) = v2;
    *(_BYTE *)(a1 + 2672) = 1;
  }
  return result;
}
