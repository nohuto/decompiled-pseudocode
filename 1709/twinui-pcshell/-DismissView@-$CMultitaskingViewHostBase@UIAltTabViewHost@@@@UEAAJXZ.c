/*
 * XREFs of ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x18016DF80
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x18016D2E0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     wil::details::ScopeExitFn__lambda_1ae99cb7caf61697a9b1ffb2afb235d6___::_ScopeExitFn__lambda_1ae99cb7caf61697a9b1ffb2afb235d6___ @ 0x18016DD50 (wil--details--ScopeExitFn__lambda_1ae99cb7caf61697a9b1ffb2afb235d6___--_ScopeExitFn__lambda_1ae9.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$Start@AEAW4MULTITASKING_VIEW_TYPES@@@DismissMultitaskingView@MultitaskingViewTelemetry@@SA?AV01@AEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18015F34C (--$Start@AEAW4MULTITASKING_VIEW_TYPES@@@DismissMultitaskingView@MultitaskingViewTelemetry@@SA-AV.c)
 *     ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180160454 (-Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18016129C (--1-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801614A8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7d4fab6c161d4dc93915730d1208882c___ @ 0x18016E390 (Windows--Internal--ComTaskPool--QueueTask__lambda_7d4fab6c161d4dc93915730d1208882c___.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(_QWORD **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // r14d
  int *v4; // r15
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD **v14; // [rsp+38h] [rbp-D0h]
  __int64 v15; // [rsp+40h] [rbp-C8h]
  _QWORD **v16; // [rsp+48h] [rbp-C0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+50h] [rbp-B8h]
  int v18; // [rsp+58h] [rbp-B0h]
  _QWORD v19[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v15 = -2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((unsigned __int64)(a1 + 3) & -(__int64)(a1 != 0LL));
  v17 = v2;
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v18 = v3;
  *((_BYTE *)a1 + 112) = 0;
  v4 = (int *)(a1 + 9);
  MultitaskingViewTelemetry::DismissMultitaskingView::Start<enum MULTITASKING_VIEW_TYPES &>(
    (__int64)v19,
    (unsigned int *)a1 + 18);
  v5 = a1[13];
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v5 + 56LL))(v5);
    v6 = a1[13];
    if ( v6 )
    {
      a1[13] = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    }
  }
  ((void (__fastcall *)(_QWORD **))(*a1)[10])(a1);
  v12 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*a1[10])(
         a1[10],
         &GUID_4d596e92_c4dc_4ea6_8d58_0242b14c90b3,
         &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v16 = a1;
    ((void (__fastcall *)(_QWORD **))(*a1)[1])(a1);
    v13 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v14 = a1;
    ((void (__fastcall *)(_QWORD **))(*a1)[1])(a1);
    Windows::Internal::ComTaskPool::QueueTask__lambda_7d4fab6c161d4dc93915730d1208882c___(v9, &v13);
    if ( v14 )
      ((void (__fastcall *)(_QWORD **))(*v14)[2])(v14);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[11] + 32LL))(a1[11], (unsigned int)*v4);
    MultitaskingViewTelemetry::DismissMultitaskingView::Stop((__int64)v19, *v4);
    v8 = 0;
    ((void (__fastcall *)(_QWORD **))(*a1)[2])(a1);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\Shell\\inc\\multitaskingbaseviewhost.h",
      (const char *)(unsigned int)v7);
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v19[0] = &MultitaskingViewTelemetry::DismissMultitaskingView::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v8;
}
