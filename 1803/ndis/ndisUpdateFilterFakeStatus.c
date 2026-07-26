/*
 * XREFs of ndisUpdateFilterFakeStatus @ 0x1C0024238
 * Callers:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C000FDEC (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001673C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0019370 (ndisIndicateInitialStateToFilter.c)
 *     ndisFilterXStateSetFlag @ 0x1C002421C (ndisFilterXStateSetFlag.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
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
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    return WPP_SF_qdD(73LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, v2, v4);
  return result;
}
