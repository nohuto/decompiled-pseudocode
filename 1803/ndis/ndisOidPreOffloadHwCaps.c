/*
 * XREFs of ndisOidPreOffloadHwCaps @ 0x1C00C9BB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCopyNdisOffload @ 0x1C0023D50 (ndisCopyNdisOffload.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreOffloadHwCaps(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  unsigned int v6; // r8d
  __int64 v7; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0xEEu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_12;
  if ( !*(_QWORD *)a1 )
  {
    v4 = 0;
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(v1 + 4120) )
  {
LABEL_12:
    *(_DWORD *)(a1 + 40) = -1073741637;
    v4 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
    v4 = 1;
    v6 = *(_DWORD *)(v3 + 48);
    if ( v6 < 0x70 )
    {
      *(_DWORD *)(v3 + 56) = 112;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    else
    {
      ndisCopyNdisOffload(*(_QWORD *)(v3 + 40), *(_QWORD *)(v1 + 4120) + 572LL, v6, (_DWORD *)(v3 + 52), 1);
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
LABEL_6:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    LODWORD(v7) = v4;
    WPP_SF_qdD(0xEFu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, *(_DWORD *)(a1 + 40), v7);
  }
  return v4;
}
