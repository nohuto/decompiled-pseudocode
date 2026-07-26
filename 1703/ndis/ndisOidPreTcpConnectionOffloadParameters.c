/*
 * XREFs of ndisOidPreTcpConnectionOffloadParameters @ 0x1C00D2940
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     ndisOidPreQueryTcpConnectionParameters @ 0x1C00D244C (ndisOidPreQueryTcpConnectionParameters.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffloadParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int8 v3; // bl
  __int64 v4; // r14
  char TcpConnectionParameters; // r12
  char v7; // r15
  char v8; // si
  int v10; // [rsp+20h] [rbp-28h]

  v2 = *(_QWORD *)a1;
  v3 = 1;
  v4 = *(_QWORD *)(a1 + 32);
  TcpConnectionParameters = 1;
  v7 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qq(0xE5u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v2, v4);
    v7 = byte_1C0092612;
  }
  v8 = 0;
  if ( !v2 || *(_QWORD *)(v2 + 4120) )
  {
    if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFFD) == 0 )
      TcpConnectionParameters = ndisOidPreQueryTcpConnectionParameters(v2, a2, v4, (int *)(a1 + 40));
    if ( *(_DWORD *)(v4 + 4) != 1 )
      v8 = TcpConnectionParameters;
    v3 = v8;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  if ( (unsigned __int8)v7 >= 4u )
  {
    v10 = v3;
    WPP_SF_qdD(0xE6u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v2, *(_DWORD *)(a1 + 40), v10);
  }
  return v3;
}
