/*
 * XREFs of ndisPnPIrpQueryRemove @ 0x1C00AC23C
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C0CB0 (ndisPnPDispatch.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     WPP_SF_qZ @ 0x1C00485F8 (WPP_SF_qZ.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00AC300 (ndisPnPQueryRemoveDevice.c)
 *     ndisPowerSaveStop @ 0x1C00C61B0 (ndisPowerSaveStop.c)
 */

__int64 __fastcall ndisPnPIrpQueryRemove(__int64 a1, __int64 a2, __int64 a3, __int64 a4, bool *a5)
{
  int v7; // edi

  v7 = -1073741823;
  if ( (unsigned __int8)byte_1C0098750 >= 4u )
    WPP_SF_qZ(0x23u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, a2, *(const wchar_t **)(a2 + 3880));
  ndisLogMiniportEvent(a2, 0x21u);
  if ( !*(_DWORD *)(a2 + 3472) )
  {
    ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a2);
    KeWaitForSingleObject((PVOID)(a2 + 4248), Executive, 0, 0, 0LL);
    if ( (*(_DWORD *)(a2 + 124) & 0x100) != 0 )
      v7 = -1073740537;
    else
      v7 = ndisPnPQueryRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)a2);
    if ( v7 >= 0 )
    {
      *(_DWORD *)(a2 + 1524) = *(_DWORD *)(a2 + 1520);
      *(_DWORD *)(a2 + 1520) = 4;
    }
  }
  *(_DWORD *)(a3 + 48) = v7;
  *a5 = v7 >= 0;
  return (unsigned int)v7;
}
