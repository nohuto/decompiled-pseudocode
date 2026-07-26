/*
 * XREFs of ndisFilterIndicateWoLPatternReject @ 0x1C0048B2C
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0005B84 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusInternal @ 0x1C00064EC (ndisFIndicateStatusInternal.c)
 * Callees:
 *     ndisDeletePatternEntry @ 0x1C000251C (ndisDeletePatternEntry.c)
 */

char __fastcall ndisFilterIndicateWoLPatternReject(__int64 a1, __int64 a2)
{
  char v3; // di

  v3 = 1;
  if ( *(_DWORD *)(a2 + 56) >= 4u )
  {
    if ( *(_DWORD *)(a2 + 96) )
    {
      if ( ndisDeletePatternEntry((_DWORD *)(a1 + 864), **(_DWORD **)(a2 + 48)) )
        --*(_DWORD *)(a2 + 96);
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
