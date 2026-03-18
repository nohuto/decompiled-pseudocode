/*
 * XREFs of ?TraceOpenConnectionStart@Log@CoreMessagingK@@SAXDPEBUtagMsgRoutingInfo@@@Z @ 0x1C0165140
 * Callers:
 *     CoreMsgOpenConnection @ 0x1C016555C (CoreMsgOpenConnection.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::Log::TraceOpenConnectionStart(
        char a1,
        const struct tagMsgRoutingInfo *a2,
        __int64 a3,
        const GUID *a4)
{
  int v4; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v6; // [rsp+60h] [rbp-9h]
  __int64 v7; // [rsp+68h] [rbp-1h]
  const struct tagMsgRoutingInfo *v8; // [rsp+70h] [rbp+7h]
  __int64 v9; // [rsp+78h] [rbp+Fh]
  char *v10; // [rsp+80h] [rbp+17h]
  __int64 v11; // [rsp+88h] [rbp+1Fh]
  char *v12; // [rsp+90h] [rbp+27h]
  __int64 v13; // [rsp+98h] [rbp+2Fh]
  char *v14; // [rsp+A0h] [rbp+37h]
  __int64 v15; // [rsp+A8h] [rbp+3Fh]

  if ( dword_1C019A350 > 5u )
  {
    v4 = a1;
    v6 = &v4;
    v10 = (char *)a2 + 4;
    v12 = (char *)a2 + 8;
    v14 = (char *)a2 + 24;
    v7 = 4LL;
    v8 = a2;
    v9 = 4LL;
    v11 = 4LL;
    v13 = 8LL;
    v15 = 16LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A319, 0LL, a4, 7u, &pData);
  }
}
