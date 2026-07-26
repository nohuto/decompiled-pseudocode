/*
 * XREFs of ndisOidPreIovReadVFConfigSpace @ 0x1C00F39A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ndisIovFindVFByVFId @ 0x1C00F2344 (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovReadVFConfigSpace(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  __int64 v8; // r8
  int v9; // r9d
  int v11; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qq(0x3Bu, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v1);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_4;
  v4 = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x14u )
  {
    v5 = -1073676268;
LABEL_9:
    *(_DWORD *)(v1 + 68) = 20;
LABEL_10:
    *(_DWORD *)(a1 + 40) = v5;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(v1 + 52) < 0x14u )
  {
    v5 = -1073676266;
    goto LABEL_9;
  }
  v6 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 12LL) + *(_DWORD *)(*(_QWORD *)(v1 + 40) + 16LL);
  *(_DWORD *)(a1 + 40) = 0;
  v7 = v6;
  if ( v6 < 0x14 )
    v7 = 20;
  if ( *(_DWORD *)(v1 + 48) < 0x14u )
  {
    v5 = -1073676268;
LABEL_17:
    *(_DWORD *)(v1 + 68) = v7;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v1 + 52) < v6 )
  {
    v5 = -1073676266;
    goto LABEL_17;
  }
  if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) != &ndisIntReqGeneric )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_22:
    v4 = 1;
    goto LABEL_23;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = v9;
    if ( !ndisIovFindVFByVFId(v3, *(_WORD *)(v8 + 4)) )
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    v11 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x3Cu, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v4, v11);
  }
  return v4;
}
