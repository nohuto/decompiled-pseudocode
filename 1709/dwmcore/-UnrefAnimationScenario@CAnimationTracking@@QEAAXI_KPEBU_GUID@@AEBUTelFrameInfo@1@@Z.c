/*
 * XREFs of ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x18000433C
 * Callers:
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z @ 0x1800112C0 (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180003EC0 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180003F34 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 *     McTemplateU0zqqqqx @ 0x18012EDF8 (McTemplateU0zqqqqx.c)
 */

void __fastcall CAnimationTracking::UnrefAnimationScenario(
        CAnimationTracking *this,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        const struct CAnimationTracking::TelFrameInfo *a5)
{
  const struct _GUID *v5; // rbx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v9; // rbx
  __int64 v10; // rdi
  CAnimationTracking *v11; // rcx
  _QWORD *v12; // rax
  int v13; // esi
  unsigned int ScenarioName; // r8d
  unsigned int v15; // eax
  __int64 v16; // rax
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v17; // [rsp+40h] [rbp-128h] BYREF
  unsigned __int16 v18[128]; // [rsp+50h] [rbp-118h] BYREF

  v5 = (const struct _GUID *)a4;
  if ( a4 )
    v5 = (const struct _GUID *)(-(__int64)(memcmp_0((const void *)a4, &DirectX::g_XMZero, 0x10uLL) != 0) & a4);
  v17 = 0LL;
  if ( (unsigned int)CAnimationTracking::FindScenario(this, a2, v5, &v17) != *((_DWORD *)this + 6) )
  {
    v9 = v17;
    v10 = 0LL;
    v11 = (CAnimationTracking *)*((unsigned int *)v17 + 46);
    v12 = (_QWORD *)*((_QWORD *)v17 + 20);
    if ( (_DWORD)v11 )
    {
      do
      {
        if ( a3 == *v12 )
          break;
        v10 = (unsigned int)(v10 + 1);
        ++v12;
      }
      while ( (unsigned int)v10 < (unsigned int)v11 );
    }
    v13 = *((_DWORD *)v17 + 46);
    ScenarioName = (unsigned int)CAnimationTracking::GetScenarioName(v11, v17, v18);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0zqqqqx(
        *((_DWORD *)v9 + 5),
        *((_DWORD *)v9 + 7) - *((_DWORD *)v9 + 6),
        ScenarioName,
        *((_DWORD *)v9 + 46) - ((_DWORD)v10 != v13),
        *((_BYTE *)v9 + 28) - *((_BYTE *)v9 + 24),
        *((_DWORD *)v9 + 8),
        *((_DWORD *)v9 + 5),
        a3);
    if ( (_DWORD)v10 != v13 )
    {
      v15 = *((_DWORD *)v9 + 46);
      if ( (unsigned int)v10 >= v15 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x216u);
      }
      else
      {
        v16 = v15 - 1;
        if ( (unsigned int)v10 < (unsigned int)v16 )
          *(_QWORD *)(*((_QWORD *)v9 + 20) + 8 * v10) = *(_QWORD *)(*((_QWORD *)v9 + 20) + 8 * v16);
        --*((_DWORD *)v9 + 46);
      }
      if ( !*((_DWORD *)v9 + 46) )
        *((_QWORD *)v9 + 8) = *((_QWORD *)a5 + 1);
    }
  }
}
