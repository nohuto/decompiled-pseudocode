/*
 * XREFs of ndisFDirectOidRequestCompleteInternal @ 0x1C0059780
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005ABC0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 *     ndisDereferenceRef @ 0x1C0019DB0 (ndisDereferenceRef.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ndisReferenceRefNoCheck @ 0x1C006E920 (ndisReferenceRefNoCheck.c)
 */

void __fastcall ndisFDirectOidRequestCompleteInternal(_QWORD *Parameter)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-48h]
  __int64 v6[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = Parameter[3];
  v2 = Parameter[1];
  v3 = *(_DWORD *)(v1 + 80);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v5 = *(_DWORD *)(v1 + 80);
    WPP_SF_qqd(0x37u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, v2, v1, v5);
  }
  memset(v6, 0, 0x30uLL);
  LODWORD(v6[5]) = v3;
  v6[2] = v2;
  v6[4] = v1;
  ndisReferenceRefNoCheck((PKSPIN_LOCK)(v2 + 320));
  ndisOidRequestComplete(v6, v4);
  ndisDereferenceRef((PKSPIN_LOCK)(v2 + 320), 0x14u);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x38u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, v2, v1);
}
