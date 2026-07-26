/*
 * XREFs of ?NdisTraceLoggingRscConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0026E6C
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C0014E98 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0015A3C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0015A70 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRscConfigOffloads(const struct _TlgProvider_t *a1, struct _NDIS_OFFLOAD *a2)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+30h] [rbp-29h] BYREF
  int v6; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const struct _TlgProvider_t *v8; // [rsp+60h] [rbp+7h]
  __int64 v9; // [rsp+68h] [rbp+Fh]
  int *v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  int *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]

  if ( (unsigned int)dword_1C0091010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v9 = 16LL;
      v8 = v2 + 63;
      v5 = *(unsigned __int8 *)(v4 + 144);
      v10 = &v5;
      v6 = *(unsigned __int8 *)(v4 + 145);
      v12 = &v6;
      v11 = 4LL;
      v13 = 4LL;
      TlgWrite(v2, &unk_1C007F849, v3, (LPCGUID)v4, 5u, &pData);
    }
  }
}
