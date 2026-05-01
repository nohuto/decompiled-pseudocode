/*
 * XREFs of ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1800E7FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??1?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800A164C (--1-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A3298 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A39C8 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x1800E7904 (-Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 *     ?PeoplePaneSwitchToView@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXXZ @ 0x1800E796C (-PeoplePaneSwitchToView@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXXZ.c)
 *     ?PeoplePaneNewView@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXXZ @ 0x1800E79EC (-PeoplePaneNewView@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXXZ.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1800E9BF8 (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800E9CC4 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?RegisterApplications@PeoplePaneViewManager@@UEAAJXZ @ 0x1800EAC50 (-RegisterApplications@PeoplePaneViewManager@@UEAAJXZ.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800EBE40 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto_ea_1800EBE40.c)
 *     ??$Start@$$V@PeoplePaneAppLaunch@CommonPeopleTelemetry@@SA?AV01@XZ @ 0x1800EC2D0 (--$Start@$$V@PeoplePaneAppLaunch@CommonPeopleTelemetry@@SA-AV01@XZ.c)
 *     ??$make_shared@UPeoplePaneViewInfo@@AEAPEBGW4ViewType@@AEBUtagSIZE@@@std@@YA?AV?$shared_ptr@UPeoplePaneViewInfo@@@0@AEAPEBG$$QEAW4ViewType@@AEBUtagSIZE@@@Z @ 0x1800EC37C (--$make_shared@UPeoplePaneViewInfo@@AEAPEBGW4ViewType@@AEBUtagSIZE@@@std@@YA-AV-$shared_ptr@UPeo.c)
 *     ??$emplace_back@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x1800EC560 (--$emplace_back@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeoplePaneView.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_f748ab983864a1d9251a0884a7c17331___ @ 0x1800ECE34 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_f748ab983864a1d9251a0884a7c17331___.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall PeoplePaneViewManager::LaunchPeoplePane(RTL_SRWLOCK *this, const unsigned __int16 *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  int v5; // edi
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  int v8; // eax
  void *v9; // rsi
  void *v10; // rax
  int Ptr_high; // ebx
  IUnknown **v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  const unsigned __int16 *v16; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID v18; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h]
  __int64 v20; // [rsp+58h] [rbp-B0h]
  __int64 v21; // [rsp+60h] [rbp-A8h]
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v23; // [rsp+70h] [rbp-98h] BYREF
  RTL_SRWLOCK *v24; // [rsp+80h] [rbp-88h] BYREF
  __int128 v25; // [rsp+88h] [rbp-80h] BYREF
  PeoplePaneViewManager *v26[2]; // [rsp+98h] [rbp-70h] BYREF
  char v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  _BYTE v29[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v30; // [rsp+C0h] [rbp-48h]
  RTL_SRWLOCK *v31; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID pv; // [rsp+D0h] [rbp-38h]
  __int64 v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  char v35; // [rsp+E8h] [rbp-20h]
  _QWORD v36[39]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v37[40]; // [rsp+228h] [rbp+120h] BYREF
  _QWORD v38[40]; // [rsp+368h] [rbp+260h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4F0h] [rbp+3E8h]

  v28 = -2LL;
  v16 = a2;
  CommonPeopleTelemetry::PeoplePaneAppLaunch::Start<>((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v38);
  PeoplePaneViewManager::RegisterApplications((PeoplePaneViewManager *)&this[1]);
  v23 = 0LL;
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId(&this[-8], v16, &v23) >= 0 )
  {
    v3 = v23;
    if ( *(_QWORD *)(v23 + 32) )
    {
      CommonPeopleTelemetry::PeoplePaneAppLaunch::PeoplePaneSwitchToView((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v38);
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 32) + 32LL))(*(_QWORD *)(v3 + 32));
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x6E,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v4);
        goto LABEL_25;
      }
LABEL_24:
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v38);
      v5 = 0;
      goto LABEL_25;
    }
  }
  wil::srwlock::lock_exclusive(this + 4, &v24);
  LODWORD(v17) = 0;
  v6 = std::make_shared<PeoplePaneViewInfo,unsigned short const * &,enum ViewType,tagSIZE const &>(v29, &v16, &v17);
  std::vector<std::shared_ptr<PeoplePaneViewInfo>>::emplace_back<std::shared_ptr<PeoplePaneViewInfo>>(&this[5], v6);
  v7 = v30;
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  if ( v24 )
    ReleaseSRWLockExclusive(v24);
  *(_QWORD *)&v25 = this - 8;
  *((_QWORD *)&v25 + 1) = &v16;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v26, &v25);
  CommonPeopleTelemetry::PeoplePaneAppLaunch::PeoplePaneNewView((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v38);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  LOBYTE(v21) = 0;
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)&v18,
         v16,
         0xFFFFFFFFFFFFFFFFuLL);
  v5 = v8;
  if ( v8 >= 0 )
  {
    CommonPeopleTelemetry::PeoplePaneAppLaunch::Split((__int64)v38, v37);
    v31 = this - 8;
    v33 = v19;
    v34 = v20;
    v10 = v18;
    v9 = 0LL;
    v18 = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    pv = v10;
    v35 = 0;
    LOBYTE(v21) = 1;
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      v36,
      v37);
    v36[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
    Ptr_high = HIDWORD(this[18].Ptr);
    v12 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_f748ab983864a1d9251a0884a7c17331___(
                         &v22,
                         &v31);
    v5 = Windows::Internal::ComTaskPool::RunTask(0, 2u, Ptr_high, 0, *v12, 0LL);
    v13 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v36[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v36);
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v36);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v5 >= 0 )
    {
      v37[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v37);
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v37);
      goto LABEL_24;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xA8,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v5);
    v37[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v37);
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v37);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x81,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v8);
    v9 = v18;
  }
  if ( v9 )
    CoTaskMemFree(v9);
  if ( v27 )
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(v26[0], *(const unsigned __int16 **)v26[1]);
LABEL_25:
  if ( *((_QWORD *)&v23 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v14 = *((_QWORD *)&v23 + 1);
      (***((void (__fastcall ****)(_QWORD))&v23 + 1))(*((_QWORD *)&v23 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
    }
  }
  v38[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v38);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v38);
  return (unsigned int)v5;
}
