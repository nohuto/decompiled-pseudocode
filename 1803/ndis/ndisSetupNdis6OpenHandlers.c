/*
 * XREFs of ndisSetupNdis6OpenHandlers @ 0x1C001AFD0
 * Callers:
 *     ndisMOpenAdapter @ 0x1C01048C0 (ndisMOpenAdapter.c)
 *     ndisSetMiniportHandlers @ 0x1C0104E18 (ndisSetMiniportHandlers.c)
 * Callees:
 *     ndisSetupLwfMiniportHandlers @ 0x1C001B040 (ndisSetupLwfMiniportHandlers.c)
 *     ndisSetupMiniportProtocolHandlers @ 0x1C001B794 (ndisSetupMiniportProtocolHandlers.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     WPP_SF_qqqDD @ 0x1C0044014 (WPP_SF_qqqDD.c)
 */

__int64 __fastcall ndisSetupNdis6OpenHandlers(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_qqqDD(
      148LL,
      &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids,
      a2,
      a3,
      a1,
      *(_BYTE *)(a2 + 56) >= 6u,
      *(_BYTE *)(a3 + 32) >= 6u);
  result = ndisSetupMiniportProtocolHandlers(a1, a2, a3);
  if ( *(_QWORD *)(a3 + 2056) )
    result = ndisSetupLwfMiniportHandlers(a3);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    return WPP_SF_qqq(149LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, a3, a1);
  return result;
}
