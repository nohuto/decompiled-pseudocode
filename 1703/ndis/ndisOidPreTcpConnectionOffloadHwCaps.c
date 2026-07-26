/*
 * XREFs of ndisOidPreTcpConnectionOffloadHwCaps @ 0x1C00D2840
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffloadHwCaps(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  char v4; // dl
  unsigned __int8 v5; // bl
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qq(0xE3u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v1, v3);
    v4 = byte_1C0092612;
  }
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  v5 = 0;
  if ( !*(_QWORD *)a1 )
    goto LABEL_12;
  if ( !*(_QWORD *)(v1 + 4120) )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x14u )
    {
      *(_DWORD *)(v3 + 56) = 20;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      v6 = *(_QWORD *)(v1 + 4120);
      v7 = *(_QWORD *)(v3 + 40);
      *(_OWORD *)v7 = *(_OWORD *)(v6 + 912);
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(v6 + 928);
      *(_DWORD *)(v3 + 56) = 20;
      *(_DWORD *)(v3 + 52) = 20;
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  v5 = 1;
LABEL_12:
  if ( (unsigned __int8)v4 >= 4u )
  {
    v9 = v5;
    WPP_SF_qdD(0xE4u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v1, *(_DWORD *)(a1 + 40), v9);
  }
  return v5;
}
