/*
 * XREFs of ndisPMAddRemoveAsync @ 0x1C00D5FF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisOidPMAddRemove @ 0x1C00230F8 (ndisOidPMAddRemove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 */

void __fastcall ndisPMAddRemoveAsync(_QWORD *P)
{
  void *v1; // rsi
  __int64 v2; // rbp
  __int64 v4; // rbx
  int v5; // ebp
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8[6]; // [rsp+30h] [rbp-38h] BYREF

  v1 = (void *)P[4];
  v2 = P[5];
  v4 = P[6];
  memset(v8, 0, sizeof(v8));
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x46u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, v1, v4);
  LODWORD(v8[5]) = ndisOidPMAddRemove(v1, v2, (PNDIS_OID_REQUEST)v4);
  v5 = v8[5];
  v8[4] = v4;
  *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 88) & 0xF8FFFFF6 | 0x5000000;
  ndisOidRequestComplete(v8, v6);
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v1, 0xEu);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    v7 = v5;
    WPP_SF_qqd(0x47u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, v1, v4, v7);
  }
}
