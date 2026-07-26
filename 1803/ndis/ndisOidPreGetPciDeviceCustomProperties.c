/*
 * XREFs of ndisOidPreGetPciDeviceCustomProperties @ 0x1C00DDFD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 */

char __fastcall ndisOidPreGetPciDeviceCustomProperties(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0xBEu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, 0LL, v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
    v4 = 52;
    if ( *(_DWORD *)(v1 + 48) >= 0x34u )
    {
      if ( *(_QWORD *)a1 )
      {
        v3 = *(_QWORD *)a1;
      }
      else
      {
        v5 = *(_QWORD *)(a1 + 16);
        if ( v5 )
          v3 = *(_QWORD *)(v5 + 32);
      }
      if ( *(_DWORD *)(v3 + 3736) == 5 )
      {
        v6 = *(_QWORD *)(v1 + 40);
        *(_OWORD *)v6 = *(_OWORD *)(v3 + 3352);
        *(_OWORD *)(v6 + 16) = *(_OWORD *)(v3 + 3368);
        *(_OWORD *)(v6 + 32) = *(_OWORD *)(v3 + 3384);
        *(_DWORD *)(v6 + 48) = *(_DWORD *)(v3 + 3400);
        v7 = 0;
      }
      else
      {
        v4 = 0;
        v7 = -1073741808;
      }
      *(_DWORD *)(a1 + 40) = v7;
      *(_DWORD *)(v1 + 52) = v4;
      *(_DWORD *)(v1 + 56) = 0;
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 52;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v9 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0xBFu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, 1, v9);
  }
  return 1;
}
