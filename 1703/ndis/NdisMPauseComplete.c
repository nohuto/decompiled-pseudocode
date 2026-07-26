/*
 * XREFs of NdisMPauseComplete @ 0x1C0015F80
 * Callers:
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0053DF0 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C00686F0 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C0069420 (ndisReturnNetBufferListsToPackets.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00F6BC8 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 */

void __stdcall NdisMPauseComplete(NDIS_HANDLE MiniportAdapterHandle)
{
  KIRQL v2; // al
  struct _KEVENT *v3; // rsi
  unsigned __int8 v4; // al

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(144LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, MiniportAdapterHandle);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  v3 = (struct _KEVENT *)*((_QWORD *)MiniportAdapterHandle + 283);
  *((_QWORD *)MiniportAdapterHandle + 283) = 0LL;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v2);
  if ( v3 )
  {
    KeSetEvent(v3, 0, 0);
  }
  else if ( (*((_DWORD *)MiniportAdapterHandle + 31) & 0x100000) != 0
         || (v4 = *((_BYTE *)MiniportAdapterHandle + 32), v4 > 6u)
         || v4 == 6 && *((_BYTE *)MiniportAdapterHandle + 33) >= 0x32u )
  {
    ndisBugCheckEx(0x1FuLL, (ULONG_PTR)MiniportAdapterHandle, 1uLL, 0LL);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(145LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, MiniportAdapterHandle);
}
