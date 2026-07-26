/*
 * XREFs of ndisOidPreIovDeleteVPort @ 0x1C00F2F40
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001A044 (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ndisIovFindVPortByVPortId @ 0x1C006C8D8 (ndisIovFindVPortByVPortId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovDeleteVPort(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  _BYTE *OidSourceHandle; // rax
  _BYTE *v7; // r14
  unsigned int v8; // edx
  __int64 VPortByVPortId; // rax
  int v11; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qq(0x33u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v1);
  v4 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_19;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    *(_DWORD *)(v1 + 56) = 12;
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_20;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_7;
  if ( (ndisIovNicSwitchWithoutIovSupported(v3)
     || (v5 = *(_QWORD *)(v3 + 4640)) != 0 && *(_QWORD *)(v3 + 3584) && (*(_BYTE *)(v5 + 8) & 3) == 3)
    && (OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1), (v7 = OidSourceHandle) != 0LL)
    && *OidSourceHandle == 18
    && (v8 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL)) != 0 )
  {
    VPortByVPortId = ndisIovFindVPortByVPortId(v3, v8);
    if ( VPortByVPortId && *(_BYTE **)(VPortByVPortId + 80) == v7 )
    {
      *(_QWORD *)(v1 + 152) = VPortByVPortId;
LABEL_7:
      v4 = 0;
      goto LABEL_20;
    }
    *(_DWORD *)(a1 + 40) = -1073741811;
  }
  else
  {
LABEL_19:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_20:
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    v11 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x34u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v4, v11);
  }
  return v4;
}
