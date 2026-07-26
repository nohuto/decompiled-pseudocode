/*
 * XREFs of ndisOidPreQosSetParameters @ 0x1C00DE840
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ndisValidateQosParameters @ 0x1C0048E9C (ndisValidateQosParameters.c)
 */

unsigned __int8 __fastcall ndisOidPreQosSetParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbp
  unsigned __int8 v5; // bl
  unsigned int v6; // r9d
  int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-18h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)a1;
  v5 = 0;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x80u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v4, v2);
  if ( *(_DWORD *)(v2 + 4) != 12 )
  {
    v5 = 1;
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_21;
  }
  *(_DWORD *)(a1 + 40) = 0;
  v6 = *(_DWORD *)(v2 + 48);
  if ( v6 < 0x34 )
  {
    v7 = -1073676268;
LABEL_9:
    *(_DWORD *)(v2 + 68) = 52;
LABEL_10:
    *(_DWORD *)(a1 + 40) = v7;
LABEL_11:
    v5 = 1;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v2 + 52) < 0x34u )
  {
    v7 = -1073676266;
    goto LABEL_9;
  }
  if ( v4 )
  {
    LOBYTE(a2) = 1;
    v8 = ndisValidateQosParameters(v4, a2, *(_DWORD **)(v2 + 40), v6, &v12);
    *(_DWORD *)(a1 + 40) = v8;
    if ( v8 )
    {
      if ( v8 == -1073676268 )
        *(_DWORD *)(v2 + 68) = v12;
      goto LABEL_11;
    }
    v9 = v12;
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v2 + 48) < v9 )
    {
      *(_DWORD *)(v2 + 68) = v9;
      v7 = -1073676268;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(v2 + 52) < v9 )
    {
      *(_DWORD *)(v2 + 68) = v9;
      v7 = -1073676266;
      goto LABEL_10;
    }
    *(_DWORD *)(v2 + 60) = 0;
    *(_DWORD *)(v2 + 64) = v12;
  }
LABEL_21:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    LODWORD(v11) = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x81u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v4, v5, v11);
  }
  return v5;
}
