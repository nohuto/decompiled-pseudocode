/*
 * XREFs of ndisUpdateFilterFakeStatus @ 0x1C001CF74
 * Callers:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0012428 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0016FF0 (ndisIndicateInitialStateToFilter.c)
 *     ndisFilterXStateSetFlag @ 0x1C001CF60 (ndisFilterXStateSetFlag.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C00222B0 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 */

char __fastcall ndisUpdateFilterFakeStatus(__int64 a1)
{
  unsigned __int8 v2; // cl
  char result; // al
  int v4; // edx

  v2 = *(_BYTE *)(a1 + 384);
  result = -(v2 & 1);
  v4 = (v2 & 1) != 0 ? -1071448033 : -1073741823;
  *(_DWORD *)(a1 + 96) = v4;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    return WPP_SF_qdD(75LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1, v2, v4);
  return result;
}
