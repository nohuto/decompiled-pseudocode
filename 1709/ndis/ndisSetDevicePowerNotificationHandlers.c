/*
 * XREFs of ndisSetDevicePowerNotificationHandlers @ 0x1C00EBFF8
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C00C3DF0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetDevicePowerNotificationHandlers(__int64 a1, __int64 a2)
{
  __int64 v5; // rax

  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(0x9Au, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1);
  if ( *(_BYTE *)a1 != 2 )
    return 3221225659LL;
  if ( *(_BYTE *)(a2 + 1) != 1 )
    return 3221225485LL;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return 3221225485LL;
  if ( *(_DWORD *)(a2 + 4) )
    return 3221225485LL;
  v5 = *(_QWORD *)(a2 + 8);
  if ( !v5 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 856) = v5;
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(0x9Bu, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1);
  return 0LL;
}
