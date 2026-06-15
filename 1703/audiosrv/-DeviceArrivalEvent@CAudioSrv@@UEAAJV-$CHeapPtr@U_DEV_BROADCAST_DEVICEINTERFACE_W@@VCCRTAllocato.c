/*
 * XREFs of ?DeviceArrivalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x180080A30
 * Callers:
 *     <none>
 * Callees:
 *     ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x1800C16D4 (-KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CAudioSrv::DeviceArrivalEvent(__int64 a1, void **a2)
{
  __int64 v3; // rcx
  BOOL v4; // ebx

  if ( (unsigned int)IsMmeAudioInterfaceArrivalSupported(a1) )
  {
    RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
    _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoShared + 1, 1u);
    _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoActual + 1, 1u);
    RtlReleaseResource(&PnpInfoResource);
  }
  v4 = (int)FlushDeviceTopologyCache(v3) < 0;
  KsNotifications_AudioInterfaceArrival((const unsigned __int16 *)*a2 + 14);
  free(*a2);
  *a2 = 0LL;
  return v4;
}
