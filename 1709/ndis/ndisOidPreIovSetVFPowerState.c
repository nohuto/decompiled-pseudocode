/*
 * XREFs of ndisOidPreIovSetVFPowerState @ 0x1C00F1070
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisIovFindVFByVFId @ 0x1C00EF72C (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovSetVFPowerState(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  int v5; // r8d
  __int64 v6; // r10
  int v8; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qq(0x45u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v1);
  v4 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_13;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xDu )
  {
    *(_DWORD *)(v1 + 56) = 13;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) == &ndisIntReqGeneric )
    {
      if ( *(_QWORD *)a1 == v6
        || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) = v5,
            ndisIovFindVFByVFId(v3, *(_WORD *)(*(_QWORD *)(v1 + 40) + 4LL))) )
      {
        v4 = v6;
      }
      else
      {
        *(_DWORD *)(a1 + 40) = -1073741811;
      }
      goto LABEL_13;
    }
    goto LABEL_4;
  }
LABEL_13:
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
  {
    v8 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x46u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v4, v8);
  }
  return v4;
}
