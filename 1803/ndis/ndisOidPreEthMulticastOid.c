/*
 * XREFs of ndisOidPreEthMulticastOid @ 0x1C00CB070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqqq @ 0x1C0044080 (WPP_SF_qqqq.c)
 *     WPP_SF_qqqqD @ 0x1C00440DC (WPP_SF_qqqqD.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00C48DC (ndisSetMiniportEthMulticastList.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00CB110 (ndisSetOpenEthAddDeleteMulticast.c)
 */

unsigned __int8 __fastcall ndisOidPreEthMulticastOid(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r15
  unsigned __int8 v5; // di
  __int64 v6; // rbp
  int v8; // [rsp+30h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqqq(0x6Cu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v6, v4, v2, a1);
  if ( *(_DWORD *)(v2 + 4) == 1 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      v5 = ndisSetOpenEthAddDeleteMulticast(v4, v2, a1 + 40);
      if ( v5 != 1 && v6 && *(_DWORD *)(v2 + 32) == 16843011 )
        v5 = ndisSetMiniportEthMulticastList(v6, v2, (int *)(a1 + 40));
    }
    else
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v8 = v5;
    WPP_SF_qqqqD(a1, a2, v6, v4, *(_QWORD *)(a1 + 32), a1, v8);
  }
  return v5;
}
