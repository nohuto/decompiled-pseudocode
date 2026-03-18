/*
 * XREFs of ?OnDelete@ConnectionTargetInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C006CE90
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C006CEF8 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::ConnectionTargetInfo::OnDelete(
        struct CoreMessagingK::ObjectImpl *a1,
        __int64 a2,
        __int64 a3,
        const GUID *a4)
{
  __int64 v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-29h] BYREF
  char *v7; // [rsp+50h] [rbp-9h]
  int v8; // [rsp+58h] [rbp-1h]
  int v9; // [rsp+5Ch] [rbp+3h]
  __int64 v10; // [rsp+60h] [rbp+7h]
  int v11; // [rsp+68h] [rbp+Fh]
  int v12; // [rsp+6Ch] [rbp+13h]
  __int64 v13; // [rsp+70h] [rbp+17h]
  int v14; // [rsp+78h] [rbp+1Fh]
  int v15; // [rsp+7Ch] [rbp+23h]
  __int64 v16; // [rsp+80h] [rbp+27h]
  int v17; // [rsp+88h] [rbp+2Fh]
  int v18; // [rsp+8Ch] [rbp+33h]

  v5 = *((_QWORD *)a1 + 2);
  if ( dword_1C0186C30 > 5u )
  {
    v9 = 0;
    v12 = 0;
    v15 = 0;
    v18 = 0;
    v7 = (char *)a1 + 8;
    v13 = v5 + 8;
    v16 = v5 + 12;
    v8 = 4;
    v10 = v5;
    v11 = 8;
    v14 = 4;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0186C30, &unk_1C016C038, 0LL, a4, 6u, &pData);
  }
  CoreMessagingK::ClientPortInfo::Release(*((CoreMessagingK::ClientPortInfo **)a1 + 2));
  *((_QWORD *)a1 + 2) = 0LL;
}
