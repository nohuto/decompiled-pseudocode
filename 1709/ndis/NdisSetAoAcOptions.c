/*
 * XREFs of NdisSetAoAcOptions @ 0x1C00F4080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 */

__int64 __fastcall NdisSetAoAcOptions(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  int v6; // eax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v2 + 4488);
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_qD(0x2Du, &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids, a1, a2);
  if ( *(_QWORD *)(v2 + 4488) )
  {
    v6 = ndisNicQuietDerefExtendedTimeout;
    if ( (a2 & 1) == 0 )
      v6 = ndisNicQuietDerefDefaultTimeout;
    *(_DWORD *)(v4 + 276) = v6;
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_d(0x2Fu, &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids, v6);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0098755 >= 3u )
      WPP_SF_(0x2Eu, &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids);
    return 3221225659LL;
  }
}
