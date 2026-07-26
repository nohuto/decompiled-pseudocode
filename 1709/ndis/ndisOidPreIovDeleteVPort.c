/*
 * XREFs of ndisOidPreIovDeleteVPort @ 0x1C00F0370
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C00045E4 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisIovFindVPortByVPortId @ 0x1C006C07C (ndisIovFindVPortByVPortId.c)
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
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qq(0x33u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v1);
  v4 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_20;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    *(_DWORD *)(v1 + 56) = 12;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_21;
  if ( !*(_QWORD *)a1 )
  {
LABEL_8:
    v4 = 0;
    goto LABEL_21;
  }
  if ( !ndisIovNicSwitchWithoutIovSupported(v3)
    && ((v5 = *(_QWORD *)(v3 + 4640)) == 0 || !*(_QWORD *)(v3 + 3584) || (*(_BYTE *)(v5 + 8) & 3) != 3)
    || (OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1), (v7 = OidSourceHandle) == 0LL)
    || *OidSourceHandle != 18
    || (v8 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL)) == 0 )
  {
LABEL_20:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_21;
  }
  VPortByVPortId = ndisIovFindVPortByVPortId(v3, v8);
  if ( VPortByVPortId && *(_BYTE **)(VPortByVPortId + 80) == v7 )
  {
    *(_QWORD *)(v1 + 152) = VPortByVPortId;
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_21:
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
  {
    v11 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x34u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v4, v11);
  }
  return v4;
}
