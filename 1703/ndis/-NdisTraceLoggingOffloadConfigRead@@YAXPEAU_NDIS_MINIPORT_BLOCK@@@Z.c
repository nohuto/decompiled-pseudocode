/*
 * XREFs of ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014DF0
 * Callers:
 *     ndisReadOffloadRegistry @ 0x1C00AE3F8 (ndisReadOffloadRegistry.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0015A3C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0015A70 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingOffloadConfigRead(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  __int64 v6; // [rsp+60h] [rbp-48h]
  int v7; // [rsp+68h] [rbp-40h]
  int v8; // [rsp+6Ch] [rbp-3Ch]
  int *v9; // [rsp+70h] [rbp-38h]
  int v10; // [rsp+78h] [rbp-30h]
  int v11; // [rsp+7Ch] [rbp-2Ch]

  if ( (unsigned int)dword_1C0091010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = v1 + 4032;
      v4 = *(_DWORD *)(v1 + 3696);
      v9 = &v4;
      v7 = 16;
      v10 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C007F697, v2, v3, 4u, &pData);
    }
  }
}
