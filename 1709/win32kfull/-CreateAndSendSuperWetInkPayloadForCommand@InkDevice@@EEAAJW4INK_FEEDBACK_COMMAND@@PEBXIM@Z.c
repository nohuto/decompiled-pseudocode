/*
 * XREFs of ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C021E350
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C021E5EC (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C021E938 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0043700 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C020BC94 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 *     ?PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPEAXK@Z @ 0x1C0219E10 (-PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPE.c)
 *     ?PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z @ 0x1C021F218 (-PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z.c)
 */

__int64 __fastcall InkDevice::CreateAndSendSuperWetInkPayloadForCommand(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v4; // rsi
  char v5; // r14
  __int64 v7; // rsi
  struct _HIDP_PREPARSED_DATA *v8; // r15
  int v9; // eax
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v12; // ebx
  const CHAR *v13; // rdx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  char v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  CHAR v20[80]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v24; // [rsp+D0h] [rbp-30h] BYREF
  int *v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h]
  const char *v27; // [rsp+100h] [rbp+0h]
  __int64 v28; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v30; // [rsp+120h] [rbp+20h]
  __int64 v31; // [rsp+128h] [rbp+28h]
  char *v32; // [rsp+130h] [rbp+30h]
  __int64 v33; // [rsp+138h] [rbp+38h]
  __int64 *v34; // [rsp+140h] [rbp+40h]
  __int64 v35; // [rsp+148h] [rbp+48h]
  CHAR *v36; // [rsp+150h] [rbp+50h]
  __int64 v37; // [rsp+158h] [rbp+58h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v5 = a2;
  if ( v4 )
    v7 = *(_QWORD *)(v4 + 520);
  else
    v7 = 0LL;
  v8 = *(struct _HIDP_PREPARSED_DATA **)(v7 + 16);
  v9 = Protocols::SuperWetInk::PopulatePayloadV1(a2, a3, a4);
  v12 = v9;
  if ( v9 >= 0 )
  {
    v9 = InkDeviceParser::PopulatePayloadReport(
           v8,
           *(const struct UsageValueInfo **)(a1 + 152),
           v20,
           (__int64)v11,
           *(CHAR **)(a1 + 160),
           *(unsigned __int16 *)(v7 + 46));
    v12 = v9;
    if ( v9 >= 0 )
    {
      v9 = Rim::RimBackedDeviceBase::SendSynchronousIoControl(
             (Rim::RimBackedDeviceBase *)a1,
             0xB0195u,
             *(_QWORD *)(a1 + 160),
             *(unsigned __int16 *)(v7 + 46),
             0LL,
             0,
             0LL);
      v12 = v9;
      if ( v9 >= 0 )
      {
        if ( (unsigned int)pRelatedActivityId > 4 )
        {
          v13 = *(const CHAR **)(a1 + 80);
          v25 = &v18;
          v18 = 0;
          v27 = "Sent super-wet ink payload";
          v26 = 4LL;
          v28 = 27LL;
          TlgCreateSz(&pDesc, v13);
          v31 = 8LL;
          v30 = &v19;
          v19 = a1 + 32;
          v32 = &v17;
          v34 = &v37;
          v36 = v20;
          v17 = v5;
          v33 = 1LL;
          v35 = 2LL;
          v37 = 72LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9454, v14, v15, 9u, &v24);
        }
      }
      else if ( (unsigned int)pRelatedActivityId > 2 )
      {
LABEL_12:
        v18 = v9;
        v22 = &v18;
        v23 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v10, v11, 3u, &pData);
      }
    }
    else if ( (unsigned int)pRelatedActivityId > 2 )
    {
      goto LABEL_12;
    }
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    goto LABEL_12;
  }
  return v12;
}
