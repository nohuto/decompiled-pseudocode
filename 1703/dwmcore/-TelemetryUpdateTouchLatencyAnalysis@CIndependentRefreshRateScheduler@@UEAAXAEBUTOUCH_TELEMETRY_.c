/*
 * XREFs of ?TelemetryUpdateTouchLatencyAnalysis@CIndependentRefreshRateScheduler@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18013E480
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800C3638 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_T.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180133ECC (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 */

void __fastcall CIndependentRefreshRateScheduler::TelemetryUpdateTouchLatencyAnalysis(
        CIndependentRefreshRateScheduler *this,
        LARGE_INTEGER *a2)
{
  __int64 v2; // r10
  unsigned int v4; // r9d
  __int64 v5; // r8
  __int64 v6; // r11
  unsigned __int64 v7; // r8
  __int64 v8; // r10
  unsigned int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // eax
  LARGE_INTEGER *updated; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 2685);
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 1248);
    v5 = 0LL;
    if ( v4 )
    {
      v6 = *(_QWORD *)(v2 + 1224);
      while ( **(_QWORD **)(v6 + 8 * v5) != a2->QuadPart )
      {
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= v4 )
          goto LABEL_6;
      }
      CTelemetryTouchLatencyAnalysis::UpdateLastTelemetryInfo(
        (CIndependentRefreshRateScheduler *)((char *)this + 22408),
        a2,
        *(LARGE_INTEGER **)(v6 + 8 * v5),
        *(_QWORD *)v2);
    }
    else
    {
LABEL_6:
      v7 = *(_QWORD *)v2;
      v14 = *((_QWORD *)this + 18);
      updated = CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
                  (CIndependentRefreshRateScheduler *)((char *)this + 22408),
                  a2,
                  v7,
                  &v14);
      if ( updated )
      {
        v8 = *((_QWORD *)this + 2685);
        v9 = (unsigned int)updated;
        v10 = *(unsigned int *)(v8 + 1248);
        v11 = v10 + 1;
        if ( (int)v10 + 1 >= (unsigned int)v10 )
          v9 = v10 + 1;
        if ( v11 < (unsigned int)v10 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11 < (unsigned int)v10 ? 0x80070216 : 0, 0xB5u);
        }
        else if ( v9 > *(_DWORD *)(v8 + 1244) )
        {
          v12 = DynArrayImpl<0>::AddMultipleAndSet(v8 + 1224, 8u, 1, &updated);
          if ( v12 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v8 + 1224) + 8 * v10) = updated;
          *(_DWORD *)(v8 + 1248) = v9;
        }
      }
    }
  }
}
