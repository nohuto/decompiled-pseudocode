/*
 * XREFs of ndisFDirectOidRequestCompleteInternal @ 0x1C0059D40
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005AA60 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     ndisDereferenceRef @ 0x1C001807C (ndisDereferenceRef.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     ndisReferenceRefNoCheck @ 0x1C006CA88 (ndisReferenceRefNoCheck.c)
 */

void __fastcall ndisFDirectOidRequestCompleteInternal(_QWORD *Parameter)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-48h]
  __int64 v7[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = Parameter[3];
  v2 = Parameter[1];
  v3 = *(_DWORD *)(v1 + 80);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    v6 = *(_DWORD *)(v1 + 80);
    WPP_SF_qqd(0x39u, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, v2, v1, v6);
  }
  memset(v7, 0, 0x30uLL);
  LODWORD(v7[5]) = v3;
  LOBYTE(v4) = 20;
  v7[2] = v2;
  v7[4] = v1;
  ndisReferenceRefNoCheck(v2 + 320, v4);
  ndisOidRequestComplete(v7, v5);
  ndisDereferenceRef((PKSPIN_LOCK)(v2 + 320), 0x14u);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x3Au, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, v2, v1);
}
