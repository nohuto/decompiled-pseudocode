/*
 * XREFs of ndisOidPreSetHDSplitParameters @ 0x1C00DEA20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ndisUpdateHDSplitKeyword @ 0x1C00DFE10 (ndisUpdateHDSplitKeyword.c)
 */

unsigned __int8 __fastcall ndisOidPreSetHDSplitParameters(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // al
  __int64 v6; // rcx
  __int64 v7; // rax

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0xD1u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v3);
  v4 = 1;
  if ( *(_DWORD *)(v3 + 4) != 1 )
    goto LABEL_4;
  if ( !*(_QWORD *)a1 )
    goto LABEL_6;
  v5 = *(_BYTE *)(v1 + 32);
  if ( v5 <= 6u && (v5 != 6 || !*(_BYTE *)(v1 + 33)) )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) >= 8u )
  {
    v6 = *(_QWORD *)(v3 + 40);
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_BYTE *)v6 == 0x80 && *(_BYTE *)(v6 + 1) && *(_WORD *)(v6 + 2) >= 8u )
    {
      v7 = *(_QWORD *)(v1 + 4296);
      if ( v7 && (*(_DWORD *)(v7 + 12) & 1) != 0 )
      {
        ndisUpdateHDSplitKeyword(v1, (*(_DWORD *)(v6 + 4) & 1) == 0);
LABEL_6:
        v4 = 0;
        goto LABEL_20;
      }
      *(_DWORD *)(a1 + 40) = -1073741811;
    }
    else
    {
      *(_DWORD *)(a1 + 40) = -1073676267;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 56) = 8;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
LABEL_20:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qdD(0xD2u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, *(_DWORD *)(a1 + 40), v4);
  return v4;
}
