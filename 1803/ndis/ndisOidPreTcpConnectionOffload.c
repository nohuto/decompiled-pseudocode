/*
 * XREFs of ndisOidPreTcpConnectionOffload @ 0x1C00DEC60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffload(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0xF0u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_10;
  v4 = 0;
  if ( !*(_QWORD *)a1 )
    goto LABEL_12;
  v5 = *(_QWORD *)(v1 + 4120);
  if ( v5 && *(_BYTE *)(v5 + 893) )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v3 + 48) >= 0x14u )
    {
      v6 = *(_QWORD *)(v1 + 4120);
      v7 = *(_QWORD *)(v3 + 40);
      *(_OWORD *)v7 = *(_OWORD *)(v6 + 892);
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(v6 + 908);
      *(_DWORD *)(v3 + 56) = 20;
      *(_DWORD *)(v3 + 52) = 20;
      *(_DWORD *)(a1 + 40) = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 56) = 20;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
  }
  else
  {
LABEL_10:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  v4 = 1;
LABEL_12:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v9 = v4;
    WPP_SF_qdD(0xF1u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, *(_DWORD *)(a1 + 40), v9);
  }
  return v4;
}
