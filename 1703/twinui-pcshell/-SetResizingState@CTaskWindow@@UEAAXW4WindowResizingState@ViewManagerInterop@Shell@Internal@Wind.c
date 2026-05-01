/*
 * XREFs of ?SetResizingState@CTaskWindow@@UEAAXW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180064540
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CoreWindowResizeEvent_Desktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004E0CC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CoreWindowResizeEvent_Deskto.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTaskWindow::SetResizingState(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int16 v6; // [rsp+34h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v8; // [rsp+60h] [rbp+18h] BYREF
  __int16 v9; // [rsp+64h] [rbp+1Ch]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_CoreWindowResizeEvent_Desktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CoreWindowResizeEvent_Desktop>::GetCachedFeatureEnabledState();
  LOBYTE(v6) = 3;
  v8 = 0;
  v9 = v6;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CoreWindowResizeEvent_Desktop>::GetFeaturePropertyCache'::`2'::data,
    0x4C11C4u,
    (const struct FEATURE_LOGGED_TRAITS *)&v8,
    1,
    3);
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 496LL))(v4, a2);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D7,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
        (const char *)(unsigned int)v5);
  }
}
