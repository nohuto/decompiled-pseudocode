/*
 * XREFs of ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800BA998
 * Callers:
 *     ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x180065A10 (-TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEME.c)
 *     ?TelemetryBeginAnimationScenario@CIndependentRefreshRateScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x18013E260 (-TelemetryBeginAnimationScenario@CIndependentRefreshRateScheduler@@UEAAJIPEBUDCOMPOSITION_TELEME.c)
 * Callees:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B9C94 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@@Z @ 0x1800BA26C (-CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSI.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800BA2F4 (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800BA694 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 */

__int64 __fastcall CAnimationTracking::BeginAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *a3,
        unsigned __int16 *a4,
        const struct CAnimationTracking::TelFrameInfo *a5)
{
  unsigned int v7; // ebp
  char v8; // r15
  const struct _GUID *v9; // rdi
  unsigned int Scenario; // eax
  CAnimationTracking *v11; // rcx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v12; // rbx
  unsigned int v13; // r12d
  const struct CAnimationTracking::TelFrameInfo *v14; // r13
  ULONGLONG TickCount64; // rax
  __int64 v16; // rdx
  bool v17; // r8
  unsigned __int16 v18; // cx
  ULONGLONG v19; // r9
  char v20; // cl
  unsigned __int64 v21; // rcx
  __int64 result; // rax
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v24; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int16 *v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v7 = 0;
  v8 = 0;
  if ( !*((_WORD *)a3 + 16) )
  {
    v9 = 0LL;
    goto LABEL_3;
  }
  v9 = (const struct _GUID *)((char *)a3 + *((unsigned __int16 *)a3 + 16));
  if ( !v9 )
    goto LABEL_3;
  result = *(_QWORD *)&v9->Data1 - 0x44BB208FE62595E5LL;
  if ( *(_QWORD *)&v9->Data1 == 0x44BB208FE62595E5LL )
    result = *(_QWORD *)v9->Data4 + 0x4B86CD2C8F080E7DLL;
  if ( result )
  {
LABEL_3:
    v24 = 0LL;
    Scenario = CAnimationTracking::FindScenario(this, a2, v9, &v24);
    v12 = v24;
    v13 = Scenario;
    v14 = a5;
    if ( v24 )
    {
      if ( v9 )
      {
        if ( *((_QWORD *)v24 + 19) && *((_QWORD *)v24 + 7) )
          return v7;
        v7 = CAnimationTracking::CopyScenarioInfo(v11, v24, a3);
      }
      else
      {
        TickCount64 = GetTickCount64();
        v16 = *((_QWORD *)v12 + 19);
        v17 = 0;
        v18 = *((_WORD *)a3 + 2);
        if ( *(_WORD *)(v16 + 4) < v18 )
          goto LABEL_21;
        if ( *(_WORD *)(v16 + 4) == v18 )
        {
          v19 = *(unsigned int *)(v16 + 24);
          if ( (_DWORD)v19 )
          {
            if ( *((_QWORD *)v12 + 7) )
              v17 = TickCount64 - *((_QWORD *)v12 + 15) > v19;
            else
              v17 = (unsigned int)v19 < *((_DWORD *)a3 + 6);
          }
          v20 = v17;
          if ( TickCount64 + *((unsigned int *)a3 + 6) > *((_QWORD *)v12 + 16) )
            v20 = 1;
          if ( v20 )
          {
LABEL_21:
            CAnimationTracking::StopAnalyzingAnimationScenario(this, v13, v14);
            v24 = 0LL;
            return (unsigned int)CAnimationTracking::EnsureScenario(this, a3, v25, a2, v9, v14, &v24);
          }
        }
        v21 = TickCount64 + *((unsigned int *)a3 + 6);
        if ( v21 > *((_QWORD *)v12 + 14) + 5000LL )
          v21 = *((_QWORD *)v12 + 14) + 5000LL;
        if ( *((_QWORD *)v12 + 16) >= v21 )
          return v7;
        *((_QWORD *)v12 + 16) = v21;
      }
    }
    else
    {
      v8 = 1;
    }
    if ( (v7 & 0x80000000) != 0 || !v8 )
      return v7;
    return (unsigned int)CAnimationTracking::EnsureScenario(this, a3, v25, a2, v9, v14, &v24);
  }
  return result;
}
