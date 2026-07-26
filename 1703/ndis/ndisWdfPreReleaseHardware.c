/*
 * XREFs of ndisWdfPreReleaseHardware @ 0x1C00E1C80
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00DFED0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0015BF0 (ndisLogMiniportEvent.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001C6A4 (ndisReferenceMiniportNoCheck.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C0025B2C (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisPowerSaveStop @ 0x1C00BE7BC (ndisPowerSaveStop.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00BE914 (ndisPnPRemoveDeviceEx.c)
 *     ndisWakeUpDevice @ 0x1C00D7B74 (ndisWakeUpDevice.c)
 */

__int64 __fastcall ndisWdfPreReleaseHardware(struct _TlgProvider_t *a1)
{
  unsigned int v1; // edi
  bool v3; // zf

  v1 = 0;
  ndisLogMiniportEvent((__int64)a1, 0x23u);
  if ( ((__int64)a1[1].AnnotationFunc & 4) == 0 )
  {
    NdisTraceLoggingDeviceRemoved(a1);
    ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a1, 2);
    KeWaitForSingleObject(&a1[66].KeywordAll, Executive, 0, 0, 0LL);
    if ( (HIDWORD(a1[1].AnnotationFunc) & 0x100) == 0 && SHIDWORD(a1[60].CallbackContext) > 1 )
      v1 = ndisWakeUpDevice((__int64)a1);
  }
  ndisReferenceMiniportNoCheck((__int64)a1, 0x1Eu);
  v3 = LODWORD(a1[23].CallbackContext) == 5;
  HIDWORD(a1[23].CallbackContext) = 1;
  if ( !v3 )
    ndisPnPRemoveDeviceEx((struct _NDIS_MINIPORT_BLOCK *)a1);
  return v1;
}
