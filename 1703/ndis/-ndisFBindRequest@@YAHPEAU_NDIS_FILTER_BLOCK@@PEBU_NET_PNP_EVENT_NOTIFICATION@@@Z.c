/*
 * XREFs of ?ndisFBindRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00589A0
 * Callers:
 *     ndisFNetPnPEventInternal @ 0x1C00BBFA0 (ndisFNetPnPEventInternal.c)
 * Callees:
 *     ndisBindRequest @ 0x1C0064564 (ndisBindRequest.c)
 */

__int64 __fastcall ndisFBindRequest(struct _NDIS_FILTER_BLOCK *a1, const struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  unsigned __int8 MajorNdisVersion; // r8

  FilterDriver = a1->FilterDriver;
  MajorNdisVersion = FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion;
  if ( MajorNdisVersion > 6u
    || MajorNdisVersion == 6 && FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion >= 0x32u )
  {
    ndisBindRequest((ULONG_PTR)a1, &a1->Miniport->BindEngine, &a1->Bind->BindState, (ULONG_PTR)a2);
  }
  return 0LL;
}
