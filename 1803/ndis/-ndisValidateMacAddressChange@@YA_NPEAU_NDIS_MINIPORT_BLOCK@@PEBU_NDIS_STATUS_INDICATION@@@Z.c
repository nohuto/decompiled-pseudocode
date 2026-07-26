/*
 * XREFs of ?ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z @ 0x1C005E368
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisValidateMacAddressChange(struct _NDIS_MINIPORT_BLOCK *a1, const struct _NDIS_STATUS_INDICATION *a2)
{
  unsigned __int8 MajorNdisVersion; // al

  MajorNdisVersion = a1->MajorNdisVersion;
  return (MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x32u)
      && a2->Header.Type == 0x98
      && a2->Header.Revision
      && a2->Header.Size >= 0x70u
      && !a2->DestinationHandle
      && a2->SourceHandle == a1
      && !a2->PortNumber
      && a2->StatusBufferSize == 34
      && *(_WORD *)a2->StatusBuffer <= 0x20u;
}
