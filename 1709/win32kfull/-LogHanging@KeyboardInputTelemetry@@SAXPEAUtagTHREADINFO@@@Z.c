/*
 * XREFs of ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C020F268
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00438A0 (_TlgCreateWsz.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
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

  v1 = *((_QWORD *)a1 + 50);
  if ( v1 )
    v2 = (const wchar_t *)(v1 + 944);
  else
    v2 = L"Unknown";
  RtlStringCchCopyW(pszDest, 0x10uLL, v2);
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, pszDest);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E8921, v3, v4, 3u, &pData);
    }
  }
}
