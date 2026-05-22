/*
 * XREFs of ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x18000F3B8
 * Callers:
 *     std::_Func_impl__lambda_fa86bfeb1a385238886508a1c813988d__std::allocator_int__void__MIT_INPUT_INTEROP_MESSAGE_const_____ptr64_::_Do_call @ 0x180012370 (std--_Func_impl__lambda_fa86bfeb1a385238886508a1c813988d__std--allocator_int__void__ea_180012370.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000B894 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ContextualInputProcessing@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180011D68 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ContextualInputProcessing@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessInteropCallback(
        Win32kInterop *this,
        const struct _MIT_INPUT_INTEROP_MESSAGE *a2,
        __int64 a3,
        const char *a4)
{
  __int16 v5; // [rsp+34h] [rbp-24h]
  int v6; // [rsp+38h] [rbp-20h] BYREF
  __int16 v7; // [rsp+3Ch] [rbp-1Ch]
  __int64 v8; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = -2LL;
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 != 1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x187,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        a4);
      __debugbreak();
    }
  }
  else if ( (gdwMitConfig & 7) != 0 && gbIsRunningWithCShell )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetCachedFeatureEnabledState();
    LOBYTE(v5) = 0;
    v6 = 0;
    v7 = v5;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetFeaturePropertyCache'::`2'::data,
      0xAABF26u,
      (const struct FEATURE_LOGGED_TRAITS *)&v6,
      0,
      3);
  }
  ((void (__fastcall *)(const struct _MIT_INPUT_INTEROP_MESSAGE *, _QWORD))Win32kInterop::s_pfnMTCallback)(a2, 0LL);
}
