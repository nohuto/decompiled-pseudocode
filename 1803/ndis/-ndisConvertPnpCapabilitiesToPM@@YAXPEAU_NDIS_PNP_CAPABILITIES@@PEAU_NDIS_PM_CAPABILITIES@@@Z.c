/*
 * XREFs of ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C00E9070
 * Callers:
 *     ndisMSetGeneralAttributes @ 0x1C001690C (ndisMSetGeneralAttributes.c)
 *     ndisGetMiniportInfo @ 0x1C00E970C (ndisGetMiniportInfo.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 */

void __fastcall ndisConvertPnpCapabilitiesToPM(struct _NDIS_PNP_CAPABILITIES *a1, struct _NDIS_PM_CAPABILITIES *a2)
{
  int v4; // ecx
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // r8d
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // edx

  memset(a2, 0, sizeof(struct _NDIS_PM_CAPABILITIES));
  *(_QWORD *)&a2->Header.Type = 3932800LL;
  v4 = 0;
  MinMagicPacketWakeUp = a1->WakeUpCapabilities.MinMagicPacketWakeUp;
  a2->MinMagicPacketWakeUp = MinMagicPacketWakeUp;
  MinPatternWakeUp = a1->WakeUpCapabilities.MinPatternWakeUp;
  a2->MinPatternWakeUp = MinPatternWakeUp;
  a2->MinLinkChangeWakeUp = a1->WakeUpCapabilities.MinLinkChangeWakeUp;
  a2->SupportedWoLPacketPatterns = 0;
  if ( MinPatternWakeUp == NdisDeviceStateD1
    || MinPatternWakeUp == NdisDeviceStateD2
    || MinPatternWakeUp == NdisDeviceStateD3 )
  {
    v4 = 1;
    a2->SupportedWoLPacketPatterns = 1;
  }
  if ( (unsigned int)(MinMagicPacketWakeUp - 2) <= 2 )
    a2->SupportedWoLPacketPatterns = v4 | 2;
}
