/*
 * XREFs of ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x18004AF88
 * Callers:
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004AB4C (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000B894 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCMouseProcessor_InjectPress_@ISMTracing@@QEAAXJJKKK@Z @ 0x180049FC8 (-MPCMouseProcessor_InjectPress_@ISMTracing@@QEAAXJJKKK@Z.c)
 *     ?MPCMouseProcessor_InjectRelease_@ISMTracing@@QEAAXJJKKK@Z @ 0x18004A0B8 (-MPCMouseProcessor_InjectRelease_@ISMTracing@@QEAAXJJKKK@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004C714 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@w.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ @ 0x18005906C (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
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
  int v11; // r12d
  MPCHolographicInputManager *Instance; // rax
  struct IMPCInputTarget *FocusedTarget; // rax
  struct IMPCInputTarget *v14; // rbx
  int v15; // eax
  __int64 v16; // rax
  bool v17; // r13
  _DWORD *v18; // rcx
  ISMTracing *v19; // rcx
  _DWORD *v20; // rcx
  ISMTracing *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v26[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v28; // [rsp+90h] [rbp+40h] BYREF
  __int16 v29; // [rsp+94h] [rbp+44h]
  struct IMPCInputTarget *v30; // [rsp+A0h] [rbp+50h] BYREF

  v26[1] = -2LL;
  *((_BYTE *)a3 + 776) = 0;
  *((_BYTE *)a3 + 676) = 0;
  if ( (!*((_QWORD *)this + 70) || *((_BYTE *)this + 584))
    && (!*((_BYTE *)this + 761) || *((_DWORD *)a3 + 168) == *((_DWORD *)this + 191)) )
  {
    v26[0] = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 76) + 40LL))(*((_QWORD *)this + 76), v26);
    v11 = a5;
    if ( v10 >= 0 && v26[0] && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 88LL))(v26[0]) )
    {
      *((_WORD *)a3 + 349) = 0;
      *((_DWORD *)a3 + 17) = *((_DWORD *)a2 + 2);
      *((_DWORD *)a3 + 18) = *((_DWORD *)a2 + 3);
      *((_BYTE *)a3 + 2770) = 0;
      *((_BYTE *)a3 + 2768) = 0;
    }
    else
    {
      *((_DWORD *)a3 + 17) = a4;
      *((_DWORD *)a3 + 18) = v11;
      *((_BYTE *)a3 + 2768) = 1;
    }
    if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetCachedFeatureEnabledState();
    v28 = 0;
    LOBYTE(v29) = 3;
    LODWORD(v30) = 0;
    WORD2(v30) = v29;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetFeaturePropertyCache'::`2'::data,
      0xA019AFu,
      (const struct FEATURE_LOGGED_TRAITS *)&v30,
      1,
      3);
    *((_BYTE *)a3 + 2769) = a6;
    v25 = 0LL;
    Instance = MPCHolographicInputManager::GetInstance();
    FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(Instance);
    v14 = FocusedTarget;
    v30 = FocusedTarget;
    if ( FocusedTarget )
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)FocusedTarget + 8LL))(FocusedTarget);
    if ( v14
      && (**(int (__fastcall ***)(struct IMPCInputTarget *, GUID *, __int64 *))v14)(
           v14,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v25) >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 56LL))(v25, &v28);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x18F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
      if ( v28 )
        *((_BYTE *)a3 + 2771) = 1;
    }
    v16 = *((_QWORD *)this + 70);
    v17 = v16 != 0;
    if ( *((_BYTE *)this + 761) )
    {
      if ( !v16 )
      {
        v20 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
        if ( v20 )
        {
          if ( *v20 )
          {
            ISMTracing::Instance();
            ISMTracing::MPCMouseProcessor_InjectRelease_(
              v21,
              a4,
              v11,
              *((_DWORD *)a2 + 4),
              *((_DWORD *)a3 + 1),
              *((_DWORD *)a3 + 168));
          }
        }
      }
    }
    else if ( v16 )
    {
      v18 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v18 )
      {
        if ( *v18 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCMouseProcessor_InjectPress_(
            v19,
            a4,
            v11,
            *((_DWORD *)a2 + 4),
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a3 + 168));
        }
      }
    }
    *((_BYTE *)this + 761) = v17;
    *((_DWORD *)this + 191) = *((_DWORD *)a3 + 168);
    *((_DWORD *)this + 194) = a6;
    *((_DWORD *)this + 192) = a4;
    *((_DWORD *)this + 193) = v11;
    v22 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *, struct InputInfo *))(**((_QWORD **)this + 79) + 24LL))(
            *((_QWORD *)this + 79),
            a2,
            a3);
    if ( v22 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1AA,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v22);
    if ( v14 )
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v14 + 16LL))(v14);
    v23 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = v26[0];
    if ( v26[0] )
    {
      v26[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
  }
}
