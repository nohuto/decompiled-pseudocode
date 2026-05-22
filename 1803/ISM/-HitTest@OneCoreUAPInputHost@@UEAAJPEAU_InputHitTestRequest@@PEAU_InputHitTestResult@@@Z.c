/*
 * XREFs of ?HitTest@OneCoreUAPInputHost@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180004590
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000FE74 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ContextualInputProcessing@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180016448 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ContextualInputProcessing@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OneCoreUAPInputHost::HitTest(
        OneCoreUAPInputHost *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3)
{
  int v5; // edi
  __int16 v7; // [rsp+5Ch] [rbp+14h]
  int v8; // [rsp+68h] [rbp+20h] BYREF
  __int16 v9; // [rsp+6Ch] [rbp+24h]

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Win32kInterop::s_pInterop + 6) + 48LL))(*((_QWORD *)Win32kInterop::s_pInterop
                                                                                                 + 6));
  if ( v5 >= 0 && *((_QWORD *)a3 + 2) && gbIsRunningWithCShell && (*((_BYTE *)a2 + 92) & 1) == 0 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetCachedFeatureEnabledState();
    LOBYTE(v7) = 2;
    v8 = 0;
    v9 = v7;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetFeaturePropertyCache'::`2'::data,
      11190054LL,
      &v8,
      0LL,
      3);
  }
  return (unsigned int)v5;
}
