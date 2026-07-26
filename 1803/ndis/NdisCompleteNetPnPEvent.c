/*
 * XREFs of NdisCompleteNetPnPEvent @ 0x1C00ED9B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __stdcall NdisCompleteNetPnPEvent(
        NDIS_HANDLE NdisBindingHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification,
        NDIS_STATUS Status)
{
  struct _KEVENT *v6; // rcx

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0xAu, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (__int64)NdisBindingHandle);
  v6 = (struct _KEVENT *)NetPnPEventNotification->NetPnPEvent.NdisReserved[0];
  LODWORD(NetPnPEventNotification->NetPnPEvent.NdisReserved[1]) = Status;
  KeSetEvent(v6, 0, 0);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0xBu, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (__int64)NdisBindingHandle);
}
