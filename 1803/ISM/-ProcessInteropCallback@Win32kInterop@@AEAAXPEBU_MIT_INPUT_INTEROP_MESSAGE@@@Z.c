/*
 * XREFs of ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180013B2C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bf22b92f2cb2d42308eb733f93f10539__void__MIT_INPUT_INTEROP_MESSAGE_const_____ptr64_::_Do_call @ 0x180016A80 (std--_Func_impl_no_alloc__lambda_bf22b92f2cb2d42308eb733f93f10539__void__MIT_INPUT__ea_180016A80.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000FE74 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ContextualInputProcessing@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180016448 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ContextualInputProcessing@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessInteropCallback(
        Win32kInterop *this,
        const struct _MIT_INPUT_INTEROP_MESSAGE *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rcx
  const struct _MIT_INPUT_INTEROP_MESSAGE *v5; // r8
  __int16 v6; // [rsp+34h] [rbp-1Ch]
  int v7; // [rsp+38h] [rbp-18h] BYREF
  __int16 v8; // [rsp+3Ch] [rbp-14h]
  const struct _MIT_INPUT_INTEROP_MESSAGE *v9; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v4 = *(unsigned int *)a2;
  v5 = a2;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xF7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        a4);
      JUMPOUT(0x180013BD5LL);
    }
  }
  else
  {
    v9 = a2;
    if ( *((_DWORD *)a2 + 6) != 4 && gbIsRunningWithCShell )
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetCachedFeatureEnabledState(v4, a2, a2);
      LOBYTE(v6) = 2;
      v8 = v6;
      v7 = 0;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetFeaturePropertyCache'::`2'::data,
        0xAABF26u,
        (const struct FEATURE_LOGGED_TRAITS *)&v7,
        0,
        3u);
      v5 = v9;
    }
  }
  ((void (__fastcall *)(const struct _MIT_INPUT_INTEROP_MESSAGE *, _QWORD))Win32kInterop::s_pfnMTCallback)(v5, 0LL);
}
