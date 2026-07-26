/*
 * XREFs of ndisPnPIrpQueryStop @ 0x1C00EE078
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C6470 (ndisPnPDispatch.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     ndisPowerSaveStop @ 0x1C00B11E8 (ndisPowerSaveStop.c)
 *     ndisPnPQueryStopDevice @ 0x1C010F4F0 (ndisPnPQueryStopDevice.c)
 */

__int64 __fastcall ndisPnPIrpQueryStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4, bool *a5)
{
  int v7; // edx

  if ( (unsigned __int8)byte_1C0099610 >= 4u )
    WPP_SF_qZ(0x2Au, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a2, *(const wchar_t **)(a2 + 3880));
  ndisLogMiniportEvent(a2, 0x25u);
  if ( *(_DWORD *)(a2 + 3472) )
  {
    v7 = -1073741823;
  }
  else
  {
    ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a2, 4);
    *(_DWORD *)(a2 + 1524) = *(_DWORD *)(a2 + 1520);
    *(_DWORD *)(a2 + 1520) = 2;
    v7 = ndisPnPQueryStopDevice((struct _NDIS_MINIPORT_BLOCK *)a2);
  }
  *(_DWORD *)(a3 + 48) = v7;
  *a5 = v7 >= 0;
  return (unsigned int)v7;
}
