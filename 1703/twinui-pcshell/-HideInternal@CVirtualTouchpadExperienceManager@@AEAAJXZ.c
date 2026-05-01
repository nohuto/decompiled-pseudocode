/*
 * XREFs of ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800B77A0
 * Callers:
 *     ?Hide@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x1800B7760 (-Hide@CVirtualTouchpadExperienceManager@@UEAAJXZ.c)
 *     ?OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x1800B7C70 (-OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800965B8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@.c)
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x1800B5A88 (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ?TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA?AV12@XZ @ 0x1800B5F04 (-TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA-AV1.c)
 *     ?Hide@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x1800B5FE4 (-Hide@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800B6FDC (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManagerAnimationHelper@@@Z @ 0x1800B7EE4 (-AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManage.c)
 *     ?Stop@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B9164 (-Stop@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgRefl.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_2c3a81127ec11b603f32deec9cb27abe__&___ptr64_ @ 0x1800B99B0 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_2c3a81127ec11b603f32deec9cb27abe__-___ptr64.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1801817FC (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualTouchpadExperienceManager::HideInternal(CVirtualTouchpadExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rdx
  HSTRING_HEADER *v6; // rax
  struct Windows::Foundation::Collections::IPropertySet *v7; // r9
  IUnknown *v8; // rbx
  DWORD CurrentThreadId; // eax
  CVirtualTouchpadExperienceManager *v10; // rcx
  __int64 v11; // r8
  CVirtualTouchpadExperienceManager *v13; // [rsp+38h] [rbp-D0h] BYREF
  CVirtualTouchpadExperienceManager *v14; // [rsp+40h] [rbp-C8h]
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-B0h]
  __int64 v17; // [rsp+60h] [rbp-A8h]
  HSTRING_HEADER v18; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v19[40]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v17 = -2LL;
  v13 = this;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v15, &v13);
  *((_DWORD *)this + 184) = 3;
  if ( *((_BYTE *)this + 284) )
  {
    *((_BYTE *)this + 284) = 0;
    CVirtualTouchpadExperienceManager::SaveFramePosition(this);
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetCachedFeatureEnabledState();
  LODWORD(v14) = 0;
  BYTE4(v14) = 0;
  LODWORD(v13) = 0;
  WORD2(v13) = WORD2(v14);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data,
    0x7A7F42u,
    (const struct FEATURE_LOGGED_TRAITS *)&v13,
    0,
    3);
  v2 = CVirtualTouchpadExperienceManager::AnimateFrame(this, 1LL, (char *)this + 704);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1DB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 43) + 40LL))(*((_QWORD *)this + 43), 1LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 478LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_20;
  }
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, (const WCHAR **)&off_1801BD0B8);
  v3 = CSingleViewShellExperience::Reactivate(
         (CVirtualTouchpadExperienceManager *)((char *)this + 56),
         (HSTRING)v6[1].Reserved.Reserved1,
         0LL,
         v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 481LL;
    goto LABEL_11;
  }
  v14 = this;
  (*(void (__fastcall **)(CVirtualTouchpadExperienceManager *))(*(_QWORD *)this + 8LL))(this);
  v18.Reserved.Reserved1 = this;
  *(_QWORD *)&v18.Reserved.Reserved2[8] = this;
  (*(void (__fastcall **)(CVirtualTouchpadExperienceManager *))(*(_QWORD *)this + 8LL))(this);
  v8 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_2c3a81127ec11b603f32deec9cb27abe______ptr64_(
                       &v13,
                       &v18);
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunTask(2, 0, CurrentThreadId, 0x3E8u, v8, 0LL);
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(CVirtualTouchpadExperienceManager *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v4 >= 0 )
  {
    if ( **((_DWORD **)this + 51) == 1 )
    {
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::Hide((CVirtualTouchpadExperienceManager *)((char *)this + 360));
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::TransferToCurrentThread(
        (__int64)this + 360,
        v19,
        v11);
      wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v19);
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v19);
    }
    LOBYTE(v16) = 0;
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1F4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  (*(void (__fastcall **)(CVirtualTouchpadExperienceManager *))(*(_QWORD *)this + 16LL))(this);
  (*(void (__fastcall **)(CVirtualTouchpadExperienceManager *))(*(_QWORD *)this + 16LL))(this);
LABEL_20:
  if ( (_BYTE)v16 )
    *(_DWORD *)(v15 + 736) = 0;
  return (unsigned int)v4;
}
