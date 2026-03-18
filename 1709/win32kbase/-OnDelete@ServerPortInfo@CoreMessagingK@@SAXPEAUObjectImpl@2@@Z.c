/*
 * XREFs of ?OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C0085F50
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x1C000C4FC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1C0085FA4 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::ServerPortInfo::OnDelete(struct CoreMessagingK::ObjectImpl *a1)
{
  const WCHAR *v2; // rdx
  LPCGUID v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  char *v5; // [rsp+50h] [rbp-48h]
  int v6; // [rsp+58h] [rbp-40h]
  int v7; // [rsp+5Ch] [rbp-3Ch]
  char *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  if ( dword_1C0188C40 > 5u )
  {
    v2 = (const WCHAR *)*((_QWORD *)a1 + 4);
    v7 = 0;
    v10 = 0;
    v5 = (char *)a1 + 8;
    v8 = (char *)a1 + 16;
    v6 = 8;
    v9 = 16;
    TlgCreateWsz(&pDesc, v2);
    TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016C3FC, 0LL, v3, 5u, &pData);
  }
  CoreMessagingK::ServerPorts::UninitializeServerPort(a1);
}
