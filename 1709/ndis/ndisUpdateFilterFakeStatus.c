/*
 * XREFs of ndisUpdateFilterFakeStatus @ 0x1C001E108
 * Callers:
 *     ndisIndicateInitialStateToFilter @ 0x1C0005230 (ndisIndicateInitialStateToFilter.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001DA70 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisFilterXStateSetFlag @ 0x1C001E0EC (ndisFilterXStateSetFlag.c)
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C001ED7C (ndisSwapFilterHandlersForMediaDisconnect.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
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
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    return WPP_SF_qdD(73LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1, v2, v4);
  return result;
}
