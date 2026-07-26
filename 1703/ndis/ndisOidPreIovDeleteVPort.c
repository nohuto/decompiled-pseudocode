/*
 * XREFs of ndisOidPreIovDeleteVPort @ 0x1C00E6D60
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0021F3C (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     ndisIovFindVPortByVPortId @ 0x1C006ABA8 (ndisIovFindVPortByVPortId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovDeleteVPort(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // r11
  unsigned __int8 v5; // bl
  __int64 v6; // rax
  _BYTE *OidSourceHandle; // rax
  unsigned int v8; // edx
  __int64 *VPortByVPortId; // rax
  __int64 v10; // r10
  int v12; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = byte_1C0092621;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
  {
    WPP_SF_qq(0x33u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v3, v1);
    v4 = byte_1C0092621;
  }
  v5 = 1;
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
    v5 = 0;
    goto LABEL_21;
  }
  if ( !ndisIovNicSwitchWithoutIovSupported(v3)
    && ((v6 = *(_QWORD *)(v3 + 4640)) == 0 || !*(_QWORD *)(v3 + 3584) || (*(_BYTE *)(v6 + 8) & 3) != 3)
    || (OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1)) == 0LL
    || *OidSourceHandle != 18
    || (v8 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL)) == 0 )
  {
LABEL_20:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_21;
  }
  VPortByVPortId = ndisIovFindVPortByVPortId(v3, v8);
  if ( VPortByVPortId && VPortByVPortId[10] == v10 )
  {
    *(_QWORD *)(v1 + 152) = VPortByVPortId;
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_21:
  if ( (unsigned __int8)v4 >= 4u )
  {
    v12 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x34u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v3, v5, v12);
  }
  return v5;
}
