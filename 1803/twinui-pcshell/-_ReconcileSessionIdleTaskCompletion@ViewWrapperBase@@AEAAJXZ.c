/*
 * XREFs of ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18004F6C0
 * Callers:
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x18004ED1C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800501C0 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180050B20 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x180051290 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     ?AddSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x1801E4C30 (-AddSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ.c)
 *     ?RemoveSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x1801E6250 (-RemoveSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180058E0C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4e85baddd9af2aed2f97afae8fd139c5___::CTaskWrapper__lambda_4e85baddd9af2aed2f97afae8fd139c5_____lambda_4e85baddd9af2aed2f97afae8fd139c5___ @ 0x1801E380C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4e85baddd9af2aed2f97afae8fd139c5___--CTaskW.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6ec78f2e6dfd28b322b562580e584ea6___::CTaskWrapper__lambda_6ec78f2e6dfd28b322b562580e584ea6_____lambda_6ec78f2e6dfd28b322b562580e584ea6___ @ 0x1801E3880 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6ec78f2e6dfd28b322b562580e584ea6___--CTaskW.c)
 *     ??$?0VViewWrapperBase@@@?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAA@PEAVViewWrapperBase@@@Z @ 0x1801E38F4 (--$-0VViewWrapperBase@@@-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAA@PEAVViewWrapperBase.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801E425C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is_ea_1801E425C.c)
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801E4660 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801E4688 (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1801E66B4 (-StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ?StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1801E67FC (-StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ViewWrapperBase::_ReconcileSessionIdleTaskCompletion(ViewWrapperBase *this)
{
  __int64 (__fastcall *v2)(ViewWrapperBase *); // rax
  int v3; // eax
  int v4; // ecx
  int v6; // ebx
  void **v7; // rbx
  unsigned int v8; // esi
  void *v9; // rbx
  void *v10; // rax
  unsigned int v11; // esi
  void *v12; // rbx
  void *v13; // rax
  int v14; // [rsp+28h] [rbp-E0h]
  int v15; // [rsp+28h] [rbp-E0h]
  int v16; // [rsp+28h] [rbp-E0h]
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  DWORD dwProcessId[2]; // [rsp+40h] [rbp-C8h] BYREF
  void *v19[2]; // [rsp+48h] [rbp-C0h] BYREF
  ViewWrapperBase *v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  void **v22; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-98h]
  _QWORD v24[40]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v25[40]; // [rsp+1B8h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  v19[1] = (void *)-2LL;
  v2 = *(__int64 (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 120LL);
  if ( (char *)v2 == (char *)UAPViewWrapper::v_GetDesiredNavigationLevel )
    v3 = *((_DWORD *)this + 138);
  else
    v3 = v2(this);
  v4 = *((_DWORD *)this + 24);
  if ( (v4 & 1) == 0 || !*((_QWORD *)this + 33) || (unsigned int)(v3 - 3) > 2 )
  {
    if ( (v4 & 2) != 0 )
    {
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        v25,
        "RemoveSessionIdleTaskCompletion");
      v25[0] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::StartActivity(
        (ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v25,
        *((_DWORD *)this + 37));
      Microsoft::WRL::ComPtr<IViewWrapperInternal>::ComPtr<IViewWrapperInternal>(&v17, this);
      v20 = this;
      v21 = v17;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v21);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v22);
      v22 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
      v11 = *((_DWORD *)this + 36);
      v12 = 0LL;
      v13 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v13 )
        v12 = (void *)Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6ec78f2e6dfd28b322b562580e584ea6___::CTaskWrapper__lambda_6ec78f2e6dfd28b322b562580e584ea6_____lambda_6ec78f2e6dfd28b322b562580e584ea6___(
                        v13,
                        &v20);
      v19[0] = v12;
      v6 = Windows::Internal::ComTaskPool::RunTask(3u, 2u, v11, 0, (struct Windows::Internal::IComPoolTask *)v12, 0LL);
      Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v19);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)&v22);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v21);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F1,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)(unsigned int)v6,
          v16);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v17);
        ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v25);
        return (unsigned int)v6;
      }
      *((_DWORD *)this + 24) &= ~2u;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v17);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v25);
    }
    return 0LL;
  }
  if ( (v4 & 2) != 0 )
    return 0LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    v25,
    "AddSessionIdleTaskCompletion");
  v25[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
  ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::StartActivity(
    (ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v25,
    *((_DWORD *)this + 37));
  if ( GetWindowThreadProcessId(*((HWND *)this + 33), dwProcessId) )
  {
    v7 = (void **)*((_QWORD *)this + 33);
    Microsoft::WRL::ComPtr<IViewWrapperInternal>::ComPtr<IViewWrapperInternal>(&v17, this);
    v20 = this;
    v21 = v17;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v21);
    v22 = v7;
    LODWORD(v23) = dwProcessId[0];
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v24);
    v24[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
    v8 = *((_DWORD *)this + 36);
    v9 = 0LL;
    v10 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
      v9 = (void *)Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4e85baddd9af2aed2f97afae8fd139c5___::CTaskWrapper__lambda_4e85baddd9af2aed2f97afae8fd139c5_____lambda_4e85baddd9af2aed2f97afae8fd139c5___(
                     v10,
                     &v20);
    v19[0] = v9;
    v6 = Windows::Internal::ComTaskPool::RunTask(3u, 2u, v8, 0, (struct Windows::Internal::IComPoolTask *)v9, 0LL);
    Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v19);
    ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v24);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v21);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2DA,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v17);
      goto LABEL_16;
    }
    *((_DWORD *)this + 24) |= 2u;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v17);
    ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v25);
    return 0LL;
  }
  v6 = -2147023496;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C4,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)0x80070578LL,
    v14);
LABEL_16:
  ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v25);
  return (unsigned int)v6;
}
