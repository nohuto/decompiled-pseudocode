/*
 * XREFs of ndisSetupNdis6OpenHandlers @ 0x1C000F77C
 * Callers:
 *     ndisMOpenAdapter @ 0x1C01033B8 (ndisMOpenAdapter.c)
 *     ndisSetMiniportHandlers @ 0x1C010390C (ndisSetMiniportHandlers.c)
 * Callees:
 *     ndisSetupLwfMiniportHandlers @ 0x1C000F7EC (ndisSetupLwfMiniportHandlers.c)
 *     ndisSetupMiniportProtocolHandlers @ 0x1C000FF7C (ndisSetupMiniportProtocolHandlers.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqDD @ 0x1C0042EC8 (WPP_SF_qqqDD.c)
 */

__int64 __fastcall ndisSetupNdis6OpenHandlers(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_qqqDD(
      145LL,
      &WPP_89f39f5878d93d725c4978a535989123_Traceguids,
      a2,
      a3,
      a1,
      *(_BYTE *)(a2 + 56) >= 6u,
      *(_BYTE *)(a3 + 32) >= 6u);
  result = ndisSetupMiniportProtocolHandlers(a1, a2, a3);
  if ( *(_QWORD *)(a3 + 2056) )
    result = ndisSetupLwfMiniportHandlers(a3);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    return WPP_SF_qqq(146LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, a3, a1);
  return result;
}
