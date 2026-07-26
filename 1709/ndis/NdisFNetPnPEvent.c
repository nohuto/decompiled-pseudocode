/*
 * XREFs of NdisFNetPnPEvent @ 0x1C001C840
 * Callers:
 *     ndisFForwardNetPnPEventToFilter @ 0x1C00C436C (ndisFForwardNetPnPEventToFilter.c)
 * Callees:
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A0D8 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

NDIS_STATUS __stdcall NdisFNetPnPEvent(
        NDIS_HANDLE NdisFilterHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification)
{
  KIRQL v5; // al
  PNET_PNP_EVENT_NOTIFICATION *v6; // rdx
  KIRQL v7; // bp
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  NDIS_STATUS v9; // [rsp+48h] [rbp-40h] BYREF
  NDIS_HANDLE v10; // [rsp+50h] [rbp-38h]
  PNET_PNP_EVENT_NOTIFICATION v11; // [rsp+60h] [rbp-28h]

  v10 = NdisFilterHandle;
  v11 = NetPnPEventNotification;
  if ( KeExpandKernelStackAndCalloutEx(ndisFNetPnPEventInternal, &v9, 0x4CCCuLL, 0, 0LL) >= 0 )
    return v9;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
  v6 = (PNET_PNP_EVENT_NOTIFICATION *)((char *)NdisFilterHandle + 264);
  *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
  v7 = v5;
  *((_DWORD *)NdisFilterHandle + 40) = 2101652;
  while ( *v6 )
    v6 = (PNET_PNP_EVENT_NOTIFICATION *)&(*v6)->NetPnPEvent.NdisReserved[3];
  *v6 = NetPnPEventNotification;
  NetPnPEventNotification->NetPnPEvent.NdisReserved[3] = 0LL;
  NetPnPEventNotification->NetPnPEvent.NdisReserved[0] = (unsigned __int64)&Event;
  ndisQueueStackExpansionFallbackWorkItem(NdisFilterHandle);
  *((_QWORD *)NdisFilterHandle + 19) = 0LL;
  *((_DWORD *)NdisFilterHandle + 40) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return NetPnPEventNotification->NetPnPEvent.NdisReserved[1];
}
