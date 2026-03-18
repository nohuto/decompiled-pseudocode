/*
 * XREFs of ?GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFeatures@InkDevice@@@Z @ 0x1C0218B20
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021DA00 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?ExtractReportUsages@@YAJW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@IPEBXKPEAUUsageValue@@@Z @ 0x1C0218750 (-ExtractReportUsages@@YAJW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@IPEB.c)
 */

__int64 __fastcall InkDeviceParser::GetDeviceFeatures(
        struct _HIDP_PREPARSED_DATA *a1,
        CHAR *a2,
        ULONG a3,
        const struct UsageValueInfo *a4,
        struct InkDevice::Features *a5)
{
  int ReportUsages; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v9; // edi
  int v10; // eax
  int v12; // [rsp+40h] [rbp-41h] BYREF
  ULONG v13[9]; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v14; // [rsp+6Ch] [rbp-15h]
  int v15; // [rsp+74h] [rbp-Dh]
  int v16; // [rsp+7Ch] [rbp-5h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-1h] BYREF
  int *v18; // [rsp+A0h] [rbp+1Fh]
  int v19; // [rsp+A8h] [rbp+27h]
  int v20; // [rsp+ACh] [rbp+2Bh]

  ReportUsages = ExtractReportUsages((enum _HIDP_REPORT_TYPE)a1, a1, a4, (__int64)a4, a2, a3, v13);
  v9 = ReportUsages;
  if ( ReportUsages >= 0 )
  {
    *(_DWORD *)a5 = v13[1];
    *((_DWORD *)a5 + 1) = v13[3];
    *((_DWORD *)a5 + 2) = v13[5];
    *((_DWORD *)a5 + 3) = v13[7];
    *((_DWORD *)a5 + 4) = HIWORD(v14);
    *((_DWORD *)a5 + 5) = (unsigned __int16)v14;
    v10 = 1;
    *((_DWORD *)a5 + 7) = *((_BYTE *)a4 + 380) != 0 ? v15 : 0;
    if ( *((_BYTE *)a4 + 456) )
      v10 = v16;
    *((_DWORD *)a5 + 6) = v10;
  }
  else if ( hProvider > 2u )
  {
    v20 = 0;
    v12 = ReportUsages;
    v18 = &v12;
    v19 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v7, v8, 3u, &pData);
  }
  return v9;
}
