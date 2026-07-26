/*
 * XREFs of ndisOidPreTcpConnectionOffloadParameters @ 0x1C00DD150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisOidPreQueryTcpConnectionParameters @ 0x1C00DCC6C (ndisOidPreQueryTcpConnectionParameters.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffloadParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int8 v3; // bl
  __int64 v4; // r14
  char TcpConnectionParameters; // r15
  char v7; // si
  int v9; // [rsp+20h] [rbp-28h]

  v2 = *(_QWORD *)a1;
  v3 = 1;
  v4 = *(_QWORD *)(a1 + 32);
  TcpConnectionParameters = 1;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xF7u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v2, v4);
  v7 = 0;
  if ( !v2 || *(_QWORD *)(v2 + 4120) )
  {
    if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFFD) == 0 )
      TcpConnectionParameters = ndisOidPreQueryTcpConnectionParameters(v2, a2, v4, (int *)(a1 + 40));
    if ( *(_DWORD *)(v4 + 4) != 1 )
      v7 = TcpConnectionParameters;
    v3 = v7;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v9 = v3;
    WPP_SF_qdD(0xF8u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v2, *(_DWORD *)(a1 + 40), v9);
  }
  return v3;
}
