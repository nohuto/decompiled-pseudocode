/*
 * XREFs of ndisUpdateCheckForLoopbackFlag @ 0x1C001AFA4
 * Callers:
 *     XRemoveBindingFromLists @ 0x1C0013930 (XRemoveBindingFromLists.c)
 *     ndisPostSetOpenPacketFilter @ 0x1C001C508 (ndisPostSetOpenPacketFilter.c)
 *     ndisSetOpenPacketFilter @ 0x1C001C84C (ndisSetOpenPacketFilter.c)
 *     ndisSetRestorePacketFilter @ 0x1C00488C8 (ndisSetRestorePacketFilter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisMFinishClose @ 0x1C0102F48 (ndisMFinishClose.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C0103054 (ndisDeQueueOpenOnMiniport.c)
 *     NdisOpenAdapterEx @ 0x1C0104520 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C01048C0 (ndisMOpenAdapter.c)
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
