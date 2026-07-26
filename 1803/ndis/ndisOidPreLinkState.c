/*
 * XREFs of ndisOidPreLinkState @ 0x1C00C7F70
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 */

char __fastcall ndisOidPreLinkState(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  __int64 v4; // rdi
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  int v11; // [rsp+20h] [rbp-40h]
  _OWORD v12[3]; // [rsp+30h] [rbp-30h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0xBAu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v4);
  if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v4 + 48) < 0x28u )
    {
      *(_DWORD *)(v4 + 56) = 40;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    else
    {
      memset(v12, 0, 0x28uLL);
      v5 = *(_QWORD *)(a1 + 16) == 0LL;
      LODWORD(v12[0]) = 2621824;
      if ( v5 )
      {
        DWORD1(v12[0]) = *(_DWORD *)(v1 + 480);
        v12[1] = *(_OWORD *)(v1 + 792);
        DWORD2(v12[0]) = *(_DWORD *)(v1 + 488);
        LODWORD(v12[2]) = *(_DWORD *)(v1 + 808);
        v6 = *(_DWORD *)(v1 + 468);
      }
      else
      {
        DWORD1(v12[0]) = *(_DWORD *)(v3 + 388);
        v12[1] = *(_OWORD *)(v3 + 400);
        DWORD2(v12[0]) = *(_DWORD *)(v3 + 392);
        LODWORD(v12[2]) = *(_DWORD *)(v3 + 416);
        v6 = *(_DWORD *)(v3 + 420);
      }
      DWORD1(v12[2]) = v6;
      v7 = *(_QWORD *)(v4 + 40);
      v8 = v12[1];
      *(_OWORD *)v7 = v12[0];
      v9 = *(_QWORD *)&v12[2];
      *(_OWORD *)(v7 + 16) = v8;
      *(_QWORD *)(v7 + 32) = v9;
      *(_DWORD *)(a1 + 40) = 0;
      *(_QWORD *)(v4 + 52) = 40LL;
    }
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v11 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0xBBu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, 1, v11);
  }
  return 1;
}
