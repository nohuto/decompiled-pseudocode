/*
 * XREFs of ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x18024AE00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18023B800 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x18023F990 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802414B0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CA.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180241D84 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ??1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18024772C (--1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??4OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@Z @ 0x180247AA4 (--4OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x18024D640 (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18024D914 (-StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x180253390 (-VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedHide(
        KeyboardHosting::TabTipAdapterPolicy **this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // edx
  char v9; // si
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // dl
  unsigned __int8 v15[4]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v16; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned int v17[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-D0h]
  _QWORD v19[40]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v20[40]; // [rsp+188h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+300h] [rbp+1F8h]

  v18 = -2LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"OnInputAppRequestedHideActivity");
  v20[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::`vftable';
  v16 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 610LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_20;
  }
  v8 = v16;
  if ( v16 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v19,
      (__int64)"OnInputAppRequestedHideActivity");
    v19[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::`vftable';
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *)v19);
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::operator=((__int64)v20, (__int64)v19);
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::~OnInputAppRequestedHideActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *)v19);
    v8 = v16;
  }
  v15[0] = 0;
  v5 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedHide(this[12], v8, v17, v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 624LL;
    goto LABEL_16;
  }
  if ( v15[0] )
  {
    wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::ReportUsageToService(v11, v10, v12);
    v15[0] = 0;
    v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *, unsigned __int8 *))(*(_QWORD *)a3 + 56LL))(
           a3,
           v15);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 630LL;
      goto LABEL_16;
    }
    v5 = TouchKeyboardExperienceManager::OnInputAppRequestedHide(this[7], v16, v15[0] != 0);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 631LL;
      goto LABEL_16;
    }
    if ( !*((_BYTE *)this[12] + 512) )
    {
      v5 = KeyboardHosting::TabTipAdapter::SetTrackPosition((KeyboardHosting::TabTipAdapter *)this, v13, 0);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 642LL;
        goto LABEL_16;
      }
    }
  }
  if ( v9 )
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v20,
      0);
  v6 = 0;
LABEL_20:
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::~OnInputAppRequestedHideActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *)v20);
  return v6;
}
