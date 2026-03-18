/*
 * XREFs of ?ExtractReportUsages@@YAJW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@IPEBXKPEAUUsageValue@@@Z @ 0x1C0219948
 * Callers:
 *     ?GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFeatures@InkDevice@@@Z @ 0x1C0219D08 (-GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFe.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall ExtractReportUsages(
        enum _HIDP_REPORT_TYPE a1,
        struct _HIDP_PREPARSED_DATA *a2,
        const struct UsageValueInfo *a3,
        __int64 a4,
        CHAR *Report,
        ULONG ReportLength,
        ULONG *a7)
{
  USHORT *v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // rbp
  ULONG *i; // rdi
  NTSTATUS UsageValue; // eax
  const GUID *v13; // r8
  const GUID *v14; // r9
  NTSTATUS v16; // [rsp+40h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-70h] BYREF
  NTSTATUS *v18; // [rsp+68h] [rbp-50h]
  int v19; // [rsp+70h] [rbp-48h]
  int v20; // [rsp+74h] [rbp-44h]

  v7 = (USHORT *)((char *)a3 + 10);
  v8 = 0;
  v9 = 0LL;
  for ( i = a7; ; i += 2 )
  {
    *(_BYTE *)i = 0;
    if ( *((_BYTE *)v7 - 10) )
      break;
LABEL_5:
    v9 = (unsigned int)(v9 + 1);
    v7 += 38;
    if ( (unsigned int)v9 >= 7 )
      return v8;
  }
  UsageValue = HidP_GetUsageValue(HidP_Feature, *(v7 - 3), *v7, v7[25], &a7[2 * v9 + 1], a2, Report, ReportLength);
  v8 = UsageValue;
  if ( UsageValue >= 0 )
  {
    *(_BYTE *)i = 1;
    goto LABEL_5;
  }
  if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v20 = 0;
    v16 = UsageValue;
    v18 = &v16;
    v19 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v13, v14, 3u, &pData);
  }
  return v8;
}
