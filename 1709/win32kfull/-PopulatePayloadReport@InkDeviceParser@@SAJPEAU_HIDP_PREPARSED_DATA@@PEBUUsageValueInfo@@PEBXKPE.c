/*
 * XREFs of ?PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPEAXK@Z @ 0x1C0219E10
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C021E350 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall InkDeviceParser::PopulatePayloadReport(
        struct _HIDP_PREPARSED_DATA *a1,
        const struct UsageValueInfo *a2,
        CHAR *a3,
        __int64 a4,
        CHAR *a5,
        ULONG ReportLength)
{
  NTSTATUS v6; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v9; // ebx
  NTSTATUS v11; // [rsp+50h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-40h] BYREF
  NTSTATUS *v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+80h] [rbp-18h]
  int v15; // [rsp+84h] [rbp-14h]

  *a5 = *((_BYTE *)a2 + 6);
  v6 = HidP_SetUsageValueArray(
         HidP_Output,
         *((_WORD *)a2 + 2),
         *((_WORD *)a2 + 5),
         *((_WORD *)a2 + 30),
         a3,
         0x48u,
         a1,
         a5,
         ReportLength);
  v9 = v6;
  if ( v6 < 0 && (unsigned int)pRelatedActivityId > 2 )
  {
    v15 = 0;
    v11 = v6;
    v13 = &v11;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v7, v8, 3u, &pData);
  }
  return v9;
}
