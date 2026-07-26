/*
 * XREFs of ndisOidPreIovBarResources @ 0x1C00EFCE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisIovFindVFByVFId @ 0x1C00EF72C (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovBarResources(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  unsigned int v5; // ecx
  int v6; // eax
  __int64 v7; // r8
  int v8; // r9d
  int v10; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qq(0x4Bu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v1);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_4;
  v4 = 0;
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
  v5 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL) + 20;
  *(_DWORD *)(a1 + 40) = 0;
  v6 = v5;
  if ( v5 < 0xC )
    v6 = 12;
  if ( *(_DWORD *)(v1 + 48) >= 0xCu )
  {
    if ( *(_DWORD *)(v1 + 52) < v5 )
    {
      *(_DWORD *)(v1 + 68) = v6;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 68) = v6;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_21;
  if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) != &ndisIntReqGeneric )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_21:
    v4 = 1;
    goto LABEL_22;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = v8;
    if ( !ndisIovFindVFByVFId(v3, *(_WORD *)(v7 + 4)) )
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
  {
    v10 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x4Cu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v4, v10);
  }
  return v4;
}
