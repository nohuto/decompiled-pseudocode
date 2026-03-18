/*
 * XREFs of ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180004010
 * Callers:
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x180011320 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180003BF0 (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180003E70 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180003EC0 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 *     McTemplateU0xzqqqz @ 0x18012EB44 (McTemplateU0xzqqqz.c)
 *     McTemplateU0zqqqqx @ 0x18012EDF8 (McTemplateU0zqqqqx.c)
 */

__int64 __fastcall CAnimationTracking::RefAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        const struct CAnimationTracking::TelFrameInfo *a5)
{
  int v5; // edi
  const struct _GUID *v6; // rbx
  unsigned int v9; // eax
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v10; // rbx
  unsigned int v11; // esi
  unsigned int v12; // edx
  CAnimationTracking *v13; // rcx
  unsigned int v14; // eax
  int v15; // edx
  unsigned int ScenarioName; // ebp
  ULONGLONG TickCount64; // rax
  unsigned int *v19; // rcx
  char *v20; // rax
  const unsigned __int16 *ScenarioDetails; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // [rsp+40h] [rbp-238h] BYREF
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v25; // [rsp+48h] [rbp-230h] BYREF
  unsigned __int16 v26[128]; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int16 v27[128]; // [rsp+150h] [rbp-128h] BYREF

  LOBYTE(v5) = 0;
  v24 = a3;
  v25 = 0LL;
  v6 = (const struct _GUID *)a4;
  if ( a4 )
    v6 = (const struct _GUID *)(-(__int64)(memcmp_0((const void *)a4, &DirectX::g_XMZero, 0x10uLL) != 0) & a4);
  v9 = CAnimationTracking::EnsureScenario(this, 0LL, 0LL, a2, v6, a5, &v25);
  v10 = v25;
  v11 = v9;
  if ( v25 )
  {
    v12 = v24;
    v13 = (CAnimationTracking *)*((unsigned int *)v25 + 46);
    v14 = (_DWORD)v13 + 1;
    if ( (int)v13 + 1 >= (unsigned int)v13 )
      v12 = (_DWORD)v13 + 1;
    v11 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
    if ( v14 < (unsigned int)v13 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xB5u);
    }
    else if ( v12 > *((_DWORD *)v25 + 45) )
    {
      v22 = DynArrayImpl<0>::AddMultipleAndSet((char *)v25 + 160, 8LL, 1LL, &v24);
      v11 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v25 + 20) + 8LL * (_QWORD)v13) = v24;
      *((_DWORD *)v10 + 46) = v12;
    }
    ScenarioName = (unsigned int)CAnimationTracking::GetScenarioName(v13, v10, v26);
    if ( !*((_QWORD *)v10 + 7) )
    {
      *((_QWORD *)v10 + 7) = *((_QWORD *)a5 + 1);
      TickCount64 = GetTickCount64();
      *((_QWORD *)v10 + 15) = TickCount64;
      v19 = (unsigned int *)*((_QWORD *)v10 + 19);
      if ( v19 )
      {
        if ( v19[6] )
        {
          v19 = (unsigned int *)(v19[6] + 500LL);
          v20 = (char *)v19 + TickCount64;
          if ( *((_QWORD *)v10 + 16) < (unsigned __int64)v20 )
            *((_QWORD *)v10 + 16) = v20;
        }
      }
      ScenarioDetails = CAnimationTracking::GetScenarioDetails((CAnimationTracking *)v19, v10, v27);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
      {
        v23 = *((_QWORD *)v10 + 19);
        if ( v23 )
          v5 = *(_DWORD *)(v23 + 28);
        McTemplateU0xzqqqz(
          *((_DWORD *)v10 + 14) - *((_DWORD *)v10 + 12),
          v15,
          *((_QWORD *)v10 + 7),
          ScenarioName,
          *((_BYTE *)v10 + 56) - *((_BYTE *)v10 + 48),
          *((_DWORD *)v10 + 5),
          v5,
          (__int64)ScenarioDetails);
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0zqqqqx(
        *((_DWORD *)v10 + 7) - *((_DWORD *)v10 + 6),
        v15,
        ScenarioName,
        *((_DWORD *)v10 + 46),
        *((_BYTE *)v10 + 28) - *((_BYTE *)v10 + 24),
        *((_DWORD *)v10 + 8),
        *((_DWORD *)v10 + 5),
        v24);
  }
  return v11;
}
