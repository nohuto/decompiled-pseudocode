/*
 * XREFs of NdisIMInitializeDeviceInstanceEx @ 0x1C00E3E00
 * Callers:
 *     NdisIMInitializeDeviceInstance @ 0x1C00E3DE0 (NdisIMInitializeDeviceInstance.c)
 * Callees:
 *     ndisIsMiniportStarted @ 0x1C0008960 (ndisIsMiniportStarted.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00E43B8 (ndisIMInitializeDeviceInstance_ea_1C00E43B8.c)
 *     ndisIMQueueDeviceInstance @ 0x1C00E44F4 (ndisIMQueueDeviceInstance.c)
 *     ndisMiniportFatalError @ 0x1C00EB0CC (ndisMiniportFatalError.c)
 *     ndisFindMiniportOnGlobalList @ 0x1C010D318 (ndisFindMiniportOnGlobalList.c)
 */

NDIS_STATUS __stdcall NdisIMInitializeDeviceInstanceEx(
        NDIS_HANDLE DriverHandle,
        PNDIS_STRING DriverInstance,
        NDIS_HANDLE DeviceContext)
{
  __int64 MiniportOnGlobalList; // rax
  struct _NDIS_MINIPORT_BLOCK *v7; // rdi
  NDIS_STATUS v8; // ebx
  NDIS_STATUS v10; // [rsp+28h] [rbp-20h]

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x1Fu, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, DriverHandle, DriverInstance, DeviceContext);
  ndisReferencePackage((__int64)&ndisPkgs);
  KeWaitForSingleObject((char *)DriverHandle + 416, Executive, 0, 0, 0LL);
  *((_QWORD *)DriverHandle + 59) = KeGetCurrentThread();
  MiniportOnGlobalList = ndisFindMiniportOnGlobalList(DriverInstance);
  v7 = (struct _NDIS_MINIPORT_BLOCK *)MiniportOnGlobalList;
  if ( MiniportOnGlobalList && (*(_DWORD *)(MiniportOnGlobalList + 124) & 0x14010) == 0x10000 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x20u, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, MiniportOnGlobalList);
    if ( ndisIsMiniportStarted(v7) )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_q(0x21u, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, (__int64)v7);
      v8 = 65539;
    }
    else
    {
      v8 = ndisIMInitializeDeviceInstance(v7);
      if ( v8 )
        ndisMiniportFatalError(v7, 72LL);
    }
  }
  else
  {
    v8 = ndisIMQueueDeviceInstance(DriverHandle, DriverInstance, DeviceContext);
  }
  *((_QWORD *)DriverHandle + 59) = 0LL;
  KeReleaseMutex((PRKMUTEX)((char *)DriverHandle + 416), 0);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v10 = v8;
    WPP_SF_qqqL(
      0x22u,
      &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids,
      DriverHandle,
      DriverInstance,
      DeviceContext,
      v10);
  }
  return v8;
}
