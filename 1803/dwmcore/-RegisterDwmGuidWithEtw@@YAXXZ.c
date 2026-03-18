/*
 * XREFs of ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800CF0B4
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800CEF68 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1800C8388 (TraceLoggingRegisterEx.c)
 *     McGenEventRegister @ 0x1800CF088 (McGenEventRegister.c)
 *     _TlgCreateWsz @ 0x1800D176C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800D1A30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

void RegisterDwmGuidWithEtw(void)
{
  TLG_PENABLECALLBACK v0; // rdx
  PVOID v1; // r8
  TLG_PENABLECALLBACK v2; // rdx
  PVOID v3; // r8
  TLG_PENABLECALLBACK v4; // rdx
  PVOID v5; // r8
  TLG_PENABLECALLBACK v6; // rdx
  PVOID v7; // r8
  DWORD CurrentProcessId; // eax
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
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1802D3FE0, v0, v1);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1802D3F60, v2, v3);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1802D3FA0, v4, v5);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, v6, v7);
  EventActivityIdControl(3u, &gDwmCoreTelemetryActivityId);
  pSessionId = 0;
  CurrentProcessId = GetCurrentProcessId();
  if ( ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
  {
    memset_0(Value, 0, 0x44uLL);
    pdwType = pSessionId;
    if ( StringCchPrintfW(Value, 0x22uLL, L"%s_%08X", L"DwmInitSessionActivityId", pdwType) >= 0 )
    {
      memset_0(pwsz, 0, 0x4AuLL);
      pcbData[0] = 74;
      if ( !RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", Value, 2u, 0LL, pwsz, pcbData)
        && dword_1802D3FA0 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FA0, 0x400000000000uLL) )
        {
          v15 = 0;
          v13 = &gDwmCoreTelemetryActivityId;
          v14 = 16;
          TlgCreateWsz(&pDesc, pwsz);
          TlgWrite((TraceLoggingHProvider)&dword_1802D3FA0, &unk_1802A9BB9, 0LL, 0LL, 4u, &pData);
        }
      }
    }
  }
}
