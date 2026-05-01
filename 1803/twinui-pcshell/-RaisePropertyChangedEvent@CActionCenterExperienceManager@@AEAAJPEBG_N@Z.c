/*
 * XREFs of ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18007C0D4
 * Callers:
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18007B970 (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180018630 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18006D2B0 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007CA54 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007CAF0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?EventRaised@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18007D6D0 (-EventRaised@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITe.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXPEBG_N@Z @ 0x18007D7D8 (-StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUI.c)
 *     ??1EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18007D94C (--1EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?NoOp_ApplicationNotRunning@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801540CC (-NoOp_ApplicationNotRunning@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@Notific.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CActionCenterExperienceManager::RaisePropertyChangedEvent(
        CActionCenterExperienceManager *this,
        const unsigned __int16 *a2,
        char a3)
{
  __int64 v5; // rbx
  int v6; // ebx
  __int64 v7; // rax
  HSTRING v8; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rax
  __int64 v14; // rdx
  int v15; // [rsp+28h] [rbp-E0h]
  HSTRING v16; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v17; // [rsp+50h] [rbp-B8h] BYREF
  const WCHAR *v18[2]; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+80h] [rbp-88h]
  _QWORD v21[40]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v18[1] = (const WCHAR *)-2LL;
  v18[0] = L"Ready";
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    v21,
    "EM_RaiseApplicationEventActivity");
  v21[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::StartActivity(
    (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v21,
    L"Ready",
    a3);
  if ( !*((_QWORD *)this + 18) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::NoOp_ApplicationNotRunning((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v21);
    goto LABEL_11;
  }
  v16 = 0LL;
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v5 = v20;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  v16 = 0LL;
  v6 = RoActivateInstance(v5, &v17);
  if ( v6 < 0 )
    goto LABEL_17;
  v7 = *(_QWORD *)&GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data1
     - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
  if ( *(_QWORD *)&GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
    v7 = *(_QWORD *)GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data4
       - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
  if ( v7 )
  {
    v6 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, HSTRING *))v17)(
           v17,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v16);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16LL))(v17);
    v8 = v16;
  }
  else
  {
    v8 = v17;
    v16 = v17;
  }
  if ( v6 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21B,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v15);
    goto LABEL_18;
  }
  v17 = v8;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v17);
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, v18);
  v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(&v17, *(_QWORD *)(v9 + 24), v10, a3);
  v6 = v11;
  if ( v11 < 0 )
  {
    v14 = 542LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v11,
      v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
LABEL_18:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    goto LABEL_12;
  }
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_180319A88);
  v11 = ExperienceManagerUtils::RaiseReactivatedEvent(
          *((ExperienceManagerUtils **)this + 18),
          (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 62),
          *((HSTRING *)this + 16),
          *((HSTRING *)this + 17),
          *(HSTRING *)(v12 + 24),
          v16);
  v6 = v11;
  if ( v11 < 0 )
  {
    v14 = 543LL;
    goto LABEL_16;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::EventRaised((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
LABEL_11:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v21, 0LL);
  v6 = 0;
LABEL_12:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::~EM_RaiseApplicationEventActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v21);
  return (unsigned int)v6;
}
