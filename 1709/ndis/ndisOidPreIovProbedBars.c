/*
 * XREFs of ndisOidPreIovProbedBars @ 0x1C00F0BE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPreIovProbedBars(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  int v6; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qq(0x49u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v1);
  v4 = 0;
  if ( *(_DWORD *)(v1 + 4) )
  {
LABEL_10:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 8u )
  {
    *(_DWORD *)(v1 + 56) = 8;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_11;
  if ( (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 40) + 4LL) + 24 >= *(unsigned int *)(v1 + 48) )
  {
    if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) == &ndisIntReqGeneric )
      goto LABEL_12;
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_11:
  v4 = 1;
LABEL_12:
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
  {
    v6 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x4Au, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v4, v6);
  }
  return v4;
}
