/*
 * XREFs of ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18005FEB0
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x180060230 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x1800FB088 (--0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x180251FB0 (-HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU-$IVectorView@UCoreKeyboardPo.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180252060 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 *     ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1802520F0 (-HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Found.c)
 *     ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x180252440 (-HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAPEAU-$IVectorVi.c)
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x180252930 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 *     ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Windows@@URect@45@EEPEAU645@PEAE@Z @ 0x1802533FC (-VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Window.c)
 * Callees:
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x18005FD80 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18023D880 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@.c)
 */

void __fastcall KeyboardHosting::MonitorInformation::UpdateMonitorInfo(KeyboardHosting::MonitorInformation *this)
{
  HMONITOR v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int ScaleFactorForMonitor; // eax
  RECT rcMonitor; // xmm1
  int v8; // eax
  __m128 v9; // xmm2
  __m128i v10; // xmm4
  float v11; // xmm3_4
  int v12; // eax
  float v13; // xmm4_4
  float v14; // xmm5_4
  __m128 v15; // xmm2
  __m128 v16; // xmm2
  __m128 v17; // xmm2
  signed __int32 v18; // ebx
  struct wil_details_RecordUsageResult *v19; // r9
  int v20; // [rsp+20h] [rbp-89h]
  signed __int32 v21[2]; // [rsp+50h] [rbp-59h] BYREF
  __int16 v22; // [rsp+58h] [rbp-51h]
  int v23; // [rsp+60h] [rbp-49h] BYREF
  int v24; // [rsp+68h] [rbp-41h] BYREF
  __int16 v25; // [rsp+6Ch] [rbp-3Dh]
  _QWORD v26[2]; // [rsp+70h] [rbp-39h] BYREF
  __int128 v27; // [rsp+80h] [rbp-29h] BYREF
  __int64 v28; // [rsp+90h] [rbp-19h]
  _QWORD v29[2]; // [rsp+98h] [rbp-11h] BYREF
  int v30; // [rsp+A8h] [rbp-1h]
  int v31; // [rsp+ACh] [rbp+3h]
  __int128 v32; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+17h]
  struct tagMONITORINFO mi; // [rsp+C8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  memset_0(&mi, 0, sizeof(mi));
  v2 = *(HMONITOR *)this;
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    ScaleFactorForMonitor = GetScaleFactorForMonitor(*(_QWORD *)this, (char *)this + 48);
    if ( ScaleFactorForMonitor < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\monitorinformation.cpp",
        (const char *)(unsigned int)ScaleFactorForMonitor,
        v20);
    rcMonitor = mi.rcMonitor;
    v4 = (unsigned int)_mm_cvtsi128_si32((__m128i)mi.rcMonitor);
    v3 = HIDWORD(*(_QWORD *)&mi.rcMonitor.left);
    v8 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 8));
    *(RECT *)((char *)this + 24) = mi.rcMonitor;
    v9 = (__m128)COERCE_UNSIGNED_INT((float)(int)v4);
    v10 = _mm_cvtsi32_si128(v8 - (int)v4 + 1);
    v11 = (float)(int)v3;
    v12 = *((_DWORD *)this + 12);
    LODWORD(v13) = _mm_cvtepi32_ps(v10).m128_u32[0];
    v14 = (float)(_mm_srli_si128(*(__m128i *)&rcMonitor, 8).m128i_i32[1] - v3 + 1);
    if ( v12 )
    {
      v9.m128_f32[0] = (float)(v9.m128_f32[0] * 100.0) / (float)v12;
      v11 = (float)(v11 * 100.0) / (float)v12;
      v13 = (float)(v13 * 100.0) / (float)v12;
      v14 = (float)(v14 * 100.0) / (float)v12;
    }
    v15 = _mm_shuffle_ps(v9, v9, 225);
    v15.m128_f32[0] = v11;
    v16 = _mm_shuffle_ps(v15, v15, 198);
    v16.m128_f32[0] = v13;
    v17 = _mm_shuffle_ps(v16, v16, 39);
    v17.m128_f32[0] = v14;
    *(__m128 *)((char *)this + 8) = _mm_shuffle_ps(v17, v17, 57);
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetCachedFeatureEnabledState(v4, v3, v5);
  LOBYTE(v22) = 3;
  v21[0] = 0x10000;
  v24 = 0;
  v25 = v22;
  v27 = 0uLL;
  v28 = 0LL;
  v26[0] = &v27;
  v26[1] = 0x10000LL;
  v21[1] = 0;
  v23 = 3;
  do
  {
    v21[0] = `wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data;
    v18 = `wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data;
    if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)v21, v26) )
    {
      LODWORD(v28) = 1;
      goto LABEL_12;
    }
  }
  while ( v18 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
                   v21[0],
                   v18) );
  LODWORD(v28) = 0;
LABEL_12:
  v33 = v28;
  v32 = v27;
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xA4F57D,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v32,
        v19);
    else
      g_wil_details_recordFeatureUsage(
        0xA4F57Du,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v32);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v30 = 0;
      v31 = (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      v29[0] = 0LL;
      v29[1] = 2LL;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10810749LL, 0LL, v29);
    }
  }
  if ( !(_DWORD)v33 )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xA4F57Du,
        (const struct FEATURE_LOGGED_TRAITS *)&v24,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v23,
        0LL,
        0,
        1uLL);
  }
}
