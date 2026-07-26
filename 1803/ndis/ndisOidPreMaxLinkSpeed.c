/*
 * XREFs of ndisOidPreMaxLinkSpeed @ 0x1C00DE360
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreMaxLinkSpeed(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 v2; // bl
  __int64 v3; // rsi
  __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  v3 = 0LL;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0xBCu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, 0LL, v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 )
    {
      v3 = *(_QWORD *)(v5 + 32);
    }
    else if ( *(_QWORD *)a1 )
    {
      v3 = *(_QWORD *)a1;
    }
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x10u )
    {
      *(_DWORD *)(v1 + 56) = 16;
      *(_DWORD *)(a1 + 40) = -1073676268;
      goto LABEL_13;
    }
    *(_OWORD *)*(_QWORD *)(v1 + 40) = *(_OWORD *)(v3 + 3032);
    *(_DWORD *)(a1 + 40) = 0;
    *(_QWORD *)(v1 + 52) = 16LL;
  }
  v2 = 1;
LABEL_13:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v7 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0xBDu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, v2, v7);
  }
  return v2;
}
