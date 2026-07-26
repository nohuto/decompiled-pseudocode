/*
 * XREFs of ndisOidPreQosCapabilities @ 0x1C00DE740
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreQosCapabilities(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  __int64 v3; // r14
  unsigned __int8 v4; // di
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  v3 = *(_QWORD *)a1;
  v4 = 0;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x7Eu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, v1);
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x14u )
  {
    if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_6;
    if ( !v3 )
      goto LABEL_13;
    v6 = *(_DWORD *)(v1 + 32) == -66781183 ? *(_QWORD *)(v3 + 4936) : *(_QWORD *)(v3 + 4944);
    if ( !v6 )
    {
LABEL_6:
      v2 = -1073741637;
    }
    else
    {
      v7 = *(_QWORD *)(v1 + 40);
      *(_OWORD *)v7 = *(_OWORD *)v6;
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(v6 + 16);
      *(_DWORD *)(v1 + 52) = 20;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 20;
    v2 = -1073676268;
  }
  v4 = 1;
  *(_DWORD *)(a1 + 40) = v2;
LABEL_13:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v9 = v2;
    WPP_SF_qdD(0x7Fu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, v4, v9);
  }
  return v4;
}
