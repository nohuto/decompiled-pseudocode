/*
 * XREFs of ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1C00697BC
 * Callers:
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C006B91C (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C006CEF8 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::ServerPorts::HandleClientDisconnect(
        struct CoreMessagingK::ServerPortInfo *a1,
        struct CoreMessagingK::ClientPortInfo *a2)
{
  struct CoreMessagingK::ClientPortInfo *v4; // rax
  struct CoreMessagingK::ClientPortInfo *v5; // rcx
  __int64 v6; // rax
  const WCHAR *v7; // rdx
  LPCGUID v8; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-88h] BYREF
  char *v10; // [rsp+50h] [rbp-68h]
  int v11; // [rsp+58h] [rbp-60h]
  int v12; // [rsp+5Ch] [rbp-5Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-58h] BYREF
  char *v14; // [rsp+70h] [rbp-48h]
  int v15; // [rsp+78h] [rbp-40h]
  int v16; // [rsp+7Ch] [rbp-3Ch]
  char *v17; // [rsp+80h] [rbp-38h]
  int v18; // [rsp+88h] [rbp-30h]
  int v19; // [rsp+8Ch] [rbp-2Ch]

  if ( dword_1C0186C30 > 5u )
  {
    v7 = (const WCHAR *)*((_QWORD *)a1 + 4);
    v12 = 0;
    v10 = (char *)a1 + 16;
    v11 = 16;
    TlgCreateWsz(&pDesc, v7);
    v16 = 0;
    v19 = 0;
    v14 = (char *)a2 + 8;
    v15 = 4;
    v18 = 4;
    v17 = (char *)a2 + 12;
    TlgWrite((TraceLoggingHProvider)&dword_1C0186C30, &unk_1C016BEDB, 0LL, v8, 6u, &pData);
  }
  v4 = (struct CoreMessagingK::ClientPortInfo *)*((_QWORD *)a1 + 5);
  v5 = 0LL;
  while ( v4 )
  {
    if ( v4 == a2 )
    {
      v6 = *((_QWORD *)a2 + 3);
      if ( v5 )
        *((_QWORD *)v5 + 3) = v6;
      else
        *((_QWORD *)a1 + 5) = v6;
      *((_QWORD *)a2 + 3) = 0LL;
      break;
    }
    v5 = v4;
    v4 = (struct CoreMessagingK::ClientPortInfo *)*((_QWORD *)v4 + 3);
  }
  ZwClose(*(HANDLE *)a2);
  *(_QWORD *)a2 = 0LL;
  CoreMessagingK::ClientPortInfo::Release(a2);
}
