/*
 * XREFs of ?_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOperation@@_K@Z @ 0x1801CFA94
 * Callers:
 *     ?DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x1801CA3A0 (-DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 *     ?IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x1801CB8E0 (-IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180060A94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     _lambda_c3441874af9188b8377da12ab0198c01_::operator() @ 0x1801C9698 (_lambda_c3441874af9188b8377da12ab0198c01_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801CA9A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA-AW4.c)
 *     ?_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z@std@@@Z @ 0x1801D0000 (-_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXAEBUtagHostIdentifier@ViewEven.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::_ChangePopupUIShowingCount(unsigned int *a1, __int64 a2, int a3)
{
  int v6; // ebx
  unsigned int v7; // eax
  const char *v8; // r9
  __int64 (__fastcall ***v9)(); // rdx
  __int64 v10; // [rsp+20h] [rbp-B8h]
  __int16 v11; // [rsp+34h] [rbp-A4h]
  __int128 v12; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-90h] BYREF
  unsigned int *v14[4]; // [rsp+50h] [rbp-88h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+70h] [rbp-68h] BYREF
  __int128 v16; // [rsp+78h] [rbp-60h]
  __int64 (__fastcall ***v17)(); // [rsp+A8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  int v19; // [rsp+F0h] [rbp+18h] BYREF

  v19 = a3;
  v14[3] = (unsigned int *)-2LL;
  v13 = 1LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetCachedFeatureEnabledState((__int64)a1);
  LOBYTE(v11) = 3;
  LODWORD(v12) = 0;
  WORD2(v12) = v11;
  LODWORD(v10) = 3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
    0x84350Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v12,
    (struct wil_details_RecordUsageResult *)1,
    v10);
  if ( !v13 )
    return 0LL;
  v14[0] = (unsigned int *)&v19;
  v14[1] = (unsigned int *)&v13;
  v14[2] = a1;
  *(_QWORD *)&v12 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v12);
  v6 = lambda_c3441874af9188b8377da12ab0198c01_::operator()(v14, &v12);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v12);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B0,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  try
  {
    *(_QWORD *)&v12 = a1;
    *((_QWORD *)&v12 + 1) = v14;
    v15 = off_180332C58;
    v16 = v12;
    v17 = &v15;
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 592LL))(a2);
    ViewEventDispatcher::_ForEachTrueHost(a1, v7, &v15);
    if ( v17 )
    {
      v9 = &v15;
      LOBYTE(v9) = v17 != &v15;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v17)[4])(v17, v9);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4C1,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                           v8);
  }
  return 0LL;
}
