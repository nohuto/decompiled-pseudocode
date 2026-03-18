/*
 * XREFs of ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x18018EF54
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800BFF28 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001EA4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     McGenEventRegister @ 0x18018F244 (McGenEventRegister.c)
 *     TraceLoggingRegisterEx @ 0x18018F270 (TraceLoggingRegisterEx.c)
 */

void RegisterDwmGuidWithEtw(void)
{
  TLG_PENABLECALLBACK v0; // rdx
  PVOID v1; // r8
  TLG_PENABLECALLBACK v2; // rdx
  PVOID v3; // r8
  TLG_PENABLECALLBACK v4; // rdx
  PVOID v5; // r8
  DWORD CurrentProcessId; // eax
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  DWORD pdwType; // [rsp+20h] [rbp-E0h]
  DWORD pSessionId; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData[3]; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  GUID *v13; // [rsp+70h] [rbp-90h]
  int v14; // [rsp+78h] [rbp-88h]
  int v15; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  WCHAR Value[40]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR pwsz[40]; // [rsp+E0h] [rbp-20h] BYREF

  McGenEventRegister();
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18026D7B0, v0, v1);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18026D7F0, v2, v3);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, v4, v5);
  EventActivityIdControl(3u, &gDwmCoreTelemetryActivityId);
  pSessionId = 0;
  CurrentProcessId = GetCurrentProcessId();
  if ( ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
  {
    memset_0(Value, 0, 0x44uLL);
    pdwType = pSessionId;
    if ( (int)StringCchPrintfW(Value, 0x22uLL, (size_t *)L"%s_%08X", L"DwmInitSessionActivityId", pdwType) >= 0 )
    {
      memset_0(pwsz, 0, 0x4AuLL);
      pcbData[0] = 74;
      if ( !RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", Value, 2u, 0LL, pwsz, pcbData)
        && hProvider > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
        {
          v15 = 0;
          v13 = &gDwmCoreTelemetryActivityId;
          v14 = 16;
          TlgCreateWsz(&pDesc, pwsz);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180214C1E, v7, v8, 4u, &pData);
        }
      }
    }
  }
}
