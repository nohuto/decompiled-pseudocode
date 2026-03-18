/*
 * XREFs of ?TraceConnectionRequest@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@EJII@Z @ 0x1C0166E28
 * Callers:
 *     ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C0166A94 (-HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::Log::TraceConnectionRequest(
        const struct CoreMessagingK::ServerPortInfo *a1,
        char a2,
        int a3,
        int a4,
        char a5)
{
  const WCHAR *v5; // rdx
  LPCGUID v6; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-41h] BYREF
  char *v8; // [rsp+58h] [rbp-21h]
  __int64 v9; // [rsp+60h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-11h] BYREF
  char *v11; // [rsp+78h] [rbp-1h]
  __int64 v12; // [rsp+80h] [rbp+7h]
  int *v13; // [rsp+88h] [rbp+Fh]
  __int64 v14; // [rsp+90h] [rbp+17h]
  int *v15; // [rsp+98h] [rbp+1Fh]
  __int64 v16; // [rsp+A0h] [rbp+27h]
  char *v17; // [rsp+A8h] [rbp+2Fh]
  __int64 v18; // [rsp+B0h] [rbp+37h]
  char v19; // [rsp+E0h] [rbp+67h] BYREF
  int v20; // [rsp+E8h] [rbp+6Fh] BYREF
  int v21; // [rsp+F0h] [rbp+77h] BYREF

  v21 = a4;
  v20 = a3;
  v19 = a2;
  if ( dword_1C019A350 > 5u )
  {
    v5 = (const WCHAR *)*((_QWORD *)a1 + 4);
    v8 = (char *)a1 + 16;
    v9 = 16LL;
    TlgCreateWsz(&pDesc, v5);
    v12 = 1LL;
    v13 = &v20;
    v11 = &v19;
    v15 = &v21;
    v17 = &a5;
    v14 = 4LL;
    v16 = 4LL;
    v18 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A65E, 0LL, v6, 8u, &pData);
  }
}
