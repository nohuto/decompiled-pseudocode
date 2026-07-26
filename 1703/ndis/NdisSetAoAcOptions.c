/*
 * XREFs of NdisSetAoAcOptions @ 0x1C00EAAB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 */

__int64 __fastcall NdisSetAoAcOptions(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  char v5; // r8
  int v7; // eax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v2 + 4488);
  v5 = byte_1C0092615;
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
  {
    WPP_SF_qD(0x2Bu, &WPP_d5f9bd1644a2353086e1469436a05243_Traceguids, a1, a2);
    v5 = byte_1C0092615;
  }
  if ( *(_QWORD *)(v2 + 4488) )
  {
    v7 = ndisNicQuietDerefExtendedTimeout;
    if ( (a2 & 1) == 0 )
      v7 = ndisNicQuietDerefDefaultTimeout;
    *(_DWORD *)(v4 + 276) = v7;
    if ( (unsigned __int8)v5 >= 4u )
      WPP_SF_d(0x2Du, &WPP_d5f9bd1644a2353086e1469436a05243_Traceguids, v7);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)v5 >= 3u )
      WPP_SF_(0x2Cu, &WPP_d5f9bd1644a2353086e1469436a05243_Traceguids);
    return 3221225659LL;
  }
}
