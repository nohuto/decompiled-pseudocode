/*
 * XREFs of ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801C34A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18001CF60 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180110E88 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18016A83C (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto_ea_18016A83C.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18016A8E8 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto_ea_18016A8E8.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18016D4C4 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6___::CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6_____lambda_ebd42d67d4ed24c24d65003e6952ebf6___ @ 0x1801BEF64 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6___--CTaskW.c)
 *     ??$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x1801BF564 (--$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     ??$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x1801BF604 (--$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3debc4ca9d8e656fb3713c45e37949b6___ @ 0x1801BF790 (Windows--Internal--ComTaskPool--QueueTask__lambda_3debc4ca9d8e656fb3713c45e37949b6___.c)
 *     ??$emplace_back@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x1801BFF64 (--$emplace_back@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeoplePaneView.c)
 *     ??$make_shared@UPeoplePaneViewInfo@@AEAPEBGW4ViewType@@AEBUtagSIZE@@@std@@YA?AV?$shared_ptr@UPeoplePaneViewInfo@@@0@AEAPEBG$$QEAW4ViewType@@AEBUtagSIZE@@@Z @ 0x1801C00B4 (--$make_shared@UPeoplePaneViewInfo@@AEAPEBGW4ViewType@@AEBUtagSIZE@@@std@@YA-AV-$shared_ptr@UPeo.c)
 *     _lambda_3debc4ca9d8e656fb3713c45e37949b6_::_lambda_3debc4ca9d8e656fb3713c45e37949b6_ @ 0x1801C020C (_lambda_3debc4ca9d8e656fb3713c45e37949b6_--_lambda_3debc4ca9d8e656fb3713c45e37949b6_.c)
 *     _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_ @ 0x1801C0740 (_lambda_ebd42d67d4ed24c24d65003e6952ebf6_--__lambda_ebd42d67d4ed24c24d65003e6952ebf6_.c)
 *     ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x1801C0938 (--1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801C1A1C (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1801C4300 (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x1801C4798 (-Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z @ 0x1801C47E4 (-StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x1801C48D4 (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall PeoplePaneViewManager::LaunchPeoplePane(
        PeoplePaneViewManager *this,
        unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  std::_Ref_count_base *v5; // rbx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  HWND WindowW; // rax
  const char *v13; // r9
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // edi
  void *v20; // rbx
  void *v21; // rax
  unsigned __int16 *v23; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h]
  __int64 v26; // [rsp+50h] [rbp-B8h]
  __int64 v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-A0h]
  __int64 v30; // [rsp+70h] [rbp-98h]
  __int64 v31; // [rsp+78h] [rbp-90h]
  void *v32; // [rsp+80h] [rbp-88h] BYREF
  std::_Ref_count_base *v33[2]; // [rsp+88h] [rbp-80h] BYREF
  char v34; // [rsp+98h] [rbp-70h]
  std::_Ref_count_base *v35[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-58h]
  _QWORD v37[4]; // [rsp+B8h] [rbp-50h] BYREF
  char v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  __int64 v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  char v42; // [rsp+F8h] [rbp-10h]
  void **v43; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v44[40]; // [rsp+238h] [rbp+130h] BYREF
  int v45[80]; // [rsp+378h] [rbp+270h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+500h] [rbp+3F8h]

  v36 = -2LL;
  v23 = a2;
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v44,
    (__int64)"PeoplePaneAppLaunch");
  v44[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  CommonPeopleTelemetry::PeoplePaneAppLaunch::StartActivity((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v44, v23);
  *(_OWORD *)v35 = 0LL;
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId((RTL_SRWLOCK *)this - 11, v23, v35) >= 0 )
  {
    v5 = v35[0];
    if ( *((_QWORD *)v35[0] + 4) )
    {
      CommonPeopleTelemetry::PeoplePaneAppLaunch::PeoplePaneSwitchToView<unsigned short const * &>(
        (__int64)v44,
        (LPCWSTR *)&v23);
      if ( a3 )
      {
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        LOBYTE(v27) = 0;
        v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
               (__int64)&v24,
               (__int64)v23,
               0xFFFFFFFFFFFFFFFFuLL);
        v7 = v6;
        if ( v6 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA5,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v6);
LABEL_11:
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
          goto LABEL_33;
        }
        v28 = 0LL;
        v29 = 0LL;
        v30 = 0LL;
        LOBYTE(v31) = 0;
        v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
               (__int64)&v28,
               (__int64)a3,
               0xFFFFFFFFFFFFFFFFuLL);
        v7 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA7,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v8);
LABEL_10:
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
          goto LABEL_11;
        }
        CommonPeopleTelemetry::PeoplePaneAppLaunch::Split(v44, v45);
        v9 = lambda_3debc4ca9d8e656fb3713c45e37949b6_::_lambda_3debc4ca9d8e656fb3713c45e37949b6_(
               (__int64)v37,
               (__int64)this - 88,
               &v24,
               &v28,
               (__int64)v45);
        v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_3debc4ca9d8e656fb3713c45e37949b6___(
               v11,
               v10,
               *((_DWORD *)this + 103),
               v9);
        lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_((__int64)v37);
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB3,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v7);
          CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v45);
          goto LABEL_10;
        }
        CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v45);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
      }
      else
      {
        WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
        if ( !SetForegroundWindow(WindowW) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0xB7,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            v13);
        v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 4) + 56LL))(*((_QWORD *)v5 + 4));
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            184LL,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v14);
      }
    }
    goto LABEL_32;
  }
  LODWORD(v32) = 0;
  std::make_shared<PeoplePaneViewInfo,unsigned short const * &,enum ViewType,tagSIZE const &>(
    v33,
    &v23,
    (unsigned int *)&v32);
  PeoplePaneViewInfo::StartTelemetryShowTimer(v33[0]);
  AcquireSRWLockExclusive((PSRWLOCK)this + 5);
  v32 = (char *)this + 40;
  std::vector<std::shared_ptr<PeoplePaneViewInfo>>::emplace_back<std::shared_ptr<PeoplePaneViewInfo>>(
    (__int64)this + 48,
    v33);
  if ( this != (PeoplePaneViewManager *)-40LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 5);
  if ( v33[1] )
    std::_Ref_count_base::_Decref(v33[1]);
  v33[0] = (PeoplePaneViewManager *)((char *)this - 88);
  v33[1] = (std::_Ref_count_base *)&v23;
  v34 = 1;
  CommonPeopleTelemetry::PeoplePaneAppLaunch::PeoplePaneNewView<unsigned short const * &>((__int64)v44, (LPCWSTR *)&v23);
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  LOBYTE(v31) = 0;
  v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (__int64)&v28,
          (__int64)v23,
          0xFFFFFFFFFFFFFFFFuLL);
  v7 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD2,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_30:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
    PeoplePaneViewManager::RemovePaneViewInfoForContactId((PeoplePaneViewManager *)((char *)this - 88), v23);
    goto LABEL_33;
  }
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  LOBYTE(v27) = 0;
  v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (__int64)&v24,
          (__int64)a3,
          0xFFFFFFFFFFFFFFFFuLL);
  v7 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD4,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v16);
LABEL_29:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
    goto LABEL_30;
  }
  CommonPeopleTelemetry::PeoplePaneAppLaunch::Split(v44, v45);
  v37[0] = (char *)this - 88;
  v37[2] = v29;
  v37[3] = v30;
  v17 = v28;
  v28 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v37[1] = v17;
  v38 = 0;
  LOBYTE(v31) = 1;
  v40 = v25;
  v41 = v26;
  v18 = v24;
  v24 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v39 = v18;
  v42 = 0;
  LOBYTE(v27) = 1;
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v43,
    (__int64)v45);
  v43 = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  v19 = *((_DWORD *)this + 103);
  v20 = 0LL;
  v21 = operator new(0x190uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v21 )
    v20 = (void *)Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6___::CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6_____lambda_ebd42d67d4ed24c24d65003e6952ebf6___(
                    (__int64)v21,
                    (__int64)v37);
  v32 = v20;
  v7 = Windows::Internal::ComTaskPool::RunTask(0, 2u, v19, 0, (struct Windows::Internal::IComPoolTask *)v20, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v32);
  lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_((__int64)v37);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v7);
    CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v45);
    goto LABEL_29;
  }
  CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v45);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
LABEL_32:
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v44,
    0);
  v7 = 0;
LABEL_33:
  if ( v35[1] )
    std::_Ref_count_base::_Decref(v35[1]);
  CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v44);
  return (unsigned int)v7;
}
