/*
 * XREFs of RtlpHpTlLogGCTimerFinished @ 0x180105F28
 * Callers:
 *     RtlpHpGCCallback @ 0x1800128E0 (RtlpHpGCCallback.c)
 * Callees:
 *     _TlgWrite @ 0x18007F4CC (_TlgWrite.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall RtlpHpTlLogGCTimerFinished(__int64 a1, __int64 a2, const GUID *a3, const GUID *a4)
{
  TLG_STATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_180159580 > 5 )
    return TlgWrite((TraceLoggingHProvider)&dword_180159580, &unk_180126CD8, a3, a4, 2u, &pData);
  return result;
}
