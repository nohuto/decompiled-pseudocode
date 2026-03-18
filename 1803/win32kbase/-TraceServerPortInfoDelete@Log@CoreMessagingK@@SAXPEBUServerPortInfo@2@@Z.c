/*
 * XREFs of ?TraceServerPortInfoDelete@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@@Z @ 0x1C0167574
 * Callers:
 *     ?OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C0167550 (-OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::Log::TraceServerPortInfoDelete(const struct CoreMessagingK::ServerPortInfo *a1)
{
  const WCHAR *v1; // rdx
  LPCGUID v2; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  char *v4; // [rsp+50h] [rbp-48h]
  int v5; // [rsp+58h] [rbp-40h]
  int v6; // [rsp+5Ch] [rbp-3Ch]
  char *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  if ( dword_1C019A350 > 5u )
  {
    v1 = (const WCHAR *)*((_QWORD *)a1 + 4);
    v6 = 0;
    v9 = 0;
    v4 = (char *)a1 + 8;
    v7 = (char *)a1 + 16;
    v5 = 8;
    v8 = 16;
    TlgCreateWsz(&pDesc, v1);
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A71D, 0LL, v2, 5u, &pData);
  }
}
