/*
 * XREFs of ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180073730
 * Callers:
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180072B60 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180072C40 (-SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x180072D10 (-HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800733BC (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180073450 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x1800735F4 (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x1800744B0 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_73af3bb2f3d5c91ade250b7343a71e20___::Invoke @ 0x180075EE0 (CAsyncCallbackWithLambda__lambda_73af3bb2f3d5c91ade250b7343a71e20___--Invoke.c)
 *     CAsyncCallbackWithLambda__lambda_298796646347532e56582e46723c0847___::Invoke @ 0x180076050 (CAsyncCallbackWithLambda__lambda_298796646347532e56582e46723c0847___--Invoke.c)
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18007CD90 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x180080B70 (-SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180082300 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180024D24 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Start@AEAPEAUIApplicationView@@AEAW4APPLICATION_VIEW_CHANGE@@AEAPEAUIUnknown@@@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@SA?AV012@AEAPEAUIApplicationView@@AEAW4APPLICATION_VIEW_CHANGE@@AEAPEAUIUnknown@@@Z @ 0x180074FA8 (--$Start@AEAPEAUIApplicationView@@AEAW4APPLICATION_VIEW_CHANGE@@AEAPEAUIUnknown@@@RaiseApplicati.c)
 *     NotificationDispatcher::RunAsync__lambda_fd54a0dac248e9cf9b99375b3d19bed2___ @ 0x180075078 (NotificationDispatcher--RunAsync__lambda_fd54a0dac248e9cf9b99375b3d19bed2___.c)
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x1800777AC (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180077A00 (--0-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::RaiseApplicationViewChanged(
        __int64 a1,
        __int64 a2,
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
  struct IObjectArray *v16; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v17[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-B0h]
  struct IObjectArray *v19; // [rsp+58h] [rbp-A8h]
  struct IObjectArray *v20; // [rsp+60h] [rbp-A0h]
  void **v21; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v22[320]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+228h]

  v17[1] = -2LL;
  v17[0] = a2;
  v15[0] = a3;
  v16 = a4;
  ((void (__fastcall *)(_BYTE *, _QWORD *, int *, struct IObjectArray **))ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::Start<IApplicationView * &,enum APPLICATION_VIEW_CHANGE &,IUnknown * &>)(
    v22,
    v17,
    v15,
    &v16);
  v16 = 0LL;
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 72), &v16);
  v9 = CallbackArray;
  v10 = v16;
  if ( CallbackArray >= 0 )
  {
    if ( a3 == 7 )
    {
      *(_QWORD *)v15 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, int *))a2)(a2, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, v15) >= 0 )
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
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 424) + 40LL))(*(_QWORD *)(a1 + 424), a2, a3);
    v17[0] = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    *(_QWORD *)v15 = a4;
    if ( a4 )
      ((void (__fastcall *)(struct IObjectArray *))a4->lpVtbl->AddRef)(a4);
    v17[3] = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v18 = a3;
    v19 = a4;
    if ( a4 )
      ((void (__fastcall *)(struct IObjectArray *))a4->lpVtbl->AddRef)(a4);
    v20 = v10;
    if ( v10 )
      ((void (__fastcall *)(struct IObjectArray *))v10->lpVtbl->AddRef)(v10);
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      &v21,
      v22);
    v21 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
    v13 = NotificationDispatcher::RunAsync__lambda_fd54a0dac248e9cf9b99375b3d19bed2___(*(NotificationDispatcher **)(a1 + 496));
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
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
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
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)v22);
  return v9;
}
