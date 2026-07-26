/*
 * XREFs of ndisUpdateMiniportFakeStatus @ 0x1C00166BC
 * Callers:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C000FDEC (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisMiniportXStateClearFlag @ 0x1C0016708 (ndisMiniportXStateClearFlag.c)
 *     ndisMSwapOpenHandlers @ 0x1C001CD1C (ndisMSwapOpenHandlers.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 */

__int64 __fastcall ndisUpdateMiniportFakeStatus(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 930);
  result = 3221225473LL;
  if ( (v1 & 4) != 0 )
  {
    result = 3223519279LL;
  }
  else if ( (v1 & 2) != 0 )
  {
    result = 3223519263LL;
  }
  else if ( (v1 & 1) != 0 )
  {
    result = 3221291021LL;
  }
  *(_DWORD *)(a1 + 540) = result;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    return WPP_SF_qdD(74LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, v1, result);
  return result;
}
