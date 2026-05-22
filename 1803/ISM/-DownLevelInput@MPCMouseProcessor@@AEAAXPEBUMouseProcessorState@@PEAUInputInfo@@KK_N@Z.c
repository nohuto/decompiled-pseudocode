/*
 * XREFs of ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x180097CAC
 * Callers:
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180097404 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000FE74 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ @ 0x180050440 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ.c)
 *     ?MPCMouseProcessor_InjectPress_@ISMTracing@@QEAAXJJKKK@Z @ 0x18009641C (-MPCMouseProcessor_InjectPress_@ISMTracing@@QEAAXJJKKK@Z.c)
 *     ?MPCMouseProcessor_InjectRelease_@ISMTracing@@QEAAXJJKKK@Z @ 0x18009650C (-MPCMouseProcessor_InjectRelease_@ISMTracing@@QEAAXJJKKK@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180099DA0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCMouseProcessor::DownLevelInput(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3,
        int a4,
        unsigned int a5,
        bool a6)
{
  int v10; // eax
  int v11; // r15d
  char v12; // al
  MPCHolographicInputManager *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  struct IMPCInputTarget *FocusedTarget; // rax
  struct IMPCInputTarget *v18; // rbx
  int v19; // eax
  __int64 v20; // rax
  bool v21; // r12
  __int64 v22; // rax
  const char *v23; // r9
  _DWORD *v24; // rcx
  ISMTracing *v25; // rcx
  _DWORD *v26; // rcx
  ISMTracing *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v32[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int64 v34; // [rsp+90h] [rbp+40h] BYREF
  struct IMPCInputTarget *v35; // [rsp+A0h] [rbp+50h] BYREF

  v32[1] = -2LL;
  *((_BYTE *)a3 + 600) = 0;
  *((_BYTE *)a3 + 500) = 0;
  if ( (!*((_QWORD *)this + 284) || *((_BYTE *)this + 2296))
    && (!*((_BYTE *)this + 3417) || *((_DWORD *)a3 + 124) == *((_DWORD *)this + 855)) )
  {
    v32[0] = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 290) + 40LL))(*((_QWORD *)this + 290), v32);
    v11 = a5;
    if ( v10 >= 0 && v32[0] && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v32[0] + 72LL))(v32[0]) )
    {
      *((_WORD *)a3 + 261) = 0;
      *((_DWORD *)a3 + 16) = *((_DWORD *)a2 + 2);
      *((_DWORD *)a3 + 17) = *((_DWORD *)a2 + 3);
      *((_BYTE *)a3 + 1730) = 0;
      v12 = 0;
    }
    else
    {
      *((_DWORD *)a3 + 16) = a4;
      *((_DWORD *)a3 + 17) = v11;
      v12 = 1;
    }
    *((_BYTE *)a3 + 1728) = v12;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetCachedFeatureEnabledState();
    LODWORD(v34) = 0;
    BYTE4(v34) = 3;
    LODWORD(v35) = 0;
    WORD2(v35) = WORD2(v34);
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetFeaturePropertyCache'::`2'::data,
      0xA019AFu,
      (const struct FEATURE_LOGGED_TRAITS *)&v35,
      1,
      3u);
    *((_BYTE *)a3 + 1729) = a6;
    v31 = 0LL;
    MPCHolographicInputManager::GetInstance();
    FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(v13, v14, v15, v16);
    v18 = FocusedTarget;
    v35 = FocusedTarget;
    if ( FocusedTarget )
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)FocusedTarget + 8LL))(FocusedTarget);
    if ( v18
      && (**(int (__fastcall ***)(struct IMPCInputTarget *, GUID *, __int64 *))v18)(
           v18,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v31) >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v31 + 56LL))(v31, &v34);
      if ( v19 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1BE,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v19);
        __debugbreak();
      }
      if ( (_DWORD)v34 )
        *((_BYTE *)a3 + 1731) = 1;
    }
    v20 = *((_QWORD *)this + 284);
    v21 = v20 != 0;
    if ( *((_BYTE *)this + 3417) )
    {
      if ( !v20 )
      {
        v26 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
        if ( v26 )
        {
          if ( *v26 )
          {
            ISMTracing::Instance();
            ISMTracing::MPCMouseProcessor_InjectRelease_(
              v27,
              a4,
              v11,
              *((_DWORD *)a2 + 4),
              *((_DWORD *)a3 + 1),
              *((_DWORD *)a3 + 124));
          }
        }
      }
    }
    else if ( v20 )
    {
      v34 = __PAIR64__(v11, a4);
      MPCHolographicInputManager::GetInstance();
      if ( !*(_BYTE *)(v22 + 2008) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x59,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCHolographicInputManager.h",
          v23);
        __debugbreak();
      }
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(v22 + 2024) + 64LL))(
        *(_QWORD *)(v22 + 2024),
        v34);
      v24 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v24 && *v24 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCMouseProcessor_InjectPress_(
          v25,
          a4,
          v11,
          *((_DWORD *)a2 + 4),
          *((_DWORD *)a3 + 1),
          *((_DWORD *)a3 + 124));
      }
    }
    *((_BYTE *)this + 3417) = v21;
    *((_DWORD *)this + 855) = *((_DWORD *)a3 + 124);
    *((_DWORD *)this + 858) = a6;
    *((_DWORD *)this + 856) = a4;
    *((_DWORD *)this + 857) = v11;
    v28 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *, struct InputInfo *))(**((_QWORD **)this + 293) + 24LL))(
            *((_QWORD *)this + 293),
            a2,
            a3);
    if ( v28 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1DA,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v28);
      __debugbreak();
    }
    if ( v18 )
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
    v29 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    v30 = v32[0];
    if ( v32[0] )
    {
      v32[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
  }
}
