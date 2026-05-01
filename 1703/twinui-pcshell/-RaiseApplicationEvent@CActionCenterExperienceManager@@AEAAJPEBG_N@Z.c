/*
 * XREFs of ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180092944
 * Callers:
 *     ?FocusHotkeyInvoked@CActionCenterExperienceManager@@UEAAJXZ @ 0x180091D70 (-FocusHotkeyInvoked@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180091EDC (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180094E00 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180094F40 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003C0D8 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043D94 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008D8A4 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180090BE8 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180095F08 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180096318 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@AEAPEBGAEA_N@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@AEAPEBGAEA_N@Z @ 0x180096B10 (--$Start@AEAPEBGAEA_N@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationC.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1801817FC (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CActionCenterExperienceManager::RaiseApplicationEvent(
        CActionCenterExperienceManager *this,
        const unsigned __int16 *a2,
        char a3)
{
  HRESULT v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  HSTRING_HEADER *v11; // rax
  struct Windows::Foundation::Collections::IPropertySet *v12; // r9
  struct Windows::Foundation::Collections::IPropertySet *v13; // rcx
  const struct _TlgProvider_t *v14; // rax
  struct Windows::Foundation::Collections::IPropertySet *v15; // rcx
  const struct _TlgProvider_t *v16; // rax
  struct Windows::Foundation::Collections::IPropertySet *v18; // [rsp+40h] [rbp-C8h] BYREF
  const WCHAR *v19; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v21[6]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+98h] [rbp-70h]
  HSTRING_HEADER hstringHeader; // [rsp+1A8h] [rbp+A0h] BYREF
  HSTRING string; // [rsp+1C0h] [rbp+B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v20[1] = -2LL;
  v19 = a2;
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::Start<unsigned short const * &,bool &>((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v21);
  if ( !*((_QWORD *)this + 17) )
  {
    v16 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v16 > 5u )
      TlgWrite(v16, &unk_1801F7A4B, (LPCGUID)(v22 + 8), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&hstringHeader);
    goto LABEL_24;
  }
  v18 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         (__int64)string,
         (__int64 *)&v18);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v20[0] = v18;
    if ( v18 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v18 + 8LL))(v18);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v19);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)v20,
           (HSTRING)v8[1].Reserved.Reserved1,
           a3);
    v7 = v9;
    if ( v9 < 0 )
    {
      v10 = 753LL;
      goto LABEL_12;
    }
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v19);
    v9 = CSingleViewShellExperience::Reactivate(
           (CActionCenterExperienceManager *)((char *)this + 112),
           (HSTRING)v11[1].Reserved.Reserved1,
           v18,
           v12);
    v7 = v9;
    if ( v9 < 0 )
    {
      v10 = 754LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      if ( v20[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
      goto LABEL_14;
    }
    v14 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v14 > 5u )
      TlgWrite(v14, &unk_1801F7A30, (LPCGUID)(v22 + 8), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&hstringHeader);
    if ( v20[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
    v15 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v15 + 16LL))(v15);
    }
LABEL_24:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
    v7 = 0;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2EE,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_14:
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_25:
  v21[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v21);
  return v7;
}
