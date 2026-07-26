/*
 * XREFs of ndisOidPreIovWriteVFConfigSpace @ 0x1C00F4410
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ndisIovFindVFByVFId @ 0x1C00F2344 (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovWriteVFConfigSpace(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  unsigned int v5; // r8d
  int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // r10
  int v10; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qq(0x3Du, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v1);
  v4 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_15;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x14u )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 12LL) + *(_DWORD *)(*(_QWORD *)(v1 + 40) + 16LL);
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v1 + 48) >= v5 )
    {
      if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) == &ndisIntReqGeneric )
      {
        if ( *(_QWORD *)a1 == v8
          || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) = v6, ndisIovFindVFByVFId(v3, *(_WORD *)(v7 + 4))) )
        {
          v4 = v8;
        }
        else
        {
          *(_DWORD *)(a1 + 40) = -1073741811;
        }
        goto LABEL_15;
      }
      goto LABEL_4;
    }
    *(_DWORD *)(v1 + 56) = v5;
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 20;
  }
  *(_DWORD *)(a1 + 40) = -1073676268;
LABEL_15:
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    v10 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x3Eu, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v4, v10);
  }
  return v4;
}
