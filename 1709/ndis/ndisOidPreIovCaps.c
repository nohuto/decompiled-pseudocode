/*
 * XREFs of ndisOidPreIovCaps @ 0x1C00EFE30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPreIovCaps(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qq(0x17u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v1, v3);
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0xCu )
  {
    *(_DWORD *)(v3 + 56) = 12;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_7;
    if ( !v1 )
      goto LABEL_14;
    v5 = *(_DWORD *)(v3 + 32) == 66121 ? *(_QWORD *)(v1 + 4632) : *(_QWORD *)(v1 + 4640);
    if ( !v5 )
    {
LABEL_7:
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
    else
    {
      v6 = *(_QWORD *)(v3 + 40);
      *(_QWORD *)v6 = *(_QWORD *)v5;
      *(_DWORD *)(v6 + 8) = *(_DWORD *)(v5 + 8);
      *(_DWORD *)(v3 + 52) = 12;
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  v4 = 1;
LABEL_14:
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
  {
    v8 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x18u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v1, v4, v8);
  }
  return v4;
}
