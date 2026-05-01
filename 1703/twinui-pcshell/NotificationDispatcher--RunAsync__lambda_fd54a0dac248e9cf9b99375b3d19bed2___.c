/*
 * XREFs of NotificationDispatcher::RunAsync__lambda_fd54a0dac248e9cf9b99375b3d19bed2___ @ 0x180075078
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180073730 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_fd54a0dac248e9cf9b99375b3d19bed2_::_lambda_fd54a0dac248e9cf9b99375b3d19bed2_ @ 0x1800757F0 (_lambda_fd54a0dac248e9cf9b99375b3d19bed2_--_lambda_fd54a0dac248e9cf9b99375b3d19bed2_.c)
 *     CreateAsyncCallbackWithLambda__lambda_edabc7bfffa072f6dcb0170080417172___ @ 0x180075CAC (CreateAsyncCallbackWithLambda__lambda_edabc7bfffa072f6dcb0170080417172___.c)
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x1800777AC (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 *     ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18007ADC8 (-AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall NotificationDispatcher::RunAsync__lambda_fd54a0dac248e9cf9b99375b3d19bed2___(
        NotificationDispatcher *this,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct IAsyncCallback *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct IAsyncCallback *v20[4]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h]
  __int64 v23; // [rsp+60h] [rbp-A8h]
  _BYTE v24[320]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v20[1] = (struct IAsyncCallback *)-2LL;
  v20[2] = (struct IAsyncCallback *)a2;
  lambda_fd54a0dac248e9cf9b99375b3d19bed2_::_lambda_fd54a0dac248e9cf9b99375b3d19bed2_(v21);
  CreateAsyncCallbackWithLambda__lambda_edabc7bfffa072f6dcb0170080417172_(v20, v21);
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)v24);
  v4 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = v21[0];
  if ( v21[0] )
  {
    v21[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = v20[0];
  if ( v20[0] )
  {
    v12 = NotificationDispatcher::AddTask(this, v20[0]);
    v13 = v12;
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v7 + 16LL))(v7);
      ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)(a2 + 4));
      v17 = a2[3];
      if ( v17 )
      {
        a2[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = a2[2];
      if ( v18 )
      {
        a2[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v19 = *a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1D,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
        (const char *)(unsigned int)v12);
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v7 + 16LL))(v7);
      ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)(a2 + 4));
      v14 = a2[3];
      if ( v14 )
      {
        a2[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v15 = a2[2];
      if ( v15 )
      {
        a2[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v16 = *a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      return v13;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
      (const char *)0x8007000ELL);
    ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)(a2 + 4));
    v8 = a2[3];
    if ( v8 )
    {
      a2[3] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = a2[2];
    if ( v9 )
    {
      a2[2] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return 2147942414LL;
  }
}
