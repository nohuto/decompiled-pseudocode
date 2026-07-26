/*
 * XREFs of ndisUpdateCheckForLoopbackFlag @ 0x1C001A4A8
 * Callers:
 *     ndisPostSetOpenPacketFilter @ 0x1C001BC64 (ndisPostSetOpenPacketFilter.c)
 *     ndisSetOpenPacketFilter @ 0x1C001BE70 (ndisSetOpenPacketFilter.c)
 *     XRemoveBindingFromLists @ 0x1C0026618 (XRemoveBindingFromLists.c)
 *     ndisSetRestorePacketFilter @ 0x1C004A240 (ndisSetRestorePacketFilter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C920 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C00F7950 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C00F7CE4 (ndisMOpenAdapter.c)
 *     ndisMFinishClose @ 0x1C00FBAD4 (ndisMFinishClose.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C00FBBD4 (ndisDeQueueOpenOnMiniport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisUpdateCheckForLoopbackFlag(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 400);
  if ( result && *(_QWORD *)(result + 328) || !*(_BYTE *)(a1 + 91) || *(_WORD *)(a1 + 1820) <= 1u )
    *(_DWORD *)(a1 + 120) &= ~0x4000u;
  else
    *(_DWORD *)(a1 + 120) |= 0x4000u;
  return result;
}
