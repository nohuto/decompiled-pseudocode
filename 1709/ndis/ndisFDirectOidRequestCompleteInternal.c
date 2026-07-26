/*
 * XREFs of ndisFDirectOidRequestCompleteInternal @ 0x1C0059080
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005A2A0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ndisReferenceRefNoCheck @ 0x1C006E0A8 (ndisReferenceRefNoCheck.c)
 */

void __fastcall ndisFDirectOidRequestCompleteInternal(_QWORD *Parameter)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-48h]
  _QWORD v6[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = Parameter[3];
  v2 = Parameter[1];
  v3 = *(_DWORD *)(v1 + 80);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v5 = *(_DWORD *)(v1 + 80);
    WPP_SF_qqd(0x37u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, v2, v1, v5);
  }
  memset(v6, 0, 0x30uLL);
  LODWORD(v6[5]) = v3;
  v6[2] = v2;
  v6[4] = v1;
  ndisReferenceRefNoCheck((PKSPIN_LOCK)(v2 + 320));
  ndisOidRequestComplete((__int64)v6, v4);
  ndisDereferenceRef((PKSPIN_LOCK)(v2 + 320));
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x38u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, v2, v1);
}
