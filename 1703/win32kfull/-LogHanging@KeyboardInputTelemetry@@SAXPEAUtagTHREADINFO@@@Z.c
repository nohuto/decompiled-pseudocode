/*
 * XREFs of ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C020DAF0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C0105170 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall KeyboardInputTelemetry::LogHanging(struct tagTHREADINFO *a1)
{
  __int64 v1; // r8
  const wchar_t *v2; // r8
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-48h] BYREF
  wchar_t pszDest[16]; // [rsp+60h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 47);
  if ( v1 )
    v2 = (const wchar_t *)(v1 + 936);
  else
    v2 = L"Unknown";
  RtlStringCchCopyW(pszDest, 0x10uLL, v2);
  if ( dword_1C0324850 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, pszDest);
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EBDC2, v3, v4, 3u, &pData);
    }
  }
}
