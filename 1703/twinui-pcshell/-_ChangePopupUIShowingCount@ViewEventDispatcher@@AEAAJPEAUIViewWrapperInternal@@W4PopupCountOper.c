/*
 * XREFs of ?_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOperation@@_K@Z @ 0x1800F54E4
 * Callers:
 *     ?IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x1800F6FE0 (-IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 *     ?DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x1800F70A0 (-DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18001D5BC (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x18001D818 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18001D958 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _lambda_c42184d898c0806d92bf2f8c2d17483b_::operator() @ 0x1800F57D0 (_lambda_c42184d898c0806d92bf2f8c2d17483b_--operator().c)
 *     ?_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z@std@@@Z @ 0x1800F8CE8 (-_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXAEBUtagHostIdentifier@ViewEven.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::_ChangePopupUIShowingCount(__int64 a1, __int64 a2, int a3)
{
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // r14d
  unsigned int v9; // ecx
  bool v10; // al
  BOOL v11; // r15d
  int v12; // eax
  int v14; // ebx
  unsigned int v15; // eax
  const char *v16; // r9
  __int64 (__fastcall ***v17)(); // rdx
  int v18; // [rsp+34h] [rbp-C4h] BYREF
  int v19; // [rsp+38h] [rbp-C0h] BYREF
  __int16 v20; // [rsp+3Ch] [rbp-BCh]
  __int128 v21; // [rsp+40h] [rbp-B8h]
  __int64 v22; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v24[4]; // [rsp+60h] [rbp-98h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+80h] [rbp-78h] BYREF
  __int128 v26; // [rsp+88h] [rbp-70h]
  __int64 (__fastcall ***v27)(); // [rsp+B8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  int v29; // [rsp+110h] [rbp+18h] BYREF

  v29 = a3;
  v24[3] = -2LL;
  v22 = 1LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_19;
  v5 = `wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v6 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(8664332LL, 0LL);
LABEL_4:
    v7 = v6;
    goto LABEL_10;
  }
  if ( g_wil_details_apiGetFeatureEnabledState )
  {
    if ( !(unsigned int)wil_HasFeatureTestState(8664332, (enum wil_FeatureEnabledState *)&v18) )
    {
      v6 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(8664332LL, 0LL);
      goto LABEL_4;
    }
    v7 = v18;
  }
  else
  {
    v7 = 0;
  }
LABEL_10:
  v8 = ((v7 & 0x80u) != 0) + 1;
  v9 = v7 & 0xFFFFFF7F;
  if ( v9 )
    v10 = v9 == 2;
  else
    v10 = 1;
  v11 = v10;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    &wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(8664332, 0LL) )
  {
    if ( v5 )
    {
      do
        v12 = `wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v8
           && v12 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
                       ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v8)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
                       `wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
        v11 + 1,
        v8);
    }
  }
LABEL_19:
  LODWORD(v21) = 0;
  BYTE4(v21) = 3;
  v19 = 0;
  v20 = WORD2(v21);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
    0x84350Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v19,
    1,
    3);
  if ( !v22 )
    return 0LL;
  v24[0] = &v29;
  v24[1] = &v22;
  v24[2] = a1;
  v23 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v14 = lambda_c42184d898c0806d92bf2f8c2d17483b_::operator()(v24, &v23);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v14 >= 0 )
  {
    try
    {
      *(_QWORD *)&v21 = a1;
      *((_QWORD *)&v21 + 1) = v24;
      v25 = off_1801B46A0;
      v26 = v21;
      v27 = &v25;
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 576LL))(a2);
      ViewEventDispatcher::_ForEachTrueHost(a1, v15, &v25);
      if ( v27 )
      {
        v17 = &v25;
        LOBYTE(v17) = v27 != &v25;
        ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v27)[4])(v27, v17);
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x66D,
                             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                             v16);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x65C,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v14);
  return (unsigned int)v14;
}
