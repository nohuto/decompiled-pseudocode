/*
 * XREFs of ?ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z @ 0x1C00AD848
 * Callers:
 *     ndisUpdatePMCurrentCapabilities @ 0x1C0002ACC (ndisUpdatePMCurrentCapabilities.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisConvertPMCapabilitiesToPnp(struct _NDIS_PM_CAPABILITIES *a1, struct _NDIS_PNP_CAPABILITIES *a2)
{
  _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp; // eax
  unsigned int Flags; // eax

  *(_QWORD *)&a2->Flags = 0LL;
  *(_QWORD *)&a2->WakeUpCapabilities.MinPatternWakeUp = 0LL;
  a2->WakeUpCapabilities.MinMagicPacketWakeUp = a1->MinMagicPacketWakeUp;
  a2->WakeUpCapabilities.MinPatternWakeUp = a1->MinPatternWakeUp;
  MinLinkChangeWakeUp = a1->MinLinkChangeWakeUp;
  a2->Flags = 0;
  a2->WakeUpCapabilities.MinLinkChangeWakeUp = MinLinkChangeWakeUp;
  Flags = a2->Flags;
  if ( (a1->SupportedWoLPacketPatterns & 2) != 0 )
    Flags = 4;
  a2->Flags = Flags;
  if ( (a1->SupportedWoLPacketPatterns & 1) != 0 )
    a2->Flags |= 2u;
  if ( a2->Flags )
    a2->Flags |= 1u;
}
