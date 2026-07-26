/*
 * XREFs of ndisPMAddRemoveAsync @ 0x1C00E1C60
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 *     ndisOidPMAddRemove @ 0x1C00248FC (ndisOidPMAddRemove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

void __fastcall ndisPMAddRemoveAsync(_QWORD *P)
{
  _QWORD *v1; // rsi
  __int64 v2; // rbp
  __int64 v4; // rbx
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10[6]; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_QWORD *)P[4];
  v2 = P[5];
  v4 = P[6];
  memset(v10, 0, sizeof(v10));
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x46u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, v1, v4);
  LODWORD(v10[5]) = ndisOidPMAddRemove(v1, v2, (PNDIS_OID_REQUEST)v4);
  v5 = v10[5];
  v10[4] = v4;
  *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 88) & 0xF8FFFFF6 | 0x5000000;
  ndisOidRequestComplete(v10, v6);
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v1, 0xEu, v7, v8);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v9 = v5;
    WPP_SF_qqd(0x47u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, v1, v4, v9);
  }
}
