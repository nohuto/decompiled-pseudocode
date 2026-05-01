/*
 * XREFs of ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18012F450
 * Callers:
 *     ?TabletModeChanged@XamlAllUpViewHost@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x18012CB30 (-TabletModeChanged@XamlAllUpViewHost@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18012D0E0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     ?DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ @ 0x18012D690 (-DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_1641477e29131e5d86e6ba234aa93fe0___::_ScopeExitFn__lambda_1641477e29131e5d86e6ba234aa93fe0___ @ 0x18012F284 (wil--details--ScopeExitFn__lambda_1641477e29131e5d86e6ba234aa93fe0___--_ScopeExitFn__lambda_1641.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     ??$Start@AEAW4MULTITASKING_VIEW_TYPES@@@DismissMultitaskingView@MultitaskingViewTelemetry@@SA?AV01@AEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180131018 (--$Start@AEAW4MULTITASKING_VIEW_TYPES@@@DismissMultitaskingView@MultitaskingViewTelemetry@@SA-AV.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_2982927e39568cdd3df99df702aa65a9___ @ 0x1801315F4 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_2982927e39568cdd3df99df702aa65a9___.c)
 *     ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1801320D4 (-Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180132F28 (--1-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180133138 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(_QWORD **a1)
{
  unsigned int *v2; // rsi
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  IUnknown *v7; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD **v15; // [rsp+50h] [rbp-B8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A8h]
  __int64 v18; // [rsp+68h] [rbp-A0h]
  _QWORD **v19; // [rsp+70h] [rbp-98h]
  _QWORD v20[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v18 = -2LL;
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)((unsigned __int64)(a1 + 2) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64)));
  *((_BYTE *)a1 + 104) = 0;
  v2 = (unsigned int *)(a1 + 8);
  MultitaskingViewTelemetry::DismissMultitaskingView::Start<enum MULTITASKING_VIEW_TYPES &>(v20, a1 + 8);
  v3 = a1[12];
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v3 + 56LL))(v3);
    v4 = a1[12];
    if ( v4 )
    {
      a1[12] = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    }
  }
  ((void (__fastcall *)(_QWORD **))(*a1)[9])(a1);
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*a1[9])(
         a1[9],
         &GUID_4d596e92_c4dc_4ea6_8d58_0242b14c90b3,
         &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v19 = a1;
    ((void (__fastcall *)(_QWORD **))(*a1)[1])(a1);
    v14 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v15 = a1;
    ((void (__fastcall *)(_QWORD **))(*a1)[1])(a1);
    v7 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_2982927e39568cdd3df99df702aa65a9___(
                         &v13,
                         &v14);
    CurrentThreadId = GetCurrentThreadId();
    Windows::Internal::ComTaskPool::RunTask(2, 0, CurrentThreadId, 0, v7, 0LL);
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v15 )
      ((void (__fastcall *)(_QWORD **))(*v15)[2])(v15);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[10] + 32LL))(a1[10], *v2);
    MultitaskingViewTelemetry::DismissMultitaskingView::Stop(v20, *v2);
    v6 = 0;
    ((void (__fastcall *)(_QWORD **))(*a1)[2])(a1);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\Shell\\inc\\multitaskingbaseviewhost.h",
      (const char *)(unsigned int)v5);
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v20[0] = &MultitaskingViewTelemetry::DismissMultitaskingView::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v20);
  if ( (int)v17 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
