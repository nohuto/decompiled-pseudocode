/*
 * XREFs of ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x1800F8D74
 * Callers:
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x1800F5A14 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z.c)
 *     ?UnregisterComponent@ViewEventDispatcher@@UEAAJI@Z @ 0x1800F5AF0 (-UnregisterComponent@ViewEventDispatcher@@UEAAJI@Z.c)
 *     std::_Func_impl__lambda_926d6687549b77799ff698c3ddadf627__std::allocator_int__void_IViewWrapperInternal_____ptr64_::_Do_call @ 0x180100F70 (std--_Func_impl__lambda_926d6687549b77799ff698c3ddadf627__std--allocator_int__void__ea_180100F70.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x1800F8B48 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180101F0C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA-AW4.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_HostChanged(ViewEventDispatcher *this, struct IViewWrapperInternal *a2)
{
  int v4; // eax
  const char *v5; // r9
  _QWORD *v6; // rdx
  int v8; // [rsp+30h] [rbp-78h] BYREF
  __int16 v9; // [rsp+34h] [rbp-74h]
  int v10; // [rsp+38h] [rbp-70h]
  __int16 v11; // [rsp+3Ch] [rbp-6Ch]
  __int64 v12; // [rsp+48h] [rbp-60h]
  _QWORD v13[7]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD *v14; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v12 = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetCachedFeatureEnabledState();
  v10 = 0;
  LOBYTE(v11) = 3;
  v8 = 0;
  v9 = v11;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
    0x84350Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v8,
    1,
    3);
  (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 752LL))(a2);
  try
  {
    v13[0] = off_1801B45E0;
    v13[1] = this;
    v14 = v13;
    v4 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 576LL))(a2);
    ViewEventDispatcher::_ForEachComponent(this, v4, (__int64)v13);
    if ( v14 )
    {
      v6 = v13;
      LOBYTE(v6) = v14 != v13;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v14 + 32LL))(v14, v6);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBA6,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                           v5);
  }
  return 0LL;
}
