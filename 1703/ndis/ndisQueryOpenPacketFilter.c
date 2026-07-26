/*
 * XREFs of ndisQueryOpenPacketFilter @ 0x1C00D307C
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C00B6F50 (ndisOidPrePacketFilter.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisQueryOpenPacketFilter(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v5; // esi
  char v6; // cl
  int v8; // eax
  int v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  v6 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qq(0x58u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2);
    v6 = byte_1C0092612;
  }
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    v8 = *(_DWORD *)(v2 + 464);
    if ( !v8 || v8 == 16 )
      v5 = *(_DWORD *)(a1 + 432);
    **(_DWORD **)(a2 + 40) = v5;
    *(_DWORD *)(a2 + 52) = 4;
    if ( (unsigned __int8)v6 >= 4u )
    {
      v10 = 0;
      WPP_SF_qqd(0x5Au, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, v10);
    }
    return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 56) = 4;
    if ( (unsigned __int8)v6 >= 4u )
    {
      v9 = -1073676268;
      WPP_SF_qqd(0x59u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, v9);
    }
    return 3221291028LL;
  }
}
