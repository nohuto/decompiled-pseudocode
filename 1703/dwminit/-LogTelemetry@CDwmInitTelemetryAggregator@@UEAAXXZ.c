/*
 * XREFs of ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x180001360
 * Callers:
 *     ??_GCDwmInitTelemetryAggregator@@UEAAPEAXI@Z @ 0x1800014A0 (--_GCDwmInitTelemetryAggregator@@UEAAPEAXI@Z.c)
 *     DllMain @ 0x180001644 (DllMain.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180002734 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A00 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpTerminateSessionProcess @ 0x1800032E0 (DwmpTerminateSessionProcess.c)
 *     ??1?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAA@XZ @ 0x180003598 (--1-$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A.c)
 *     ?Flush@?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAX_N@Z @ 0x180003650 (-Flush@-$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A.c)
 *     ?Log@?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAX_N@Z @ 0x1800036B0 (-Log@-$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$.c)
 *     ?AddData@?$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAXW4DwmInitTelemetryAggregateType@@I_N1@Z @ 0x180003740 (-AddData@-$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateTyp.c)
 *     ?ResetCounter@?$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAX_N@Z @ 0x180003800 (-ResetCounter@-$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggrega.c)
 *     ?SetCounter@?$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAXK@Z @ 0x180003860 (-SetCounter@-$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregate.c)
 * Callees:
 *     _TlgWrite @ 0x180001078 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180006270 (__security_check_cookie.c)
 */

void __fastcall CDwmInitTelemetryAggregator::LogTelemetry(CDwmInitTelemetryAggregator *this)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-69h] BYREF
  GUID *v2; // [rsp+50h] [rbp-49h]
  __int64 v3; // [rsp+58h] [rbp-41h]
  char *v4; // [rsp+60h] [rbp-39h]
  __int64 v5; // [rsp+68h] [rbp-31h]
  char *v6; // [rsp+70h] [rbp-29h]
  __int64 v7; // [rsp+78h] [rbp-21h]
  char *v8; // [rsp+80h] [rbp-19h]
  __int64 v9; // [rsp+88h] [rbp-11h]
  char *v10; // [rsp+90h] [rbp-9h]
  __int64 v11; // [rsp+98h] [rbp-1h]
  GUID *v12; // [rsp+A0h] [rbp+7h]
  __int64 v13; // [rsp+A8h] [rbp+Fh]
  unsigned __int16 *v14; // [rsp+B0h] [rbp+17h]
  __int64 v15; // [rsp+B8h] [rbp+1Fh]
  unsigned __int16 *v16; // [rsp+C0h] [rbp+27h]
  __int64 v17; // [rsp+C8h] [rbp+2Fh]

  if ( (*((_DWORD *)this + 2) || *((_DWORD *)this + 3) || *((_DWORD *)this + 4) || *((_DWORD *)this + 5))
    && hProvider > 5u
    && (qword_18000C010 & 0x400000000000LL) != 0
    && (qword_18000C018 & 0x400000000000LL) == qword_18000C018 )
  {
    v3 = 16LL;
    v2 = &gDwmInitTelemetryActivityId;
    v6 = (char *)this + 12;
    v8 = (char *)this + 16;
    v10 = (char *)this + 20;
    v12 = &gDwmInitTargetAppSessionGuid;
    v14 = &gBootId;
    v16 = &gSessionId;
    v4 = (char *)this + 8;
    v5 = 4LL;
    v7 = 4LL;
    v9 = 4LL;
    v11 = 4LL;
    v13 = 16LL;
    v15 = 2LL;
    v17 = 2LL;
    TlgWrite(
      (TraceLoggingHProvider)&hProvider,
      &unk_180009741,
      (LPCGUID)((char *)this + 8),
      (LPCGUID)0x400000000000LL,
      0xAu,
      &pData);
  }
}
