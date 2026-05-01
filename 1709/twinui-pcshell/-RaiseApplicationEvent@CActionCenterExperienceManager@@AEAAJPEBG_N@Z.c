/*
 * XREFs of ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180096F04
 * Callers:
 *     ?ControlCenterEntryPointInvoked@CActionCenterExperienceManager@@UEAAJXZ @ 0x180095E50 (-ControlCenterEntryPointInvoked@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?FocusHotkeyInvoked@CActionCenterExperienceManager@@UEAAJXZ @ 0x1800961A0 (-FocusHotkeyInvoked@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z @ 0x180096260 (-OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180096368 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x1800975B8 (-InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x180098320 (-OnDismiss@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180098480 (-OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099CD0 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099E50 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003D338 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008FEE8 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXPEBG_N@Z @ 0x1800915AC (-StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUI.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180094B10 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009C0F8 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009C508 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1801D0EBC (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CActionCenterExperienceManager::RaiseApplicationEvent(
        CActionCenterExperienceManager *this,
        const unsigned __int16 *a2,
        char a3)
{
  HRESULT v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  struct Windows::Foundation::Collections::IPropertySet *v13; // r9
  struct Windows::Foundation::Collections::IPropertySet *v14; // rcx
  const struct _TlgProvider_t *v15; // rax
  struct Windows::Foundation::Collections::IPropertySet *v16; // rcx
  const struct _TlgProvider_t *v17; // rax
  struct Windows::Foundation::Collections::IPropertySet *v19; // [rsp+38h] [rbp-D0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v20; // [rsp+40h] [rbp-C8h] BYREF
  const WCHAR *v21[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v22[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h]
  int *v24; // [rsp+80h] [rbp-88h]
  int *v25; // [rsp+88h] [rbp-80h]
  int v26; // [rsp+90h] [rbp-78h] BYREF
  char v27; // [rsp+94h] [rbp-74h]
  int v28; // [rsp+B8h] [rbp-50h] BYREF
  const char *v29; // [rsp+C0h] [rbp-48h]
  __int64 v30; // [rsp+C8h] [rbp-40h]
  char v31; // [rsp+D0h] [rbp-38h]
  __int64 v32; // [rsp+D8h] [rbp-30h]
  _BYTE v33[144]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v34; // [rsp+170h] [rbp+68h]
  __int64 v35; // [rsp+178h] [rbp+70h]
  __int64 v36; // [rsp+180h] [rbp+78h]
  __int64 v37; // [rsp+188h] [rbp+80h]
  HSTRING_HEADER hstringHeader; // [rsp+198h] [rbp+90h] BYREF
  HSTRING string; // [rsp+1B0h] [rbp+A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v21[1] = (const WCHAR *)-2LL;
  v21[0] = a2;
  v22[1] = 0LL;
  v22[2] = v22;
  v22[3] = 0LL;
  LODWORD(v23) = 0;
  v24 = &v28;
  v25 = &v26;
  v26 = 0;
  v27 = 0;
  v31 = 0;
  v28 = 0;
  v29 = "EM_RaiseApplicationEventActivity";
  v30 = 0LL;
  v32 = 1LL;
  v34 = 0LL;
  v35 = 0LL;
  memset(v33, 0, sizeof(v33));
  v36 = 0LL;
  v37 = 0LL;
  v22[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::StartActivity(
    (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v22,
    a2,
    a3);
  if ( !*((_QWORD *)this + 18) )
  {
    v17 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v17 > 5u )
      TlgWrite(v17, &unk_180259C2E, (LPCGUID)(v25 + 2), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&hstringHeader);
    goto LABEL_24;
  }
  v19 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         (__int64)string,
         (__int64 *)&v19);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v20 = v19;
    if ( v19 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v19 + 8LL))(v19);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, v21);
    v10 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
            *(HSTRING *)(v9 + 24),
            a3);
    v8 = v10;
    if ( v10 < 0 )
    {
      v11 = 831LL;
      goto LABEL_12;
    }
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, v21);
    v10 = CSingleViewShellExperience::Reactivate(
            (CActionCenterExperienceManager *)((char *)this + 120),
            *(HSTRING *)(v12 + 24),
            v19,
            v13);
    v8 = v10;
    if ( v10 < 0 )
    {
      v11 = 832LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      if ( v20 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v20 + 16LL))(v20);
      goto LABEL_14;
    }
    v15 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v15 > 5u )
      TlgWrite(v15, &unk_180259C13, (LPCGUID)(v25 + 2), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&hstringHeader);
    if ( v20 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v20 + 16LL))(v20);
    v16 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v16 + 16LL))(v16);
    }
LABEL_24:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v22);
    v8 = 0;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x33C,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_14:
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v14 + 16LL))(v14);
  }
LABEL_25:
  v22[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v22);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v22);
  return v8;
}
