/*
 * XREFs of ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18018177C
 * Callers:
 *     ?Hide@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x1801816C0 (-Hide@CVirtualTouchpadExperienceManager@@UEAAJXZ.c)
 *     ?OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x180181F40 (-OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180018630 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180086288 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd1385ca299a5b2ab1a689d13634879a__&___ptr64___lambda_fd1385ca299a5b2ab1a689d13634879a__&___ptr64_ @ 0x18017FEDC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fd1385ca299a5.c)
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x180180960 (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ?AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManagerAnimationHelper@@@Z @ 0x180180D48 (-AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManage.c)
 *     ?Hide@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x180181700 (-Hide@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801828B4 (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801831C4 (-Stop@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgRefl.c)
 *     ?TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA?AV12@XZ @ 0x180183548 (-TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA-AV1.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualTouchpadExperienceManager::HideInternal(
        CVirtualTouchpadExperienceManager *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // si
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rax
  struct Windows::Internal::IComPoolTask **v10; // rax
  struct Windows::Internal::IComPoolTask *v11; // rbx
  __int64 v12; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  CWinRTApplicationView *v16; // [rsp+50h] [rbp-B8h] BYREF
  void *v17[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h]
  CVirtualTouchpadExperienceManager *v19; // [rsp+78h] [rbp-90h] BYREF
  CWinRTApplicationView *v20[3]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v21[320]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v17[1] = (void *)-2LL;
  v17[2] = this;
  v4 = 1;
  LOBYTE(v18) = 1;
  *((_DWORD *)this + 184) = 3;
  if ( *((_BYTE *)this + 284) )
  {
    *((_BYTE *)this + 284) = 0;
    CVirtualTouchpadExperienceManager::SaveFramePosition(this);
  }
  wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService((__int64)this, a2, a3);
  v5 = CVirtualTouchpadExperienceManager::AnimateFrame((__int64)this, 1, (__int64)this + 704);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      476LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 43) + 40LL))(*((_QWORD *)this + 43), 1LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 479LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_18;
  }
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v19, (const WCHAR **)&off_18034C580);
  v6 = ExperienceManagerUtils::RaiseReactivatedEvent(
         *((ExperienceManagerUtils **)this + 10),
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 46),
         *((HSTRING *)this + 8),
         *((HSTRING *)this + 9),
         *(HSTRING *)(v9 + 24),
         0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 482LL;
    goto LABEL_9;
  }
  v16 = this;
  Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&v16);
  v19 = this;
  v20[0] = this;
  Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)v20);
  v10 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd1385ca299a5b2ab1a689d13634879a______ptr64___lambda_fd1385ca299a5b2ab1a689d13634879a______ptr64_(
                                                     &v15,
                                                     &v19);
  v11 = *v10;
  v17[0] = *v10;
  *v10 = 0LL;
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunTask(2u, 0, CurrentThreadId, 0x3E8u, v11, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v17);
  if ( v7 >= 0 )
  {
    if ( **((_DWORD **)this + 51) == 1 )
    {
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::Hide((CVirtualTouchpadExperienceManager *)((char *)this + 360));
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::TransferToCurrentThread((char *)this + 360, v21);
      wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v21,
        0LL);
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v21);
    }
    v4 = 0;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
LABEL_18:
  if ( v4 )
    *((_DWORD *)this + 184) = 0;
  return (unsigned int)v7;
}
