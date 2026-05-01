/*
 * XREFs of ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1800ADB24
 * Callers:
 *     ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x1800AC2F0 (-PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contac.c)
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800ACC70 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA?AV12@XZ @ 0x1800AB590 (-Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA-AV12@XZ.c)
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800AB6EC (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x1800AB9A0 (-CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@Ap.c)
 *     _lambda_e17c3c341f54d35a13f5e5412be3822e_::__lambda_e17c3c341f54d35a13f5e5412be3822e_ @ 0x1800AE094 (_lambda_e17c3c341f54d35a13f5e5412be3822e_--__lambda_e17c3c341f54d35a13f5e5412be3822e_.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AE724 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AEE48 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800AEF7C (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ??$Start@$$V@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@SA?AV01@XZ @ 0x1800B03B8 (--$Start@$$V@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@SA-AV01@XZ.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_e17c3c341f54d35a13f5e5412be3822e___ @ 0x1800B0880 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_e17c3c341f54d35a13f5e5412be3822e___.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_5aad080f89fc0f806acb3154381eca88___ @ 0x1800B08C4 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_5aad080f89fc0f806acb3154381eca88___.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CQuickConnectExperienceManager::CheckAndPopulateContact(CQuickConnectExperienceManager *this)
{
  __int64 v2; // rbx
  CQuickConnectExperienceManager *v3; // rcx
  __int64 v4; // rdi
  char v5; // r12
  int v6; // eax
  int v7; // r15d
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v8; // rsi
  IUnknown **v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  IUnknown **v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h]
  __int64 v22; // [rsp+50h] [rbp-B8h]
  __int64 v23; // [rsp+58h] [rbp-B0h]
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h]
  void **v26; // [rsp+78h] [rbp-90h] BYREF
  char v27; // [rsp+80h] [rbp-88h]
  void **v28; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v29[40]; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD v30[40]; // [rsp+308h] [rbp+200h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+480h] [rbp+378h]

  v23 = -2LL;
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::Start<>((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v30);
  v2 = *((_QWORD *)this + 39);
  if ( !v2 )
    goto LABEL_54;
  if ( !*((_QWORD *)this + 40) )
  {
LABEL_27:
    if ( *((_BYTE *)this + 356) && *((_QWORD *)this + 45) )
    {
      v2 = *((_QWORD *)this + 39);
      v22 = v2;
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v12 = *((_QWORD *)this + 45);
      v21 = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::Split((__int64)v30, v29);
      v24 = v2;
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v25 = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
        &v26,
        v29);
      v26 = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
      v13 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_5aad080f89fc0f806acb3154381eca88___(
                           &v19,
                           &v24);
      v7 = Windows::Internal::ComTaskPool::RunTask(3, 2u, (int)this, 0, *v13, 0LL);
      v14 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v26 = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v26);
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)&v26);
      v15 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v16 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x441,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v7);
        v29[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
        wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
        wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v29);
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        goto LABEL_46;
      }
      v17 = *((_QWORD *)this + 45);
      if ( v17 )
      {
        *((_QWORD *)this + 45) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v29[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v29);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
LABEL_54:
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v30);
    v7 = 0;
    goto LABEL_55;
  }
  v21 = *((_QWORD *)this + 39);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v4 = *((_QWORD *)this + 40);
  v22 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_BYTE *)this + 356);
  v20 = 0LL;
  v6 = CQuickConnectExperienceManager::CopyContactCardOptions(
         v3,
         *((struct Windows::ApplicationModel::Contacts::IContactCardOptions **)this + 41),
         &v20);
  v7 = v6;
  v8 = v20;
  if ( v6 >= 0 )
  {
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::Split((__int64)v30, v29);
    v24 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v25 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v26 = (void **)v8;
    if ( v8 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *))(*(_QWORD *)v8 + 8LL))(v8);
    v27 = v5;
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
      &v28,
      v29);
    v28 = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
    v9 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_e17c3c341f54d35a13f5e5412be3822e___(
                        &v19,
                        &v24);
    v7 = Windows::Internal::ComTaskPool::RunTask(3, 2u, (int)this, 0, *v9, 0LL);
    v10 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    lambda_e17c3c341f54d35a13f5e5412be3822e_::__lambda_e17c3c341f54d35a13f5e5412be3822e_(&v24);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x424,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      v29[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v29);
      goto LABEL_15;
    }
    v11 = *((_QWORD *)this + 40);
    if ( v11 )
    {
      *((_QWORD *)this + 40) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v29[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v29);
    if ( v8 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x410,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_15:
  if ( v8 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
LABEL_46:
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
LABEL_55:
  v30[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v30);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v30);
  return (unsigned int)v7;
}
