/*
 * XREFs of NdisFDeregisterFilterDriver @ 0x1C0058880
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceFilterDriver @ 0x1C00044D4 (ndisDereferenceFilterDriver.c)
 *     ndisCloseRef @ 0x1C001E794 (ndisCloseRef.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00C7FF4 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __stdcall NdisFDeregisterFilterDriver(NDIS_HANDLE NdisFilterDriverHandle)
{
  enum CallRunMode v2; // r8d

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x17u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, (__int64)NdisFilterDriverHandle);
  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  NDIS_BIND_FILTER_DRIVER::SetRunningDriver(*((NDIS_BIND_FILTER_DRIVER **)NdisFilterDriverHandle + 60), 0LL, v2);
  if ( ndisCloseRef((PKSPIN_LOCK)NdisFilterDriverHandle + 9) )
    ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)NdisFilterDriverHandle);
  KeReleaseMutex(&ndisPnPMutex, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x18u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, (__int64)NdisFilterDriverHandle);
}
