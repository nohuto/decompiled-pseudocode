/*
 * XREFs of ndisMiniportXStateClearFlag @ 0x1C0016708
 * Callers:
 *     ndisMRestoreOpenHandlers @ 0x1C000F7E0 (ndisMRestoreOpenHandlers.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001673C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 * Callees:
 *     ndisUpdateMiniportFakeStatus @ 0x1C00166BC (ndisUpdateMiniportFakeStatus.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
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
    if ( (unsigned __int8)byte_1C0099614 >= 4u )
      WPP_SF_q(75LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
    return 1;
  }
  else
  {
    ndisUpdateMiniportFakeStatus(a1);
    return 0;
  }
}
