/*
 * XREFs of ndisSetMiniportReenumerateHandlers @ 0x1C00EE588
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C00C79F0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisSetMiniportReenumerateHandlers(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // r9

  if ( *(_BYTE *)a1 != 2 )
    return 3221225659LL;
  v2 = *(_BYTE *)(a1 + 24);
  if ( v2 <= 6u && (v2 != 6 || *(_BYTE *)(a1 + 25) < 0x28u) )
    return 3221225659LL;
  if ( !*(_BYTE *)(a2 + 1) )
    return 3221225485LL;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return 3221225485LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 864) = v3;
  *(_QWORD *)(a1 + 872) = *(_QWORD *)(a2 + 16);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qq(0x41u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a1);
  return 0LL;
}
