/*
 * XREFs of NdisSetAoAcOptions @ 0x1C00F6C60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 */

__int64 __fastcall NdisSetAoAcOptions(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // rax
  int v7; // r8d

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v2 + 4488);
  v5 = v4;
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
  {
    WPP_SF_qD(0x2Eu, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, a1, a2);
    v5 = *(_QWORD *)(v2 + 4488);
  }
  if ( v5 )
  {
    v7 = ndisNicQuietDerefDefaultTimeout;
    if ( (a2 & 1) != 0 )
      v7 = ndisNicQuietDerefExtendedTimeout;
    *(_DWORD *)(v4 + 276) = v7;
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_d(0x30u, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, v7);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099615 >= 3u )
      WPP_SF_(0x2Fu, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids);
    return 3221225659LL;
  }
}
