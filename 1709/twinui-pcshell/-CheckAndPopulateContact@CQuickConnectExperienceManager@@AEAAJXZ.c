/*
 * XREFs of ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1800C6AB8
 * Callers:
 *     ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x1800C4ED0 (-PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contac.c)
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800C5A20 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??0ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@$$QEAV01@@Z @ 0x1800C3EE4 (--0ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@$$QEAV01@@Z.c)
 *     ?StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C3FE4 (-StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800C4204 (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x1800C44F8 (-CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@Ap.c)
 *     _lambda_e17c3c341f54d35a13f5e5412be3822e_::__lambda_e17c3c341f54d35a13f5e5412be3822e_ @ 0x1800C71D8 (_lambda_e17c3c341f54d35a13f5e5412be3822e_--__lambda_e17c3c341f54d35a13f5e5412be3822e_.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C7694 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C7DB8 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800C7EEC (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5aad080f89fc0f806acb3154381eca88___ @ 0x1800C8EC4 (Windows--Internal--ComTaskPool--QueueTask__lambda_5aad080f89fc0f806acb3154381eca88___.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CQuickConnectExperienceManager::CheckAndPopulateContact(CQuickConnectExperienceManager *this)
{
  void *v2; // r15
  CQuickConnectExperienceManager *v3; // rcx
  RTL_SRWLOCK *v4; // rbx
  char v5; // r14
  int v6; // eax
  int v7; // esi
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v8; // rdi
  RTL_SRWLOCK *v9; // r14
  RTL_SRWLOCK *v10; // rax
  RTL_SRWLOCK *v11; // rsi
  __int64 v12; // rcx
  RTL_SRWLOCK *v13; // rbx
  RTL_SRWLOCK *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  RTL_SRWLOCK *v17; // rcx
  RTL_SRWLOCK *v18; // rcx
  __int64 v19; // rcx
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v21; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  PSRWLOCK v23[8]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v24[4]; // [rsp+88h] [rbp-80h] BYREF
  int v25; // [rsp+A8h] [rbp-60h]
  int *v26; // [rsp+B0h] [rbp-58h]
  int *v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h] BYREF
  char v29; // [rsp+C4h] [rbp-44h]
  int v30; // [rsp+E8h] [rbp-20h] BYREF
  const char *v31; // [rsp+F0h] [rbp-18h]
  __int64 v32; // [rsp+F8h] [rbp-10h]
  char v33; // [rsp+100h] [rbp-8h]
  __int64 v34; // [rsp+108h] [rbp+0h]
  _BYTE v35[144]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v36; // [rsp+1A0h] [rbp+98h]
  __int64 v37; // [rsp+1A8h] [rbp+A0h]
  __int64 v38; // [rsp+1B0h] [rbp+A8h]
  __int64 v39; // [rsp+1B8h] [rbp+B0h]
  void *v40; // [rsp+1C8h] [rbp+C0h] BYREF
  RTL_SRWLOCK *v41; // [rsp+1D0h] [rbp+C8h] BYREF
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v42; // [rsp+1D8h] [rbp+D0h] BYREF
  char v43; // [rsp+1E0h] [rbp+D8h]
  _QWORD v44[40]; // [rsp+1E8h] [rbp+E0h] BYREF
  RTL_SRWLOCK *v45; // [rsp+328h] [rbp+220h] BYREF
  RTL_SRWLOCK *v46; // [rsp+330h] [rbp+228h]
  _QWORD v47[40]; // [rsp+338h] [rbp+230h] BYREF
  _QWORD v48[40]; // [rsp+478h] [rbp+370h] BYREF
  _QWORD v49[40]; // [rsp+5B8h] [rbp+4B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+730h] [rbp+628h]

  v23[1] = (PSRWLOCK)-2LL;
  v24[1] = 0LL;
  v24[2] = v24;
  v24[3] = 0LL;
  v25 = 0;
  v26 = &v30;
  v27 = &v28;
  v28 = 0;
  v29 = 0;
  v33 = 0;
  v30 = 0;
  v31 = "ExperienceManager_CheckAndPopulateContact";
  v32 = 0LL;
  v34 = 1LL;
  v36 = 0LL;
  v37 = 0LL;
  memset(v35, 0, sizeof(v35));
  v38 = 0LL;
  v39 = 0LL;
  v24[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::StartActivity((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v24);
  v2 = (void *)*((_QWORD *)this + 39);
  if ( !v2 )
    goto LABEL_70;
  if ( *((_QWORD *)this + 40) )
  {
    v23[2] = *((PSRWLOCK *)this + 39);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 8LL))(v2);
    v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 40);
    v23[3] = v4;
    if ( v4 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v4->Ptr + 1))(v4);
    v5 = *((_BYTE *)this + 356);
    v21 = 0LL;
    v6 = CQuickConnectExperienceManager::CopyContactCardOptions(
           v3,
           *((struct Windows::ApplicationModel::Contacts::IContactCardOptions **)this + 41),
           &v21);
    v7 = v6;
    v8 = v21;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x410,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_29:
      if ( v8 )
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *))(*(_QWORD *)v8 + 16LL))(v8);
      if ( v4 )
        (*((void (__fastcall **)(RTL_SRWLOCK *))v4->Ptr + 2))(v4);
      (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 16LL))(v2);
      goto LABEL_71;
    }
    if ( *v27 != 1 )
      __fastfail(7u);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)v24,
      &SRWLock);
    ++v27[18];
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
      v48,
      v24);
    v48[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
    v40 = v2;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 8LL))(v2);
    v41 = v4;
    if ( v4 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v4->Ptr + 1))(v4);
    v42 = v8;
    if ( v8 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *))(*(_QWORD *)v8 + 8LL))(v8);
    v43 = v5;
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
      v44,
      v48);
    v44[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
    v9 = 0LL;
    v23[4] = 0LL;
    v10 = (RTL_SRWLOCK *)operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      v10->Ptr = &IAppViewDataSourceAdapter::`vftable';
      HIDWORD(v10[1].Ptr) = 1;
      v10->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v11->Ptr = off_1802047A0;
      v11[2].Ptr = 0LL;
      if ( &v11[2] != (RTL_SRWLOCK *)&v40 )
      {
        v11[2].Ptr = v40;
        v40 = 0LL;
      }
      v11[3].Ptr = 0LL;
      if ( &v11[3] != (RTL_SRWLOCK *)&v41 )
      {
        v11[3].Ptr = v41;
        v41 = 0LL;
      }
      v11[4].Ptr = 0LL;
      if ( &v11[4] != (RTL_SRWLOCK *)&v42 )
      {
        v11[4].Ptr = v42;
        v42 = 0LL;
      }
      LOBYTE(v11[5].Ptr) = v43;
      QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::ExperienceManager_CheckAndPopulateContact(
        (__int64)&v11[6],
        (__int64)v44);
      v9 = v11;
    }
    v23[5] = v9;
    v7 = Windows::Internal::ComTaskPool::RunTask(3, 2u, (int)this, 0, (IUnknown *)v9, 0LL);
    if ( v9 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v9->Ptr + 2))(v9);
    lambda_e17c3c341f54d35a13f5e5412be3822e_::__lambda_e17c3c341f54d35a13f5e5412be3822e_(&v40);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x424,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      v48[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v48);
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v48);
      goto LABEL_29;
    }
    v12 = *((_QWORD *)this + 40);
    if ( v12 )
    {
      *((_QWORD *)this + 40) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v48[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v48);
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v48);
    if ( v8 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v4 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v4->Ptr + 2))(v4);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( !*((_BYTE *)this + 356) || !*((_QWORD *)this + 45) )
  {
LABEL_70:
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v24);
    v7 = 0;
    goto LABEL_71;
  }
  v13 = (RTL_SRWLOCK *)*((_QWORD *)this + 39);
  v23[6] = v13;
  if ( v13 )
    (*((void (__fastcall **)(RTL_SRWLOCK *))v13->Ptr + 1))(v13);
  v14 = (RTL_SRWLOCK *)*((_QWORD *)this + 45);
  v23[7] = v14;
  if ( v14 )
    (*((void (__fastcall **)(RTL_SRWLOCK *))v14->Ptr + 1))(v14);
  if ( *v27 != 1 )
    __fastfail(7u);
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)v24,
    v23);
  ++v27[18];
  if ( v23[0] )
    ReleaseSRWLockExclusive(v23[0]);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    v49,
    v24);
  v49[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  v45 = v13;
  if ( v13 )
    (*((void (__fastcall **)(RTL_SRWLOCK *))v13->Ptr + 1))(v13);
  v46 = v14;
  if ( v14 )
    (*((void (__fastcall **)(RTL_SRWLOCK *))v14->Ptr + 1))(v14);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    v47,
    v49);
  v47[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_5aad080f89fc0f806acb3154381eca88___(
         v16,
         v15,
         (unsigned int)this,
         &v45);
  v47[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v47);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v47);
  v17 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*((void (__fastcall **)(RTL_SRWLOCK *))v17->Ptr + 2))(v17);
  }
  v18 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*((void (__fastcall **)(RTL_SRWLOCK *))v18->Ptr + 2))(v18);
  }
  if ( v7 >= 0 )
  {
    v19 = *((_QWORD *)this + 45);
    if ( v19 )
    {
      *((_QWORD *)this + 45) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v49[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v49);
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v49);
    if ( v14 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v14->Ptr + 2))(v14);
    if ( v13 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v13->Ptr + 2))(v13);
    goto LABEL_70;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x441,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  v49[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v49);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v49);
  if ( v14 )
    (*((void (__fastcall **)(RTL_SRWLOCK *))v14->Ptr + 2))(v14);
  if ( v13 )
    (*((void (__fastcall **)(RTL_SRWLOCK *))v13->Ptr + 2))(v13);
LABEL_71:
  v24[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v24);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v24);
  return (unsigned int)v7;
}
