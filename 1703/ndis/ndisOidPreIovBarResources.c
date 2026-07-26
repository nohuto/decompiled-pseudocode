/*
 * XREFs of ndisOidPreIovBarResources @ 0x1C00E66B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     ndisIovFindVFByVFId @ 0x1C00E60F0 (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovBarResources(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // r10
  unsigned __int8 v5; // bl
  unsigned int v6; // ecx
  int v7; // eax
  __int64 v8; // r8
  int v9; // r9d
  int v11; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = byte_1C0092621;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
  {
    WPP_SF_qq(0x4Bu, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v3, v1);
    v4 = byte_1C0092621;
  }
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_4;
  v5 = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0xCu )
  {
    if ( *(_DWORD *)(v1 + 52) < 0xCu )
    {
      *(_DWORD *)(v1 + 68) = 12;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 68) = 12;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_21;
  v6 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL) + 20;
  *(_DWORD *)(a1 + 40) = 0;
  v7 = v6;
  if ( v6 < 0xC )
    v7 = 12;
  if ( *(_DWORD *)(v1 + 48) >= 0xCu )
  {
    if ( *(_DWORD *)(v1 + 52) < v6 )
    {
      *(_DWORD *)(v1 + 68) = v7;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 68) = v7;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_21;
  if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) != &ndisIntReqGeneric )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_21:
    v5 = 1;
    goto LABEL_22;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = v9;
    if ( !ndisIovFindVFByVFId(v3, *(_WORD *)(v8 + 4)) )
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( (unsigned __int8)v4 >= 4u )
  {
    v11 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x4Cu, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v3, v5, v11);
  }
  return v5;
}
