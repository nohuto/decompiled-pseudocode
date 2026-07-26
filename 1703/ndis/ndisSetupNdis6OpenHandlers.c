/*
 * XREFs of ndisSetupNdis6OpenHandlers @ 0x1C001A4D4
 * Callers:
 *     ndisSetMiniportHandlers @ 0x1C00F6108 (ndisSetMiniportHandlers.c)
 *     ndisMOpenAdapter @ 0x1C00F7CE4 (ndisMOpenAdapter.c)
 * Callees:
 *     ndisSetupLwfMiniportHandlers @ 0x1C001A544 (ndisSetupLwfMiniportHandlers.c)
 *     ndisSetupMiniportProtocolHandlers @ 0x1C001ACD4 (ndisSetupMiniportProtocolHandlers.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     WPP_SF_qqqDD @ 0x1C0045D28 (WPP_SF_qqqDD.c)
 */

__int64 __fastcall ndisSetupNdis6OpenHandlers(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_qqqDD(
      138LL,
      &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids,
      a2,
      a3,
      a1,
      *(_BYTE *)(a2 + 56) >= 6u,
      *(_BYTE *)(a3 + 32) >= 6u);
  result = ndisSetupMiniportProtocolHandlers(a1, a2, a3);
  if ( *(_QWORD *)(a3 + 2056) )
    result = ndisSetupLwfMiniportHandlers(a3);
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    return WPP_SF_qqq(139LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, a3, a1);
  return result;
}
