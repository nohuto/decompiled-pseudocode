/*
 * XREFs of ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180003BF0
 * Callers:
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180004010 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800041C0 (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 * Callees:
 *     ?CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@@Z @ 0x180003B68 (-CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSI.c)
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180003F34 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 *     ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1800044BC (--_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CAnimationTracking::EnsureScenario(
        CAnimationTracking *this,
        const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        const struct _GUID *a5,
        const struct CAnimationTracking::TelFrameInfo *a6,
        struct CAnimationTracking::AnimationScenarioRunningStatistics **a7)
{
  int v11; // ebx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v12; // r9
  char *v14; // rax
  char *v15; // rbx
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  wchar_t *v18; // rax
  wchar_t *v19; // r14
  wchar_t *v20; // rax
  const wchar_t *v21; // rcx
  ULONGLONG TickCount64; // rcx
  CAnimationTracking *v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // eax
  int v28; // eax
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v29[2]; // [rsp+30h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+28h]

  v29[0] = 0LL;
  v11 = 0;
  CAnimationTracking::FindScenario(this, a4, a5, v29);
  v12 = v29[0];
  if ( v29[0] )
    goto LABEL_2;
  if ( !a5
    && (!a2
     || !*((_WORD *)a2 + 17)
     || !(const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *)((char *)a2
                                                                              + *((unsigned __int16 *)a2 + 17))) )
  {
    v11 = -2147024809;
LABEL_34:
    v12 = 0LL;
    goto LABEL_2;
  }
  if ( *((_DWORD *)this + 6) >= 8u )
  {
    v11 = -2147024827;
    goto LABEL_34;
  }
  v14 = (char *)WPF::ProcessHeapImpl::AllocClear(0x140uLL);
  v15 = v14;
  if ( !v14 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v14, 0, 0x140uLL);
  *((_QWORD *)v15 + 20) = v15 + 192;
  *((_QWORD *)v15 + 21) = v15 + 192;
  *((_DWORD *)v15 + 44) = 16;
  *(_QWORD *)(v15 + 180) = 16LL;
  v29[0] = (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v15;
  if ( a5 )
  {
    *(struct _GUID *)(v15 + 4) = *a5;
  }
  else
  {
    *(_DWORD *)v15 = a4;
    if ( a3 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a3[v16] );
      v17 = v16 + 1;
      v18 = (wchar_t *)operator new(saturated_mul(v17, 2uLL));
      v19 = v18;
      if ( v18 )
      {
        if ( wcscpy_s(v18, v17, a3) )
        {
          WPF::ProcessHeapImpl::Free(v19);
          *((_QWORD *)v29[0] + 17) = a3;
          *((_QWORD *)v29[0] + 18) = 0LL;
        }
        else
        {
          v20 = wcschr(v19, 1u);
          if ( v20 )
            *v20 = 0;
          *((_QWORD *)v29[0] + 17) = v19;
          if ( v20 )
            v21 = v20 + 1;
          else
            v21 = L"0.0.0.0";
          *((_QWORD *)v29[0] + 18) = v21;
        }
      }
    }
  }
  *((_DWORD *)v29[0] + 5) = (*((_DWORD *)this + 142))++;
  *((_QWORD *)v29[0] + 6) = *((_QWORD *)a6 + 1);
  TickCount64 = GetTickCount64();
  *((_QWORD *)v29[0] + 14) = TickCount64;
  if ( a5 )
  {
    v23 = (CAnimationTracking *)(TickCount64 + 5000);
    *((_QWORD *)v29[0] + 16) = v23;
  }
  else if ( *((_DWORD *)a2 + 6) )
  {
    v23 = (CAnimationTracking *)(*((_QWORD *)v29[0] + 14) + 500LL + *((unsigned int *)a2 + 6));
    *((_QWORD *)v29[0] + 16) = v23;
  }
  else
  {
    v23 = v29[0];
    *((_QWORD *)v29[0] + 16) = *((_QWORD *)v29[0] + 14) + 5000LL;
  }
  if ( a2 )
  {
    v11 = CAnimationTracking::CopyScenarioInfo(v23, v29[0], a2);
    if ( v11 < 0 )
    {
      if ( v29[0] )
        CAnimationTracking::AnimationScenarioRunningStatistics::`scalar deleting destructor'(v29[0], v24);
      goto LABEL_34;
    }
  }
  v25 = *((unsigned int *)this + 6);
  v26 = (unsigned int)v29[0];
  v27 = v25 + 1;
  if ( (int)v25 + 1 >= (unsigned int)v25 )
    v26 = v25 + 1;
  v11 = v27 < (unsigned int)v25 ? 0x80070216 : 0;
  if ( v27 < (unsigned int)v25 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xB5u);
  }
  else if ( v26 > *((_DWORD *)this + 5) )
  {
    v28 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, v29);
    v11 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xC0u);
  }
  else
  {
    *(struct CAnimationTracking::AnimationScenarioRunningStatistics **)(*(_QWORD *)this + 8 * v25) = v29[0];
    *((_DWORD *)this + 6) = v26;
  }
  v12 = v29[0];
LABEL_2:
  *a7 = v12;
  return (unsigned int)v11;
}
