/*
 * XREFs of ndisMiniportXStateClearFlag @ 0x1C001DBC4
 * Callers:
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001DA70 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisMRestoreOpenHandlers @ 0x1C001F9A8 (ndisMRestoreOpenHandlers.c)
 * Callees:
 *     ndisUpdateMiniportFakeStatus @ 0x1C001DBF8 (ndisUpdateMiniportFakeStatus.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

char __fastcall ndisMiniportXStateClearFlag(__int64 a1, char a2)
{
  unsigned __int8 v2; // dl
  bool v3; // zf

  v2 = ~a2;
  v3 = (v2 & *(_BYTE *)(a1 + 930)) == 0;
  *(_BYTE *)(a1 + 930) &= v2;
  if ( v3 )
  {
    if ( (unsigned __int8)byte_1C0098754 >= 4u )
      WPP_SF_q(75LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
    return 1;
  }
  else
  {
    ndisUpdateMiniportFakeStatus(a1);
    return 0;
  }
}
