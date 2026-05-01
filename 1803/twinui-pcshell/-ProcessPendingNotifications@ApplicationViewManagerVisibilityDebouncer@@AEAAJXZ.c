/*
 * XREFs of ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x1800978D0
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18001D670 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     CAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51___::Invoke @ 0x18013DEB0 (CAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51___--Invoke.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x18001D384 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18004E770 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@IEAAKXZ @ 0x180095790 (-InternalRelease@-$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z @ 0x180097C78 (--0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@QEAA@QEAV1@I@Z @ 0x180097CE0 (--0Iterator@-$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@QEAA@QEAV1@I@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@AEAAXXZ @ 0x180097D24 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x1800F4284 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60_____lambda_5f803f865b4b07caa2d72f9fc7ffab60___ @ 0x18013D5AC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b0.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x18013DE88 (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802DA4B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_1802DA4B0.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD08 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802DBD08.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications(
        ApplicationViewManagerVisibilityDebouncer *this)
{
  struct IObjectArray *v2; // rdi
  ULONGLONG TickCount64; // r14
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  _QWORD *v7; // rdi
  int v8; // ebx
  struct Windows::Internal::IComPoolTask **v9; // rax
  struct Windows::Internal::IComPoolTask *v10; // rsi
  __int64 v11; // rcx
  DWORD CurrentThreadId; // eax
  int v13; // ebx
  int v15; // [rsp+20h] [rbp-59h]
  struct IObjectArray *v16; // [rsp+38h] [rbp-41h] BYREF
  ApplicationViewManagerVisibilityDebouncer *v17; // [rsp+40h] [rbp-39h] BYREF
  int v18; // [rsp+48h] [rbp-31h] BYREF
  __int64 v19[2]; // [rsp+50h] [rbp-29h] BYREF
  int v20; // [rsp+60h] [rbp-19h] BYREF
  __int64 v21[2]; // [rsp+68h] [rbp-11h] BYREF
  struct IApplicationView *v22; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+7h]
  CWinRTApplicationView *v24; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  struct IObjectArray *v27; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v28; // [rsp+E8h] [rbp+6Fh] BYREF
  ApplicationViewManagerVisibilityDebouncer *v29; // [rsp+F0h] [rbp+77h] BYREF
  struct Windows::Internal::IComPoolTask *v30; // [rsp+F8h] [rbp+7Fh] BYREF

  v27 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v27);
  AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)this + 15, &v27);
  if ( !*((_QWORD *)this + 10) )
    goto LABEL_23;
  v2 = v27;
  while ( 1 )
  {
    TickCount64 = GetTickCount64();
    ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
      (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v22,
      *((const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification **)this + 9));
    if ( v23 == 1 )
      break;
LABEL_6:
    v16 = v2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v16);
    LODWORD(v17) = 0;
    v4 = ((__int64 (__fastcall *)(struct IObjectArray *, ApplicationViewManagerVisibilityDebouncer **))v2->lpVtbl->GetCount)(
           v2,
           &v17);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD,
        (unsigned int)"internal\\shell\\private\\inc\\objectarrayadapter.h",
        (const char *)(unsigned int)v4,
        v15);
    ObjectArrayAdapter<IApplicationViewChangeListener>::Iterator::Iterator(&v18, &v16, 0LL);
    ObjectArrayAdapter<IApplicationViewChangeListener>::Iterator::Iterator(&v20, &v16, (unsigned int)v17);
    while ( v18 != v20 || v19[1] != v21[1] )
    {
      v5 = v19[0];
      v28 = v19[0];
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v28);
      v6 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, _QWORD, CWinRTApplicationView *))(*(_QWORD *)v5 + 24LL))(
             v5,
             v22,
             v23,
             v24);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x132,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
          (const char *)(unsigned int)v6,
          v15);
      Microsoft::WRL::ComPtr<IApplicationViewChangeListener>::InternalRelease(&v28);
      ++v18;
      ObjectArrayAdapter<IApplicationViewChangeListener>::Iterator::GetCurrentObject(&v18);
    }
    Microsoft::WRL::ComPtr<IApplicationViewChangeListener>::InternalRelease(v21);
    Microsoft::WRL::ComPtr<IApplicationViewChangeListener>::InternalRelease(v19);
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v16);
    CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
      (__int64 *)this + 9,
      0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
    if ( !*((_QWORD *)this + 10) )
      goto LABEL_23;
  }
  if ( TickCount64 >= v25 + 50 )
  {
    ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView(this, v22);
    goto LABEL_6;
  }
  v7 = (_QWORD *)((char *)this + 176);
  if ( *((_QWORD *)this + 22) )
  {
LABEL_22:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
LABEL_23:
    v13 = 0;
    goto LABEL_24;
  }
  v8 = v25 - TickCount64;
  v29 = this;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(this);
  v16 = (struct IObjectArray *)this;
  v17 = this;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef(this);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)this + 22);
  v9 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60_____lambda_5f803f865b4b07caa2d72f9fc7ffab60___(
                                                    &v28,
                                                    &v16);
  v10 = *v9;
  v30 = *v9;
  *v9 = 0LL;
  v11 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  CurrentThreadId = GetCurrentThreadId();
  v13 = Windows::Internal::ComTaskPool::RunTask(3u, 0, CurrentThreadId, v8 + 50, v10, v7);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((void **)&v30);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v17);
  if ( v13 >= 0 )
  {
    Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v29);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x122,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)(unsigned int)v13);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
LABEL_24:
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v27);
  return (unsigned int)v13;
}
