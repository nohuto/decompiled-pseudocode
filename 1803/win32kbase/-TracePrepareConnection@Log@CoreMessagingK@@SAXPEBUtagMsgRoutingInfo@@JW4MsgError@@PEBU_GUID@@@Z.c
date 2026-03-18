/*
 * XREFs of ?TracePrepareConnection@Log@CoreMessagingK@@SAXPEBUtagMsgRoutingInfo@@JW4MsgError@@PEBU_GUID@@@Z @ 0x1C0165E88
 * Callers:
 *     ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1C0165BBC (-PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CoreMessagingK::Log::TracePrepareConnection(__int64 a1, int a2, int a3, const GUID *a4)
{
  TLG_STATUS result; // eax
  int v5; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  __int64 v7; // [rsp+60h] [rbp-29h]
  __int64 v8; // [rsp+68h] [rbp-21h]
  __int64 v9; // [rsp+70h] [rbp-19h]
  __int64 v10; // [rsp+78h] [rbp-11h]
  __int64 v11; // [rsp+80h] [rbp-9h]
  __int64 v12; // [rsp+88h] [rbp-1h]
  __int64 v13; // [rsp+90h] [rbp+7h]
  __int64 v14; // [rsp+98h] [rbp+Fh]
  int *v15; // [rsp+A0h] [rbp+17h]
  __int64 v16; // [rsp+A8h] [rbp+1Fh]
  int *v17; // [rsp+B0h] [rbp+27h]
  __int64 v18; // [rsp+B8h] [rbp+2Fh]
  const GUID *v19; // [rsp+C0h] [rbp+37h]
  __int64 v20; // [rsp+C8h] [rbp+3Fh]
  int v21; // [rsp+F8h] [rbp+6Fh] BYREF

  v21 = a2;
  if ( dword_1C019A350 > 5u )
  {
    v7 = a1;
    v9 = a1 + 4;
    v11 = a1 + 8;
    v13 = a1 + 24;
    v15 = &v21;
    v17 = &v5;
    v8 = 4LL;
    v10 = 4LL;
    v12 = 8LL;
    v14 = 16LL;
    v16 = 4LL;
    v5 = a3;
    v18 = 4LL;
    v19 = a4;
    v20 = 16LL;
    return TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A4AE, 0LL, a4, 9u, &pData);
  }
  return result;
}
