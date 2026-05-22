/*
 * XREFs of ?OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x180080700
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18007E750 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_9dc6733fa87e68844c7fb1a5f699f8b6__void__MIT_POINTER_INPUT_DOWN_MESSAGE_const_____ptr64_::_Do_call @ 0x180081E40 (std--_Func_impl_no_alloc__lambda_9dc6733fa87e68844c7fb1a5f699f8b6__void__MIT_POINTE_ea_180081E40.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000FE74 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ContextualInputProcessing@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180016448 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ContextualInputProcessing@@@.c)
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x18002535C (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::OnPointerInputDown(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v8; // rbp
  int v11; // [rsp+40h] [rbp-28h] BYREF
  __int16 v12; // [rsp+44h] [rbp-24h]
  __int16 v13; // [rsp+74h] [rbp+Ch]

  v8 = a2;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64))(**(_QWORD **)(a1 + 336) + 40LL))(
    *(_QWORD *)(a1 + 336),
    a4,
    (unsigned int)a6,
    HIDWORD(a6));
  InputAttemptedTargetManager::ProcessInputAttempt((InputAttemptedTargetManager *)(*(_QWORD *)(a1 + 344) + 64LL), v8);
  if ( gbIsRunningWithCShell )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetCachedFeatureEnabledState();
    LOBYTE(v13) = 2;
    v11 = 0;
    v12 = v13;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetFeaturePropertyCache'::`2'::data,
      0xAABF26u,
      (const struct FEATURE_LOGGED_TRAITS *)&v11,
      0,
      3u);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, unsigned __int64))(*(_QWORD *)a1 + 88LL))(
           a1,
           v8,
           a3,
           a4,
           a5,
           a6);
}
