/*
 * XREFs of ndisUpdateMiniportFakeStatus @ 0x1C001DBF8
 * Callers:
 *     ndisMSwapOpenHandlers @ 0x1C0010ACC (ndisMSwapOpenHandlers.c)
 *     ndisMiniportXStateClearFlag @ 0x1C001DBC4 (ndisMiniportXStateClearFlag.c)
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C001ED7C (ndisSwapFilterHandlersForMediaDisconnect.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
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
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    return WPP_SF_qdD(74LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1, v1, result);
  return result;
}
