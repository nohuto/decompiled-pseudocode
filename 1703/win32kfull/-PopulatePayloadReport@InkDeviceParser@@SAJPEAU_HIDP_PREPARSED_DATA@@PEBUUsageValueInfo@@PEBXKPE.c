/*
 * XREFs of ?PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPEAXK@Z @ 0x1C0218C28
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C021D070 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall InkDeviceParser::PopulatePayloadReport(
        PHIDP_PREPARSED_DATA PreparsedData,
        const struct UsageValueInfo *a2,
        CHAR *UsageValue,
        __int64 a4,
        PCHAR Report,
        ULONG ReportLength)
{
  NTSTATUS v6; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v9; // ebx
  NTSTATUS v11; // [rsp+50h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-50h] BYREF
  NTSTATUS *v13; // [rsp+78h] [rbp-30h]
  int v14; // [rsp+80h] [rbp-28h]
  int v15; // [rsp+84h] [rbp-24h]

  *Report = *((_BYTE *)a2 + 6);
  v6 = HidP_SetUsageValueArray(
         HidP_Output,
         *((_WORD *)a2 + 2),
         *((_WORD *)a2 + 5),
         *((_WORD *)a2 + 30),
         UsageValue,
         0x48u,
         PreparsedData,
         Report,
         ReportLength);
  v9 = v6;
  if ( v6 < 0 && hProvider > 2u )
  {
    v15 = 0;
    v11 = v6;
    v13 = &v11;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v7, v8, 3u, &pData);
  }
  return v9;
}
