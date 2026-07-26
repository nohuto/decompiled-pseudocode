/*
 * XREFs of ndisFilterIndicatePMOffloadReject @ 0x1C0049EE8
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisDeletePatternEntry @ 0x1C0014950 (ndisDeletePatternEntry.c)
 */

char __fastcall ndisFilterIndicatePMOffloadReject(__int64 a1, __int64 a2)
{
  char v3; // di

  v3 = 1;
  if ( *(_DWORD *)(a2 + 56) >= 4u )
  {
    if ( *(_DWORD *)(a2 + 96) )
    {
      if ( ndisDeletePatternEntry((void **)(a1 + 872), **(_DWORD **)(a2 + 48)) )
        --*(_DWORD *)(a2 + 96);
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
