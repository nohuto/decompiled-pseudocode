/*
 * XREFs of NdisFDevicePnPEventNotify @ 0x1C001FD90
 * Callers:
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00AEE3C (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00C6B30 (ndisFDevicePnPEventNotifyInternal.c)
 * Callees:
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A0D8 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

void __stdcall NdisFDevicePnPEventNotify(NDIS_HANDLE NdisFilterHandle, PNET_DEVICE_PNP_EVENT NetDevicePnPEvent)
{
  KIRQL v4; // bp
  unsigned __int8 *NdisReserved; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v7[7]; // [rsp+48h] [rbp-40h] BYREF

  v7[1] = NdisFilterHandle;
  v7[3] = NetDevicePnPEvent;
  if ( KeExpandKernelStackAndCalloutEx(ndisFDevicePnPEventNotifyInternal, v7, 0x4CCCuLL, 0, 0LL) < 0 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
    *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
    NdisReserved = (unsigned __int8 *)NdisFilterHandle + 272;
    *((_DWORD *)NdisFilterHandle + 40) = 2101480;
    if ( *((_QWORD *)NdisFilterHandle + 34) )
    {
      NdisReserved = NetDevicePnPEvent->NdisReserved;
      while ( *(_QWORD *)NetDevicePnPEvent->NdisReserved )
        ;
    }
    *(_QWORD *)NdisReserved = NetDevicePnPEvent;
    *(_QWORD *)NetDevicePnPEvent->NdisReserved = 0LL;
    *(_QWORD *)&NetDevicePnPEvent->NdisReserved[8] = &Event;
    ndisQueueStackExpansionFallbackWorkItem(NdisFilterHandle);
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    *((_DWORD *)NdisFilterHandle + 40) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v4);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
}
