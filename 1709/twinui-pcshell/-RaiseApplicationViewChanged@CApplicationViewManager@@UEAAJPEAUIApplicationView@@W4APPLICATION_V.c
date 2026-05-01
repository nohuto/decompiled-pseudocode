/*
 * XREFs of ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800764A0
 * Callers:
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180075790 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180075870 (-SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x180075940 (-HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800760F0 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180076180 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x180076328 (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x180077390 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_73af3bb2f3d5c91ade250b7343a71e20___::Invoke @ 0x180078DC0 (CAsyncCallbackWithLambda__lambda_73af3bb2f3d5c91ade250b7343a71e20___--Invoke.c)
 *     CAsyncCallbackWithLambda__lambda_298796646347532e56582e46723c0847___::Invoke @ 0x180078F40 (CAsyncCallbackWithLambda__lambda_298796646347532e56582e46723c0847___--Invoke.c)
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18007FC40 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x180083BD0 (-SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180085270 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18002564C (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     NotificationDispatcher::RunAsync__lambda_794533bae2653f5a8c11b3eb7b48e533___ @ 0x180077D4C (NotificationDispatcher--RunAsync__lambda_794533bae2653f5a8c11b3eb7b48e533___.c)
 *     ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180079DC4 (-StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@.c)
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x18007A370 (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18007A5C0 (--0-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::RaiseApplicationViewChanged(
        __int64 a1,
        struct IObjectArray *a2,
        unsigned int a3,
        struct IObjectArray *a4)
{
  int CallbackArray; // eax
  unsigned int v9; // r14d
  struct IObjectArray *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v15[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct IObjectArray *v16[5]; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-B0h]
  struct IObjectArray *v18; // [rsp+58h] [rbp-A8h]
  struct IObjectArray *v19; // [rsp+60h] [rbp-A0h]
  void **v20; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v21[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v22; // [rsp+1C0h] [rbp+C0h]
  int *v23; // [rsp+1C8h] [rbp+C8h]
  int *v24; // [rsp+1D0h] [rbp+D0h]
  int v25; // [rsp+1D8h] [rbp+D8h] BYREF
  char v26; // [rsp+1DCh] [rbp+DCh]
  int v27; // [rsp+200h] [rbp+100h] BYREF
  const char *v28; // [rsp+208h] [rbp+108h]
  __int64 v29; // [rsp+210h] [rbp+110h]
  char v30; // [rsp+218h] [rbp+118h]
  __int64 v31; // [rsp+220h] [rbp+120h]
  _BYTE v32[144]; // [rsp+228h] [rbp+128h] BYREF
  __int64 v33; // [rsp+2B8h] [rbp+1B8h]
  __int64 v34; // [rsp+2C0h] [rbp+1C0h]
  __int64 v35; // [rsp+2C8h] [rbp+1C8h]
  __int64 v36; // [rsp+2D0h] [rbp+1D0h]
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+238h]

  v16[1] = (struct IObjectArray *)-2LL;
  v21[1] = 0LL;
  v21[2] = v21;
  v21[3] = 0LL;
  v22 = 0;
  v23 = &v27;
  v24 = &v25;
  v25 = 0;
  v26 = 0;
  v30 = 0;
  v27 = 0;
  v28 = "RaiseApplicationViewChange";
  v29 = 0LL;
  v31 = 1LL;
  v33 = 0LL;
  v34 = 0LL;
  memset(v32, 0, sizeof(v32));
  v35 = 0LL;
  v36 = 0LL;
  v21[0] = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(v21, a2, a3, a4);
  v16[0] = 0LL;
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 88), v16);
  v9 = CallbackArray;
  v10 = v16[0];
  if ( CallbackArray >= 0 )
  {
    if ( a3 == 7 )
    {
      *(_QWORD *)v15 = 0LL;
      if ( ((__int64 (__fastcall *)(struct IObjectArray *, GUID *, int *))a2->lpVtbl->QueryInterface)(
             a2,
             &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0,
             v15) >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v15 + 40LL))(*(_QWORD *)v15, 0LL);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x238,
            (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v11);
      }
      v12 = *(_QWORD *)v15;
      if ( *(_QWORD *)v15 )
      {
        *(_QWORD *)v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    (*(void (__fastcall **)(_QWORD, struct IObjectArray *, _QWORD))(**(_QWORD **)(a1 + 440) + 40LL))(
      *(_QWORD *)(a1 + 440),
      a2,
      a3);
    *(_QWORD *)v15 = a2;
    if ( a2 )
      ((void (__fastcall *)(struct IObjectArray *))a2->lpVtbl->AddRef)(a2);
    v16[2] = a4;
    if ( a4 )
      ((void (__fastcall *)(struct IObjectArray *))a4->lpVtbl->AddRef)(a4);
    v16[4] = a2;
    if ( a2 )
      ((void (__fastcall *)(struct IObjectArray *))a2->lpVtbl->AddRef)(a2);
    v17 = a3;
    v18 = a4;
    if ( a4 )
      ((void (__fastcall *)(struct IObjectArray *))a4->lpVtbl->AddRef)(a4);
    v19 = v10;
    if ( v10 )
      ((void (__fastcall *)(struct IObjectArray *))v10->lpVtbl->AddRef)(v10);
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      &v20,
      v21);
    v20 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
    v13 = NotificationDispatcher::RunAsync__lambda_794533bae2653f5a8c11b3eb7b48e533___(*(NotificationDispatcher **)(a1 + 512));
    v9 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x252,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v13);
    if ( a4 )
      ((void (__fastcall *)(struct IObjectArray *))a4->lpVtbl->Release)(a4);
    if ( a2 )
      ((void (__fastcall *)(struct IObjectArray *))a2->lpVtbl->Release)(a2);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x230,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  if ( v10 )
    ((void (__fastcall *)(struct IObjectArray *))v10->lpVtbl->Release)(v10);
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)v21);
  return v9;
}
