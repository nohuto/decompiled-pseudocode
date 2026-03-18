/*
 * XREFs of ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C021D070
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C021D314 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C021D654 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C0209F04 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 *     ?PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPEAXK@Z @ 0x1C0218C28 (-PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPE.c)
 *     ?PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z @ 0x1C021DF18 (-PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z.c)
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
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  char v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  CHAR v19[80]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v23; // [rsp+E0h] [rbp-20h] BYREF
  int *v24; // [rsp+100h] [rbp+0h]
  __int64 v25; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v28; // [rsp+130h] [rbp+30h]
  __int64 v29; // [rsp+138h] [rbp+38h]
  char *v30; // [rsp+140h] [rbp+40h]
  __int64 v31; // [rsp+148h] [rbp+48h]
  __int64 *v32; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+158h] [rbp+58h]
  CHAR *v34; // [rsp+160h] [rbp+60h]
  __int64 v35; // [rsp+168h] [rbp+68h] BYREF

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
           v19,
           (__int64)v11,
           *(PCHAR *)(a1 + 160),
           *(unsigned __int16 *)(v7 + 46));
    v12 = v9;
    if ( v9 >= 0 )
    {
      v9 = Rim::RimBackedDeviceBase::SendSynchronousIoControl(
             (Rim::RimBackedDeviceBase *)a1,
             721301LL,
             *(_QWORD *)(a1 + 160),
             *(unsigned __int16 *)(v7 + 46),
             0LL,
             0,
             0LL);
      v12 = v9;
      if ( v9 >= 0 )
      {
        if ( hProvider > 4u )
        {
          v17 = 0;
          v24 = &v17;
          v25 = 4LL;
          TlgCreateSz(&pDesc, "Sent super-wet ink payload");
          TlgCreateSz(&v27, *(LPCSTR *)(a1 + 80));
          v29 = 8LL;
          v28 = &v18;
          v18 = a1 + 32;
          v30 = &v16;
          v32 = &v35;
          v34 = v19;
          v16 = v5;
          v31 = 1LL;
          v33 = 2LL;
          v35 = 72LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC96D, v13, v14, 9u, &v23);
        }
      }
      else if ( hProvider > 2u )
      {
LABEL_12:
        v17 = v9;
        v21 = &v17;
        v22 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v10, v11, 3u, &pData);
      }
    }
    else if ( hProvider > 2u )
    {
      goto LABEL_12;
    }
  }
  else if ( hProvider > 2u )
  {
    goto LABEL_12;
  }
  return v12;
}
