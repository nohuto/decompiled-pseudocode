/*
 * XREFs of ndisSynchReturnPacketsForTranslation @ 0x1C006B770
 * Callers:
 *     <none>
 * Callees:
 *     ndisReturnPacketToNetBufferList @ 0x1C006B734 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisSynchReturnPacketsForTranslation(__int64 a1, struct _NDIS_PACKET *a2)
{
  ndisReturnPacketToNetBufferList(a1, a2);
}
