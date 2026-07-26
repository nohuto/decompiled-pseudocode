/*
 * XREFs of ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C00DD70C
 * Callers:
 *     ndisMSetGeneralAttributes @ 0x1C0014630 (ndisMSetGeneralAttributes.c)
 *     ndisGetMiniportInfo @ 0x1C00DDD7C (ndisGetMiniportInfo.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 */

void __fastcall ndisConvertPnpCapabilitiesToPM(struct _NDIS_PNP_CAPABILITIES *a1, struct _NDIS_PM_CAPABILITIES *a2)
{
  _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp; // eax
  unsigned int SupportedWoLPacketPatterns; // ecx
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // eax

  memset(a2, 0, sizeof(struct _NDIS_PM_CAPABILITIES));
  a2->Flags = 0;
  a2->Header = (_NDIS_OBJECT_HEADER)3932800;
  a2->MinMagicPacketWakeUp = a1->WakeUpCapabilities.MinMagicPacketWakeUp;
  a2->MinPatternWakeUp = a1->WakeUpCapabilities.MinPatternWakeUp;
  MinLinkChangeWakeUp = a1->WakeUpCapabilities.MinLinkChangeWakeUp;
  a2->SupportedWoLPacketPatterns = 0;
  SupportedWoLPacketPatterns = a2->SupportedWoLPacketPatterns;
  a2->MinLinkChangeWakeUp = MinLinkChangeWakeUp;
  MinMagicPacketWakeUp = a2->MinMagicPacketWakeUp;
  if ( (unsigned int)(a2->MinPatternWakeUp - 2) <= 2 )
    SupportedWoLPacketPatterns = 1;
  a2->SupportedWoLPacketPatterns = SupportedWoLPacketPatterns;
  if ( (unsigned int)(MinMagicPacketWakeUp - 2) <= 2 )
    a2->SupportedWoLPacketPatterns |= 2u;
}
