/*
 * XREFs of ?TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1C01650C8
 * Callers:
 *     CoreMsgInitialize @ 0x1C01653A8 (CoreMsgInitialize.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::Log::TraceInitializeStop(int a1, __int64 a2, __int64 a3, const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  int *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]
  int v8; // [rsp+80h] [rbp+8h] BYREF

  v8 = a1;
  if ( dword_1C019A350 > 5u )
  {
    v5 = &v8;
    v7 = 0;
    v6 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A43F, 0LL, a4, 3u, &v4);
  }
}
