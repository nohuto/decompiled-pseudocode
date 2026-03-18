/*
 * XREFs of ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180065AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800C3638 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_T.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180133ECC (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryUpdateTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  __int64 v2; // r10
  unsigned int v4; // r9d
  __int64 v5; // r8
  unsigned __int64 v6; // r8
  __int64 v7; // r10
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // r11
  struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *updated; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 2685);
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 1248);
    v5 = 0LL;
    if ( v4 )
    {
      v12 = *(_QWORD *)(v2 + 1224);
      while ( **(_QWORD **)(v12 + 8 * v5) != *(_QWORD *)a2 )
      {
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= v4 )
          goto LABEL_3;
      }
      CTelemetryTouchLatencyAnalysis::UpdateLastTelemetryInfo(
        (CPartitionVerticalBlankScheduler *)((char *)this + 22408),
        a2,
        *(struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(v12 + 8 * v5),
        *(_QWORD *)v2);
    }
    else
    {
LABEL_3:
      v6 = *(_QWORD *)v2;
      v14 = *((_QWORD *)this + 18);
      updated = CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
                  (CPartitionVerticalBlankScheduler *)((char *)this + 22408),
                  a2,
                  v6,
                  &v14);
      if ( updated )
      {
        v7 = *((_QWORD *)this + 2685);
        v8 = (unsigned int)updated;
        v9 = *(unsigned int *)(v7 + 1248);
        v10 = v9 + 1;
        if ( (int)v9 + 1 >= (unsigned int)v9 )
          v8 = v9 + 1;
        if ( v10 < (unsigned int)v9 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10 < (unsigned int)v9 ? 0x80070216 : 0, 0xB5u);
        }
        else if ( v8 <= *(_DWORD *)(v7 + 1244) )
        {
          *(_QWORD *)(*(_QWORD *)(v7 + 1224) + 8 * v9) = updated;
          *(_DWORD *)(v7 + 1248) = v8;
        }
        else
        {
          v11 = DynArrayImpl<0>::AddMultipleAndSet(v7 + 1224, 8LL, 1LL, &updated);
          if ( v11 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
        }
      }
    }
  }
}
