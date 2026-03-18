/*
 * XREFs of ?TraceUninitializeStart@Log@CoreMessagingK@@SAXXZ @ 0x1C01651FC
 * Callers:
 *     CoreMsgUninitialize @ 0x1C0165668 (CoreMsgUninitialize.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::Log::TraceUninitializeStart(__int64 a1, __int64 a2, __int64 a3, const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( dword_1C019A350 > 5u )
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A41D, 0LL, a4, 2u, &pData);
}
