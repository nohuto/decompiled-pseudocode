/*
 * XREFs of ndisSetDevicePowerNotificationHandlers @ 0x1C00E2138
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C00B76D0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetDevicePowerNotificationHandlers(__int64 a1, __int64 a2)
{
  char v4; // al
  __int64 v6; // rcx

  v4 = byte_1C0092615;
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
  {
    WPP_SF_q(0x9Au, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a1);
    v4 = byte_1C0092615;
  }
  if ( *(_BYTE *)a1 != 2 )
    return 3221225659LL;
  if ( *(_BYTE *)(a2 + 1) != 1 )
    return 3221225485LL;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return 3221225485LL;
  if ( *(_DWORD *)(a2 + 4) )
    return 3221225485LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( !v6 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 856) = v6;
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_q(0x9Bu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a1);
  return 0LL;
}
