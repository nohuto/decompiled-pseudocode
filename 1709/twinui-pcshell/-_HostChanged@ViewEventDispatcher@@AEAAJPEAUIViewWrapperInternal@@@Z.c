/*
 * XREFs of ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180123FF4
 * Callers:
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x1801208EC (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z.c)
 *     ?_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z @ 0x1801209C0 (-_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z.c)
 *     std::_Func_impl__lambda_56804973c4f16aa5912a3fb6cc1d54f5__std::allocator_int__void_IViewWrapperInternal_____ptr64_::_Do_call @ 0x18012B650 (std--_Func_impl__lambda_56804973c4f16aa5912a3fb6cc1d54f5__std--allocator_int__void__ea_18012B650.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x180123DD0 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18012C6BC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA-AW4.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_HostChanged(ViewEventDispatcher *this, struct IViewWrapperInternal *a2)
{
  int v4; // eax
  const char *v5; // r9
  _QWORD *v6; // rdx
  __int16 v8; // [rsp+34h] [rbp-74h]
  int v9; // [rsp+38h] [rbp-70h] BYREF
  __int16 v10; // [rsp+3Ch] [rbp-6Ch]
  __int64 v11; // [rsp+40h] [rbp-68h]
  _QWORD v12[7]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD *v13; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v11 = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetCachedFeatureEnabledState();
  LOBYTE(v8) = 3;
  v9 = 0;
  v10 = v8;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
    0x84350Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v9,
    1,
    3);
  (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 752LL))(a2);
  try
  {
    v12[0] = off_180209AE0;
    v12[1] = this;
    v13 = v12;
    v4 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 576LL))(a2);
    ViewEventDispatcher::_ForEachComponent(this, v4, (__int64)v12);
    if ( v13 )
    {
      v6 = v12;
      LOBYTE(v6) = v13 != v12;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v13 + 32LL))(v13, v6);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC28,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                           v5);
  }
  return 0LL;
}
