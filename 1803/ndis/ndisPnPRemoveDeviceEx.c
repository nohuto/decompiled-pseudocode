/*
 * XREFs of ndisPnPRemoveDeviceEx @ 0x1C00B1DD0
 * Callers:
 *     ndisPnPIrpRemoveDevice @ 0x1C00B1B84 (ndisPnPIrpRemoveDevice.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00EBB10 (NdisLWMUninitializeNetworkInterface.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00EE3E8 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00EE6D8 (ndisWdfPreReleaseHardware.c)
 * Callees:
 *     ndisIsMiniportStarted @ 0x1C001AB20 (ndisIsMiniportStarted.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 */

void __fastcall ndisPnPRemoveDeviceEx(struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle)
{
  unsigned int v2; // eax
  bool v3; // zf
  int v4; // eax
  _DEVICE_OBJECT *InputBuffer; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+38h] [rbp-10h]

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x1Fu, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (__int64)MiniportAdapterHandle);
  v2 = MiniportAdapterHandle->PnPFlags & 0xFFFEFFFF;
  MiniportAdapterHandle->PnPDeviceState = NdisPnPDeviceRemoved;
  MiniportAdapterHandle->PnPFlags = v2 | 0x10;
  if ( ndisIsMiniportStarted(MiniportAdapterHandle)
    && ((MiniportAdapterHandle->PnPFlags & 0x200000) != 0 && ndisAoAcCapable
     || (MiniportAdapterHandle->FilterPnPFlags & 0x200) != 0)
    && MiniportAdapterHandle->PhysicalMediumType == NdisPhysicalMedium802_3 )
  {
    v3 = MiniportAdapterHandle->PMHardwareCapabilities.Header.Revision == 2;
    v6 = 0LL;
    InputBuffer = MiniportAdapterHandle->PhysicalDeviceObject;
    LODWORD(v6) = 4;
    if ( !v3
      || (MiniportAdapterHandle->PMHardwareCapabilities.SupportedWoLPacketPatterns & 1) == 0
      || MiniportAdapterHandle->PMHardwareCapabilities.NumTotalWoLPatterns < 0x10
      || MiniportAdapterHandle->PMHardwareCapabilities.MaxWoLPatternSize < 0x4A
      || (unsigned int)(MiniportAdapterHandle->PMHardwareCapabilities.MinPatternWakeUp - 3) > 1
      || (MiniportAdapterHandle->PMHardwareCapabilities.SupportedWakeUpEvents & 1) == 0
      || (v4 = MiniportAdapterHandle->PMHardwareCapabilities.SupportedProtocolOffloads & 3, BYTE5(v6) = 1,
                                                                                            (_BYTE)v4 != 3) )
    {
      BYTE5(v6) = 0;
    }
    ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
  }
  ndisPnPRemoveDevice(MiniportAdapterHandle);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x20u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (__int64)MiniportAdapterHandle);
}
