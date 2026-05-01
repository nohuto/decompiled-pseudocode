/*
 * XREFs of ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180032664
 * Callers:
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x180034620 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z.c)
 *     ?_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z @ 0x1800347FC (-_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z.c)
 *     std::_Func_impl_no_alloc__lambda_c1aa2e2daa79a00947b0d33fa07dedf3__void_IViewWrapperInternal_____ptr64_::_Do_call @ 0x1801CFEC0 (std--_Func_impl_no_alloc__lambda_c1aa2e2daa79a00947b0d33fa07dedf3__void_IViewWrappe_ea_1801CFEC0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetComponentsForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@PEAPEAU?$IVectorView@I@Collections@Foundation@5@@Z @ 0x18002F060 (-GetComponentsForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEA.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180032CA0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this @ 0x18003A410 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Delete_this.c)
 *     ?GetViewInstanceId@ViewWrapperBase@@UEAAIXZ @ 0x1800514C0 (-GetViewInstanceId@ViewWrapperBase@@UEAAIXZ.c)
 *     ?NotifyHostChanged@ViewWrapperBase@@UEAAXXZ @ 0x1800529A0 (-NotifyHostChanged@ViewWrapperBase@@UEAAXXZ.c)
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x18005FD80 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetAtCurrent@?$VectorRangeNoThrow@U?$IVectorView@I@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x1801CA894 (-GetAtCurrent@-$VectorRangeNoThrow@U-$IVectorView@I@Collections@Foundation@Windows@@@wil@@QEAAXI.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801CA9A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA-AW4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_HostChanged(ViewEventDispatcher *this, struct IViewWrapperInternal *a2)
{
  signed __int32 v4; // edi
  struct wil_details_RecordUsageResult *v5; // r9
  void (__fastcall *v6)(ViewWrapperBase *__hidden); // rax
  unsigned int (__fastcall *v7)(ViewWrapperBase *__hidden); // rax
  unsigned int ViewInstanceId; // eax
  RTL_SRWLOCK *v9; // rcx
  __int64 (__fastcall *v10)(RTL_SRWLOCK *, int *, __int64 *); // rax
  int ComponentsForHost; // eax
  __int64 v12; // rdx
  const char *v13; // r9
  __int64 v14; // rcx
  void (__fastcall *v15)(_QWORD *, __int64); // rax
  int v17; // eax
  unsigned int v18; // edi
  int v19; // esi
  int v20; // ebx
  char v21; // al
  unsigned int v22; // ebx
  int v23; // eax
  _QWORD *v24; // rcx
  int v25; // [rsp+20h] [rbp-188h]
  signed __int32 v26; // [rsp+50h] [rbp-158h] BYREF
  _DWORD v27[3]; // [rsp+58h] [rbp-150h] BYREF
  __int16 v28; // [rsp+64h] [rbp-144h]
  __int64 v29; // [rsp+68h] [rbp-140h] BYREF
  struct IViewWrapperInternal *v30; // [rsp+70h] [rbp-138h] BYREF
  struct IViewWrapperInternal *v31; // [rsp+78h] [rbp-130h] BYREF
  int v32; // [rsp+80h] [rbp-128h]
  int v33; // [rsp+88h] [rbp-120h] BYREF
  __int16 v34; // [rsp+8Ch] [rbp-11Ch]
  struct IViewWrapperInternal *v35; // [rsp+90h] [rbp-118h] BYREF
  int v36; // [rsp+98h] [rbp-110h]
  __int128 v37; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-F8h]
  __int64 v39; // [rsp+B8h] [rbp-F0h] BYREF
  int v40; // [rsp+C0h] [rbp-E8h] BYREF
  int *v41; // [rsp+C8h] [rbp-E0h]
  int v42; // [rsp+D0h] [rbp-D8h]
  unsigned int v43; // [rsp+D4h] [rbp-D4h]
  char v44; // [rsp+D8h] [rbp-D0h] BYREF
  __int128 *v45; // [rsp+E0h] [rbp-C8h] BYREF
  int v46; // [rsp+E8h] [rbp-C0h]
  int v47; // [rsp+ECh] [rbp-BCh]
  __int64 v48; // [rsp+F0h] [rbp-B8h]
  _QWORD v49[2]; // [rsp+F8h] [rbp-B0h] BYREF
  int v50; // [rsp+108h] [rbp-A0h]
  int v51; // [rsp+10Ch] [rbp-9Ch]
  __int128 v52; // [rsp+110h] [rbp-98h] BYREF
  __int64 v53; // [rsp+120h] [rbp-88h]
  _QWORD v54[7]; // [rsp+130h] [rbp-78h] BYREF
  _QWORD *v55; // [rsp+168h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v48 = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetCachedFeatureEnabledState();
  v27[2] = 0;
  LOBYTE(v28) = 3;
  v33 = 0;
  v34 = v28;
  v27[0] = 3;
  v37 = 0uLL;
  v38 = 0LL;
  v26 = 0x10000;
  v45 = &v37;
  v46 = 0x10000;
  v47 = 0;
  do
  {
    v26 = `wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data;
    v4 = `wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data;
    if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v26, &v45) )
    {
      LODWORD(v38) = 1;
      goto LABEL_6;
    }
  }
  while ( v4 != _InterlockedCompareExchange(
                  (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
                  v26,
                  v4) );
  LODWORD(v38) = 0;
LABEL_6:
  v52 = v37;
  v53 = v38;
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0x84350C,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v52,
        v5);
    else
      g_wil_details_recordFeatureUsage(
        0x84350Cu,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v52);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v49[0] = 0LL;
      v50 = 0;
      v49[1] = 2LL;
      v51 = (`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(8664332LL, 0LL, v49);
    }
  }
  if ( !(_DWORD)v53 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0x84350Cu,
      (const struct FEATURE_LOGGED_TRAITS *)&v33,
      0LL,
      1,
      (const enum wil_ReportingKind *)v27,
      0LL,
      0,
      1uLL);
  v6 = *(void (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)a2 + 784LL);
  if ( v6 == ViewWrapperBase::NotifyHostChanged )
    ViewWrapperBase::NotifyHostChanged(a2);
  else
    v6(a2);
  try
  {
    v54[0] = off_1803234E0;
    v54[1] = this;
    v55 = v54;
    v7 = *(unsigned int (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)a2 + 592LL);
    if ( v7 == ViewWrapperBase::GetViewInstanceId )
      ViewInstanceId = ViewWrapperBase::GetViewInstanceId(a2);
    else
      ViewInstanceId = v7(a2);
    HIDWORD(v31) = ViewInstanceId;
    LODWORD(v31) = 0;
    v29 = 0LL;
    v35 = v31;
    v36 = v32;
    v9 = (RTL_SRWLOCK *)*((_QWORD *)this + 66);
    v10 = (__int64 (__fastcall *)(RTL_SRWLOCK *, int *, __int64 *))*((_QWORD *)v9->Ptr + 8);
    if ( v10 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentsForHost )
      ComponentsForHost = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentsForHost(
                            v9,
                            (int *)&v35,
                            &v29);
    else
      ComponentsForHost = v10(v9, (int *)&v35, &v29);
    if ( ComponentsForHost >= 0 )
    {
      v39 = v29;
      v41 = (int *)&v44;
      v42 = 0;
      v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 56LL))(v29, &v40);
      *v41 = v17;
      wil::VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<unsigned int>>::GetAtCurrent(&v39, 0LL);
      v18 = 0;
      v19 = v40;
      v20 = 0;
      while ( 1 )
      {
        if ( *v41 < 0 || (v21 = 1, v20 == v19) )
          v21 = 0;
        if ( !v21 )
          break;
        v22 = v43;
        v30 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v30);
        v23 = ViewEventDispatcher::_ViewFromViewInstanceId(this, v22, &v30);
        if ( v23 >= 0 )
        {
          v31 = v30;
          v24 = v55;
          if ( !v55 )
            std::_Xbad_function_call();
          (*(void (__fastcall **)(_QWORD *, struct IViewWrapperInternal **))(*v24 + 16LL))(v24, &v31);
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA53,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v23,
            v25);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v30);
        v20 = ++v18;
        wil::VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<unsigned int>>::GetAtCurrent(&v39, v18);
      }
    }
    v14 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v55 )
    {
      LOBYTE(v12) = v55 != v54;
      v15 = *(void (__fastcall **)(_QWORD *, __int64))(*v55 + 32LL);
      if ( (char *)v15 == (char *)std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this )
        std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this(v55, v12);
      else
        v15(v55, v12);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA8F,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                           v13);
  }
  return 0LL;
}
