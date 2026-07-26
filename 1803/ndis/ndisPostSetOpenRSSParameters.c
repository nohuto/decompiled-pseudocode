/*
 * XREFs of ndisPostSetOpenRSSParameters @ 0x1C0015348
 * Callers:
 *     ndisOidPostRSSParameters @ 0x1C00152B0 (ndisOidPostRSSParameters.c)
 * Callees:
 *     ndisPostSetOpenRSSParametersHelper @ 0x1C00153E4 (ndisPostSetOpenRSSParametersHelper.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisPostSetOpenRSSParameters(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    result = WPP_SF_qqd(178LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2, a3);
  if ( (*(_DWORD *)(a2 + 88) & 0x800) != 0 )
  {
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(v3 + 528);
    result = *(unsigned __int16 *)(v3 + 536);
    *(_DWORD *)(a2 + 48) = result;
    *(_QWORD *)(v3 + 528) = 0LL;
    *(_WORD *)(v3 + 536) = 0;
    *(_DWORD *)(a2 + 88) &= ~0x800u;
  }
  if ( !a3 )
    result = ndisPostSetOpenRSSParametersHelper(v3, a1, *(_QWORD *)(a2 + 40));
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    return WPP_SF_qqqL(179LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, a1, a2, a3);
  return result;
}
