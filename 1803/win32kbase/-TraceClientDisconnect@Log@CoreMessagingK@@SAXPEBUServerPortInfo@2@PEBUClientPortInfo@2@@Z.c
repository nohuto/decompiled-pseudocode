/*
 * XREFs of ?TraceClientDisconnect@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@PEBUClientPortInfo@2@@Z @ 0x1C0166D70
 * Callers:
 *     ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1C0166A24 (-HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::Log::TraceClientDisconnect(
        const struct CoreMessagingK::ServerPortInfo *a1,
        const struct CoreMessagingK::ClientPortInfo *a2)
{
  const WCHAR *v2; // rdx
  __int64 v3; // r10
  LPCGUID v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-78h] BYREF
  char *v6; // [rsp+50h] [rbp-58h]
  __int64 v7; // [rsp+58h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  __int64 v9; // [rsp+70h] [rbp-38h]
  __int64 v10; // [rsp+78h] [rbp-30h]
  __int64 v11; // [rsp+80h] [rbp-28h]
  __int64 v12; // [rsp+88h] [rbp-20h]

  if ( dword_1C019A350 > 5u )
  {
    v2 = (const WCHAR *)*((_QWORD *)a1 + 4);
    v6 = (char *)a1 + 16;
    v7 = 16LL;
    TlgCreateWsz(&pDesc, v2);
    v10 = 4LL;
    v11 = v3 + 12;
    v9 = v3 + 8;
    v12 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A60C, 0LL, v4, 6u, &pData);
  }
}
