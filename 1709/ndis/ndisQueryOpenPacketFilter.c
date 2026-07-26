/*
 * XREFs of ndisQueryOpenPacketFilter @ 0x1C00DD874
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C00BE170 (ndisOidPrePacketFilter.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisQueryOpenPacketFilter(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v5; // esi
  int v7; // eax
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x58u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2);
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    v7 = *(_DWORD *)(v2 + 464);
    if ( !v7 || v7 == 16 )
      v5 = *(_DWORD *)(a1 + 432);
    **(_DWORD **)(a2 + 40) = v5;
    *(_DWORD *)(a2 + 52) = 4;
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
    {
      v9 = 0;
      WPP_SF_qqd(0x5Au, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, v9);
    }
    return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 56) = 4;
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
    {
      v8 = -1073676268;
      WPP_SF_qqd(0x59u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, v8);
    }
    return 3221291028LL;
  }
}
