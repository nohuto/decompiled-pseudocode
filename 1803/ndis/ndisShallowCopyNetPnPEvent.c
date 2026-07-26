/*
 * XREFs of ndisShallowCopyNetPnPEvent @ 0x1C00B8A90
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B0E0C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00B0F20 (ndisFNetPnPEventInternal.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C00B101C (ndisFForwardNetPnPEventToFilter.c)
 *     NdisMNetPnPEvent @ 0x1C00EDAB0 (NdisMNetPnPEvent.c)
 *     ndisPnPNotifyBinding @ 0x1C0103560 (ndisPnPNotifyBinding.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisShallowCopyNetPnPEvent(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax

  *(_BYTE *)a1 = *(_BYTE *)a2;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a2 + 1);
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 2);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  if ( *(_BYTE *)(a2 + 1) >= 2u && *(_WORD *)(a2 + 2) >= 0xACu || (*(_DWORD *)(a2 + 160) & 4) != 0 )
  {
    *(_DWORD *)(a1 + 168) = *(_DWORD *)(a2 + 168);
    v2 = *(_DWORD *)(a2 + 164);
  }
  else
  {
    v2 = 0;
    *(_DWORD *)(a1 + 168) = 0;
  }
  *(_DWORD *)(a1 + 164) = v2;
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 160);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 136);
  result = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 152) = result;
  return result;
}
