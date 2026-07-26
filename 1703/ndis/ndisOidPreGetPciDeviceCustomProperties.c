/*
 * XREFs of ndisOidPreGetPciDeviceCustomProperties @ 0x1C00D1A70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 */

char __fastcall ndisOidPreGetPciDeviceCustomProperties(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  char v4; // dl
  __int64 v5; // rax
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  v4 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qq(0xAFu, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, 0LL, v1);
    v4 = byte_1C0092612;
  }
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x34u )
    {
      *(_DWORD *)(v1 + 56) = 52;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
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
        *(_DWORD *)(a1 + 40) = 0;
        *(_DWORD *)(v1 + 52) = 52;
      }
      else
      {
        *(_DWORD *)(a1 + 40) = -1073741808;
        *(_DWORD *)(v1 + 52) = 0;
      }
      *(_DWORD *)(v1 + 56) = 0;
    }
  }
  if ( (unsigned __int8)v4 >= 4u )
  {
    v8 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0xB0u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, 1, v8);
  }
  return 1;
}
