/*
 * XREFs of ndisSetMiniportReenumerateHandlers @ 0x1C00EB9D8
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C00C3DF0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisSetMiniportReenumerateHandlers(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rax

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
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qq(0x41u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, a1, *(_QWORD *)(a1 + 864));
  return 0LL;
}
