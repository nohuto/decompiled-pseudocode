/*
 * XREFs of ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x1C00120B0
 * Callers:
 *     ndisReadRssKeywords @ 0x1C00B2810 (ndisReadRssKeywords.c)
 * Callees:
 *     _TlgWrite @ 0x1C0011DA8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0012B70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRssConfiguration(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_CONFIGURATION_PARAMETER *a2)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // [rsp+30h] [rbp-19h] BYREF
  BOOL v7; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  BOOL *v11; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  int *v13; // [rsp+80h] [rbp+37h]
  __int64 v14; // [rsp+88h] [rbp+3Fh]

  if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x200000000000uLL) )
  {
    v10 = 16LL;
    v9 = v5 + 4032;
    v12 = 4LL;
    v7 = (_DWORD)v3 == 0;
    v11 = &v7;
    if ( (_DWORD)v3 )
      v6 = 0;
    else
      v6 = *(_DWORD *)(v4 + 8);
    v14 = 4LL;
    v13 = &v6;
    TlgWrite(&hProvider, &unk_1C008412D, v2, v3, 5u, &pData);
  }
}
