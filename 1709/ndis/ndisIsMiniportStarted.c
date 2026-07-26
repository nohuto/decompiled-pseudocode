/*
 * XREFs of ndisIsMiniportStarted @ 0x1C0008960
 * Callers:
 *     ndisSetDevicePower @ 0x1C001FA4C (ndisSetDevicePower.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00AA814 (ndisPnPRemoveDeviceEx.c)
 *     ndisPnPCompleteRemoveDevice @ 0x1C00AA8A0 (ndisPnPCompleteRemoveDevice.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5960 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00C4168 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00E3E00 (NdisIMInitializeDeviceInstanceEx.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00E94A0 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EB574 (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00EB720 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00EBA58 (ndisWdfPostReleaseHardware.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00F4134 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FE008 (ndisPnPIrpRemoveDevice.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C01058B0 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C0105B58 (ndisQueryPower.c)
 *     ndisMPowerPolicy @ 0x1C0105D94 (ndisMPowerPolicy.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 */

bool __fastcall ndisIsMiniportStarted(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  unsigned int v4; // esi
  KIRQL v5; // r15
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rbp

  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(103LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  ndisReferencePackage(&ndisPkgs);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  i = ndisMiniportList;
  v4 = 0;
  v5 = v2;
  if ( ndisMiniportList )
  {
    do
    {
      if ( i == a1 )
        break;
      i = i->NextGlobalMiniport;
    }
    while ( i );
    if ( i )
    {
      DriverHandle = a1->DriverHandle;
      i = 0LL;
      if ( DriverHandle )
      {
        KeAcquireSpinLockAtDpcLevel(&DriverHandle->Ref.SpinLock);
        for ( i = DriverHandle->MiniportQueue; i && i != a1; i = i->NextMiniport )
          ;
        KeReleaseSpinLockFromDpcLevel(&DriverHandle->Ref.SpinLock);
      }
    }
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v5);
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
  {
    LOBYTE(v4) = i == a1;
    WPP_SF_qD(104LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v4);
  }
  return i == a1;
}
