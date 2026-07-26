/*
 * XREFs of NdisCompleteNetPnPEvent @ 0x1C00E0F70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __stdcall NdisCompleteNetPnPEvent(
        NDIS_HANDLE NdisBindingHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification,
        NDIS_STATUS Status)
{
  struct _KEVENT *v6; // rcx

  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0xAu, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, (__int64)NdisBindingHandle);
  v6 = (struct _KEVENT *)NetPnPEventNotification->NetPnPEvent.NdisReserved[0];
  LODWORD(NetPnPEventNotification->NetPnPEvent.NdisReserved[1]) = Status;
  KeSetEvent(v6, 0, 0);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0xBu, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, (__int64)NdisBindingHandle);
}
