/*
 * XREFs of _lambda_b779afd378c092c5f4a266c8bd9e00ae_::operator() @ 0x18002480C
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_b779afd378c092c5f4a266c8bd9e00ae__0__wistd::details::function_allocator_wistd::_Func_class_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180027D70 (wistd--_Func_impl_wistd--_Callable_obj__lambda_b779afd378c092c5f4a266c8bd9e00ae__0__ea_180027D70.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18001296C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180020390 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableTDLCachingNonMobile@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180027228 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DisableTDLCachingNonMobile@@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180027E4C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180027E80 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_b779afd378c092c5f4a266c8bd9e00ae_::operator()(__int64 **a1)
{
  __int64 *v1; // rax
  int v3; // eax
  int v4; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdi
  const char *v12; // r9
  char v13; // al
  int v14; // eax
  __int64 v15; // rcx
  int v17; // [rsp+20h] [rbp-50h]
  PSRWLOCK SRWLock; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h]
  __int16 v20; // [rsp+5Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int v22; // [rsp+A0h] [rbp+30h] BYREF
  int v23; // [rsp+A8h] [rbp+38h] BYREF
  int v24; // [rsp+B0h] [rbp+40h] BYREF
  __int16 v25; // [rsp+B4h] [rbp+44h]
  __int64 v26; // [rsp+B8h] [rbp+48h] BYREF

  v1 = *a1;
  v26 = 0LL;
  v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*v1)(
         *v1,
         &GUID_e0cae81b_625e_400d_9ded_4e4956f6fb9d,
         &v26);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 497LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)v5);
    goto LABEL_26;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v26 + 24LL))(v26, *(unsigned int *)a1[1], *a1[2]);
  if ( v7 >= 0 )
  {
    v9 = **a1;
    v10 = *a1[3];
    v11 = *a1[4];
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetCachedFeatureEnabledState();
    LOBYTE(v20) = 3;
    v24 = 0;
    v25 = v20;
    v19 = 0;
    v22 = 3;
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                         &`wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetFeaturePropertyCache'::`2'::data,
                         v8,
                         2)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0x9CF67Eu,
        (const struct FEATURE_LOGGED_TRAITS *)&v24,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v22,
        0LL,
        0,
        1uLL);
    }
    if ( `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::hasChecked )
    {
      v13 = `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::isMobilePlatform;
    }
    else
    {
      RtlGetDeviceFamilyInfoEnum(0LL, &v23, 0LL);
      `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::hasChecked = 1;
      v13 = v23 == 4;
      `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::isMobilePlatform = v23 == 4;
    }
    if ( !v13 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x61E,
        (unsigned int)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        v12);
      JUMPOUT(0x180024A40LL);
    }
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(
      &TileDataLayerItemWrappers::MRTCacheManagerInternal::s_MRTCacheLock,
      &SRWLock);
    if ( TileDataLayerItemWrappers::MRTCacheManagerInternal::s_currentMRTStateHash == v11
      && (v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 72LL))(v10, v9), v4 = v14, v14 < 0) )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x629,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v14);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    else
    {
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      v4 = 0;
    }
    if ( v4 < 0 )
    {
      v5 = (unsigned int)v4;
      v6 = 506LL;
      goto LABEL_24;
    }
    v4 = 0;
  }
  else
  {
    v4 = -2147467263;
    if ( v7 != -2147467263 )
      v4 = wil::details::in1diag3::Log_Hr(
             retaddr,
             (void *)0x1F8,
             (unsigned int)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
             (const char *)(unsigned int)v7,
             v17);
  }
LABEL_26:
  v15 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)v4;
}
