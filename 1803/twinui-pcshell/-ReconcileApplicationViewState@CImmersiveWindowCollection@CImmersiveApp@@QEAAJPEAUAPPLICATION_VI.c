/*
 * XREFs of ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18005D0A0
 * Callers:
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x18004C210 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C300 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180013FD0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180086778 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18009C5A0 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1801000E4 (-WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18012DF04 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  CFrameApplicationPresentation *v4; // rcx
  __int64 (*v5)(void); // rax
  int v6; // eax
  unsigned int v7; // r9d
  unsigned int v8; // edi
  int v9; // r8d
  void *v11; // r9
  const char *v12; // [rsp+20h] [rbp-E0h]
  signed __int32 v13; // [rsp+50h] [rbp-B0h]
  __int16 v14; // [rsp+58h] [rbp-A8h]
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+68h] [rbp-98h] BYREF
  __int16 v17; // [rsp+6Ch] [rbp-94h]
  __int128 v18; // [rsp+70h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  unsigned int v21[4]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v22; // [rsp+120h] [rbp+20h]
  _QWORD v23[2]; // [rsp+128h] [rbp+28h] BYREF
  int v24; // [rsp+138h] [rbp+38h]
  int v25; // [rsp+13Ch] [rbp+3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v20 = -2LL;
  v4 = (CFrameApplicationPresentation *)*((_QWORD *)this + 17);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 112LL);
  if ( (char *)v5 == (char *)CFrameApplicationPresentation::ReconcileApplicationViewState )
    v6 = CFrameApplicationPresentation::ReconcileApplicationViewState(v4, a2);
  else
    v6 = v5();
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AE4,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v6,
      (int)v12);
    return v8;
  }
  else
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetCachedFeatureEnabledState();
    LOBYTE(v14) = 3;
    v16 = 0;
    v17 = v14;
    v15 = 3;
    v18 = 0uLL;
    v19 = 0LL;
    do
    {
      v9 = `wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data;
      LODWORD(v18) = 0;
      if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data & 0x10000) == 0x10000 )
      {
        LODWORD(v19) = 1;
        goto LABEL_9;
      }
      v13 = `wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data | 0x10000;
      if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data & 8) == 0 )
      {
        v13 = `wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data | 0x10008;
        LODWORD(v18) = 1;
      }
    }
    while ( v9 != _InterlockedCompareExchange(
                    (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data,
                    v13,
                    `wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data) );
    LODWORD(v19) = 0;
LABEL_9:
    *(_OWORD *)v21 = v18;
    v22 = v19;
    if ( g_wil_details_recordFeatureUsage )
    {
      if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      {
        if ( (_DWORD)v18 )
          wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
            &wil::details::g_enabledStateManager,
            0x8DFABCu,
            (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data);
        if ( v21[1] )
          wil::details::WilApi_RecordFeatureUsage((wil::details *)0x8DFABC, v21[2], v21[1], v7, v12);
        if ( !(_DWORD)v22 && wil::details::g_enabledStateManager )
        {
          AcquireSRWLockExclusive(&SRWLock);
          if ( !qword_180438218 )
          {
            qword_180438218 = 0LL;
            wil::details::WilApi_SubscribeFeatureStateChangeNotification(
              (wil::details *)&qword_180438218,
              (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_,
              (void (*)(void *))0xFFFFFFFFFFFFFFFFLL,
              v11);
          }
          ReleaseSRWLockExclusive(&SRWLock);
        }
      }
      else
      {
        g_wil_details_recordFeatureUsage(
          0x8DFABCu,
          (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data,
          (struct wil_details_RecordUsageResult *)v21);
      }
      if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
      {
        v23[0] = 0LL;
        v24 = 0;
        v23[1] = 2LL;
        v25 = (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
        ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(9304764LL, 0LL, v23);
      }
    }
    if ( !(_DWORD)v22 && g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x8DFABCu,
        (const struct FEATURE_LOGGED_TRAITS *)&v16,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v15,
        0LL,
        0,
        1uLL);
    *((_DWORD *)a2 + 6) = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)((char *)this + 84), 8));
    if ( *((_DWORD *)this + 8) != -1 && *((_DWORD *)this + 17) != -1 )
      *((_DWORD *)a2 + 7) = _mm_srli_si128(*(__m128i *)(this + 48LL), 8).m128i_i32[1];
    return 0LL;
  }
}
