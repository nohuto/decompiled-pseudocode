/*
 * XREFs of ndisSetSystemPowerNotificationHandlers @ 0x1C00EC08C
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C00C3DF0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisSetSystemPowerNotificationHandlers(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // r9

  if ( *(_BYTE *)a1 != 2 )
    return 3221225659LL;
  v2 = *(_BYTE *)(a1 + 24);
  if ( v2 <= 6u && (v2 != 6 || *(_BYTE *)(a1 + 25) < 0x1Eu) )
    return 3221225659LL;
  if ( *(_BYTE *)(a2 + 1) != 1 )
    return 3221225485LL;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return 3221225485LL;
  if ( *(_DWORD *)(a2 + 4) )
    return 3221225485LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 832) = v3;
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_qq(0xAu, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1);
  return 0LL;
}
