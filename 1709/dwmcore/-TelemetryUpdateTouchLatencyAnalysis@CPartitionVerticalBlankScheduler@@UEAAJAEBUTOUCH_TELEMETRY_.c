/*
 * XREFs of ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180126750
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180126338 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     McTemplateU0xxxxxqqx @ 0x180126FAC (McTemplateU0xxxxxqqx.c)
 *     ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18012B77C (-IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_KPEAPEAUTouchUpdateInfo@1@@Z @ 0x18012CE38 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x18012D2A8 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x180134600 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::TelemetryUpdateTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebp
  unsigned int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // r14
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r12
  int v11; // edx
  int v12; // ecx
  __int64 v13; // rbx
  unsigned __int64 v14; // r9
  unsigned __int64 *v15; // r8
  signed int updated; // eax
  __int64 v17; // r10
  unsigned int v18; // r8d
  __int64 v19; // rdx
  unsigned int v20; // ecx
  unsigned int v22; // [rsp+20h] [rbp-68h]
  struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v23; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+A0h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 2625);
  v3 = 0;
  if ( v2 )
  {
    v6 = *(_DWORD *)(v2 + 1232);
    v7 = 0LL;
    if ( v6 )
    {
      v8 = *(_QWORD *)(v2 + 1208);
      while ( 1 )
      {
        v9 = *(_QWORD **)(v8 + 8 * v7);
        if ( v9 )
        {
          if ( *v9 == *(_QWORD *)a2 )
            break;
        }
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v6 )
          goto LABEL_14;
      }
      v10 = *(_QWORD *)v2;
      if ( !CTelemetryTouchLatencyAnalysis::IsManipulationStateChange(
              (CPartitionVerticalBlankScheduler *)((char *)this + 21928),
              a2,
              *(_QWORD *)v2) )
      {
        CTelemetryTouchLatencyAnalysis::UpdateLastTelemetryInfo(
          (CPartitionVerticalBlankScheduler *)((char *)this + 21928),
          a2,
          *(struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(v8 + 8 * v7),
          v10);
        return v3;
      }
      v13 = *(_QWORD *)(v8 + 8 * v7);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xxxxxqqx(
          v12,
          v11,
          *(_QWORD *)v13,
          *(_QWORD *)(v13 + 8),
          *(_QWORD *)(v13 + 16),
          *(_QWORD *)(v13 + 24),
          *(_QWORD *)(v13 + 32),
          *(_DWORD *)(v13 + 40),
          *(_DWORD *)(v13 + 44),
          v10);
      DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(
        *((_QWORD *)this + 2625) + 1208LL,
        (unsigned int)v7);
      if ( v13 )
        CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'((CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *)v13);
    }
LABEL_14:
    v14 = *((_QWORD *)this + 11);
    v23 = 0LL;
    v15 = (unsigned __int64 *)*((_QWORD *)this + 2625);
    v24 = 10000000 * (v14 / g_qpcFrequency.QuadPart)
        + 10000000 * (v14 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    updated = CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
                (CPartitionVerticalBlankScheduler *)((char *)this + 21928),
                a2,
                *v15,
                &v24,
                &v23);
    v3 = updated;
    if ( updated < 0 )
    {
      v22 = 2419;
    }
    else
    {
      if ( !v23 )
        return v3;
      v17 = *((_QWORD *)this + 2625);
      v18 = (unsigned int)v23;
      v19 = *(unsigned int *)(v17 + 1232);
      v20 = v19 + 1;
      if ( (int)v19 + 1 >= (unsigned int)v19 )
        v18 = v19 + 1;
      if ( v20 < (unsigned int)v19 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20 < (unsigned int)v19 ? 0x80070216 : 0, 0xB5u);
        return v3;
      }
      if ( v18 <= *(_DWORD *)(v17 + 1228) )
      {
        *(_QWORD *)(*(_QWORD *)(v17 + 1208) + 8 * v19) = v23;
        *(_DWORD *)(v17 + 1232) = v18;
        return v3;
      }
      updated = DynArrayImpl<0>::AddMultipleAndSet(v17 + 1208, 8u, 1, &v23);
      if ( updated >= 0 )
        return v3;
      v22 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, v22);
  }
  return v3;
}
