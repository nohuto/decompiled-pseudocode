/*
 * XREFs of ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x1C001E484
 * Callers:
 *     ndisReadRssKeywords @ 0x1C00B9168 (ndisReadRssKeywords.c)
 * Callees:
 *     _TlgWrite @ 0x1C0012C84 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C001EF44 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRssConfiguration(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_CONFIGURATION_PARAMETER *a2)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // eax
  BOOL v7; // [rsp+30h] [rbp-19h] BYREF
  int v8; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  BOOL *v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  int *v14; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+88h] [rbp+3Fh]

  if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x200000000000uLL) )
  {
    v11 = 16LL;
    v10 = v5 + 4032;
    v13 = 4LL;
    v7 = (_DWORD)v3 == 0;
    v12 = &v7;
    if ( (_DWORD)v3 )
      v6 = 0;
    else
      v6 = *(_DWORD *)(v4 + 8);
    v8 = v6;
    v14 = &v8;
    v15 = 4LL;
    TlgWrite(&hProvider, &unk_1C00851AC, v2, v3, 5u, &pData);
  }
}
