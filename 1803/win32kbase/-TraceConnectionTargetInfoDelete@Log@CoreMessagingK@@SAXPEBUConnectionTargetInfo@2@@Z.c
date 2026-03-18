/*
 * XREFs of ?TraceConnectionTargetInfoDelete@Log@CoreMessagingK@@SAXPEBUConnectionTargetInfo@2@@Z @ 0x1C0167648
 * Callers:
 *     ?OnDelete@ConnectionTargetInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C0167620 (-OnDelete@ConnectionTargetInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::Log::TraceConnectionTargetInfoDelete(
        const struct CoreMessagingK::ConnectionTargetInfo *a1,
        __int64 a2,
        __int64 a3,
        const GUID *a4)
{
  __int64 v4; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-19h] BYREF
  char *v6; // [rsp+50h] [rbp+7h]
  __int64 v7; // [rsp+58h] [rbp+Fh]
  __int64 v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  __int64 v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  __int64 v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  v4 = *((_QWORD *)a1 + 2);
  if ( dword_1C019A350 > 5u )
  {
    v7 = 8LL;
    v6 = (char *)a1 + 8;
    v10 = v4 + 8;
    v12 = v4 + 12;
    v8 = v4;
    v9 = 8LL;
    v11 = 4LL;
    v13 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A769, 0LL, a4, 6u, &pData);
  }
}
