/*
 * XREFs of ndisOidPreQosCapabilities @ 0x1C00D2210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreQosCapabilities(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  char v5; // dl
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = 0;
  v5 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qq(0x81u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, v1);
    v5 = byte_1C0092612;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x14u )
  {
    *(_DWORD *)(v1 + 56) = 20;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_7;
    if ( !v3 )
      goto LABEL_14;
    v6 = *(_DWORD *)(v1 + 32) == -66781183 ? *(_QWORD *)(v3 + 4936) : *(_QWORD *)(v3 + 4944);
    if ( !v6 )
    {
LABEL_7:
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
    else
    {
      v7 = *(_QWORD *)(v1 + 40);
      *(_OWORD *)v7 = *(_OWORD *)v6;
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(v6 + 16);
      *(_DWORD *)(v1 + 52) = 20;
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  v4 = 1;
LABEL_14:
  if ( (unsigned __int8)v5 >= 4u )
  {
    v9 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x82u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, v4, v9);
  }
  return v4;
}
