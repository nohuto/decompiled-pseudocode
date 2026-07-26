/*
 * XREFs of ndisOidPreEthMulticastList @ 0x1C00C2890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqqq @ 0x1C0042F94 (WPP_SF_qqqq.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00C27C8 (ndisSetMiniportEthMulticastList.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00C2958 (ndisSetOpenEthMulticastList.c)
 *     ndisQueryMiniportEthMulticastList @ 0x1C00DD718 (ndisQueryMiniportEthMulticastList.c)
 *     ndisQueryOpenEthMulticastList @ 0x1C00DD7F0 (ndisQueryOpenEthMulticastList.c)
 *     ndisSetRestoreMulticastList @ 0x1C00DD954 (ndisSetRestoreMulticastList.c)
 */

unsigned __int8 __fastcall ndisOidPreEthMulticastList(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  unsigned __int8 v4; // si
  __int64 v5; // rbp
  int v6; // eax
  int OpenEthMulticastList; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h]
  __int64 v12; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqqq(0x7Du, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v5, v3, v1, a1);
  v6 = *(_DWORD *)(v1 + 4);
  if ( v6 == 2 )
  {
    if ( *(_QWORD *)a1 )
      goto LABEL_22;
    if ( *(_QWORD *)(a1 + 16) )
      goto LABEL_10;
  }
  if ( !v6 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      OpenEthMulticastList = ndisQueryOpenEthMulticastList(v3);
LABEL_19:
      *(_DWORD *)(a1 + 40) = OpenEthMulticastList;
      v4 = 1;
      goto LABEL_10;
    }
    if ( !*(_QWORD *)a1 )
      goto LABEL_10;
LABEL_22:
    OpenEthMulticastList = ndisQueryMiniportEthMulticastList(v5, v1);
    goto LABEL_19;
  }
  if ( v6 == 1 )
  {
    if ( !v3 || (v4 = ndisSetOpenEthMulticastList(v3, v1, a1 + 40), v4 != 1) )
    {
      if ( *(_UNKNOWN **)(v1 + 104) == &ndisIntReqRestore )
      {
        v9 = *(_QWORD *)(a1 + 16);
        v10 = v5;
        if ( v9 )
          v10 = *(_QWORD *)(v9 + 32);
        ndisSetRestoreMulticastList(v10, v1);
      }
      if ( v5 )
        v4 = ndisSetMiniportEthMulticastList(v5, v1, (int *)(a1 + 40));
    }
  }
LABEL_10:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v12) = *(_DWORD *)(a1 + 40);
    LODWORD(v11) = v4;
    WPP_SF_qqDD(0x7Eu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v5, v3, v11, v12);
  }
  return v4;
}
