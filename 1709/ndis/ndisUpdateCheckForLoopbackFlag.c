/*
 * XREFs of ndisUpdateCheckForLoopbackFlag @ 0x1C000F750
 * Callers:
 *     XRemoveBindingFromLists @ 0x1C0002104 (XRemoveBindingFromLists.c)
 *     ndisPostSetOpenPacketFilter @ 0x1C00102EC (ndisPostSetOpenPacketFilter.c)
 *     ndisSetOpenPacketFilter @ 0x1C00104F4 (ndisSetOpenPacketFilter.c)
 *     ndisSetRestorePacketFilter @ 0x1C004762C (ndisSetRestorePacketFilter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C364 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisMFinishClose @ 0x1C00FF3D8 (ndisMFinishClose.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C00FF4DC (ndisDeQueueOpenOnMiniport.c)
 *     NdisOpenAdapterEx @ 0x1C0103020 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C01033B8 (ndisMOpenAdapter.c)
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
