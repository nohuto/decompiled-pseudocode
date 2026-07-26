/*
 * XREFs of NdisMSleep @ 0x1C00C8450
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C000AE70 (ndisQuerySetMiniportEx.c)
 *     ndisMDoOidRequest @ 0x1C000DFB0 (ndisMDoOidRequest.c)
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0019370 (ndisIndicateInitialStateToFilter.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisMResetMiniportInternal @ 0x1C0061680 (ndisMResetMiniportInternal.c)
 *     ndisDispatchRequest @ 0x1C00AC650 (ndisDispatchRequest.c)
 *     ndisWmiExecuteMethod @ 0x1C00AC874 (ndisWmiExecuteMethod.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00AD358 (ndisWmiQuerySingleInstance.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisDeviceControlHandler @ 0x1C00AF99C (ndisDeviceControlHandler.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00B2910 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0101C04 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C0102134 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisMSleep(ULONG MicrosecondsToSleep)
{
  struct _KTIMER Timer; // [rsp+30h] [rbp-48h] BYREF

  KeInitializeTimerEx(&Timer, SynchronizationTimer);
  if ( MicrosecondsToSleep == -1 )
  {
    MicrosecondsToSleep = 0;
  }
  else if ( MicrosecondsToSleep > 0x1C9C380 )
  {
    MicrosecondsToSleep = 30000000;
  }
  KeSetTimer(&Timer, (LARGE_INTEGER)(-10LL * (int)MicrosecondsToSleep), 0LL);
  KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
}
