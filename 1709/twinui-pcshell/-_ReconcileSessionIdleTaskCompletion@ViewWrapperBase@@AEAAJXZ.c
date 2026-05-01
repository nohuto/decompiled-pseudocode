/*
 * XREFs of ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18013E3F0
 * Callers:
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18013DA90 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x18013DC40 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     ?AddSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x18013E3D0 (-AddSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ.c)
 *     ?RemoveSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x18013E3E0 (-RemoveSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x180141F1C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x18013C7BC (-StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ?StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x18013CD0C (-StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18014248C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180142708 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is_ea_180142708.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ViewWrapperBase::_ReconcileSessionIdleTaskCompletion(ViewWrapperBase *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  int v4; // edi
  struct IUnknownVtbl *v5; // rdi
  char *v6; // rbx
  int v7; // r15d
  IUnknown *v8; // rsi
  IUnknown *v9; // rax
  IUnknown *v10; // rdi
  char *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v14; // rcx
  char *v15; // rbx
  int v16; // r15d
  IUnknown *v17; // rsi
  IUnknown *v18; // rax
  IUnknown *v19; // rdi
  char *v20; // rcx
  DWORD dwProcessId[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C8h]
  char *v23; // [rsp+48h] [rbp-C0h]
  __int64 v24; // [rsp+50h] [rbp-B8h]
  IUnknown *v25; // [rsp+58h] [rbp-B0h]
  char *v26; // [rsp+60h] [rbp-A8h]
  __int64 v27; // [rsp+68h] [rbp-A0h]
  IUnknown *v28; // [rsp+70h] [rbp-98h]
  _QWORD v29[4]; // [rsp+78h] [rbp-90h] BYREF
  int v30; // [rsp+98h] [rbp-70h]
  int *v31; // [rsp+A0h] [rbp-68h]
  int *v32; // [rsp+A8h] [rbp-60h]
  int v33; // [rsp+B0h] [rbp-58h] BYREF
  char v34; // [rsp+B4h] [rbp-54h]
  int v35; // [rsp+D8h] [rbp-30h] BYREF
  const char *v36; // [rsp+E0h] [rbp-28h]
  __int64 v37; // [rsp+E8h] [rbp-20h]
  char v38; // [rsp+F0h] [rbp-18h]
  __int64 v39; // [rsp+F8h] [rbp-10h]
  _BYTE v40[144]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v41; // [rsp+190h] [rbp+88h]
  __int64 v42; // [rsp+198h] [rbp+90h]
  __int64 v43; // [rsp+1A0h] [rbp+98h]
  __int64 v44; // [rsp+1A8h] [rbp+A0h]
  _QWORD v45[4]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v46; // [rsp+1D8h] [rbp+D0h]
  int *v47; // [rsp+1E0h] [rbp+D8h]
  int *v48; // [rsp+1E8h] [rbp+E0h]
  int v49; // [rsp+1F0h] [rbp+E8h] BYREF
  char v50; // [rsp+1F4h] [rbp+ECh]
  int v51; // [rsp+218h] [rbp+110h] BYREF
  const char *v52; // [rsp+220h] [rbp+118h]
  __int64 v53; // [rsp+228h] [rbp+120h]
  char v54; // [rsp+230h] [rbp+128h]
  __int64 v55; // [rsp+238h] [rbp+130h]
  _BYTE v56[144]; // [rsp+240h] [rbp+138h] BYREF
  __int64 v57; // [rsp+2D0h] [rbp+1C8h]
  __int64 v58; // [rsp+2D8h] [rbp+1D0h]
  __int64 v59; // [rsp+2E0h] [rbp+1D8h]
  __int64 v60; // [rsp+2E8h] [rbp+1E0h]
  ViewWrapperBase *v61; // [rsp+2F8h] [rbp+1F0h]
  char *v62; // [rsp+300h] [rbp+1F8h]
  struct IUnknownVtbl *v63; // [rsp+308h] [rbp+200h]
  DWORD v64; // [rsp+310h] [rbp+208h]
  _QWORD v65[40]; // [rsp+318h] [rbp+210h] BYREF
  ViewWrapperBase *v66; // [rsp+458h] [rbp+350h]
  struct IUnknownVtbl *v67; // [rsp+460h] [rbp+358h] BYREF
  _QWORD v68[40]; // [rsp+468h] [rbp+360h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5E0h] [rbp+4D8h]

  v22 = -2LL;
  v2 = (*(__int64 (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 120LL))(this);
  v3 = *((_DWORD *)this + 26);
  if ( (v3 & 1) != 0 && *((_QWORD *)this + 33) && (unsigned int)(v2 - 3) <= 2 )
  {
    if ( (~(v3 >> 1) & 1) != 0 )
    {
      v29[1] = 0LL;
      v29[2] = v29;
      v29[3] = 0LL;
      v30 = 0;
      v31 = &v35;
      v32 = &v33;
      v33 = 0;
      v34 = 0;
      v38 = 0;
      v35 = 0;
      v36 = "AddSessionIdleTaskCompletion";
      v37 = 0LL;
      v39 = 1LL;
      v41 = 0LL;
      v42 = 0LL;
      memset(v40, 0, sizeof(v40));
      v43 = 0LL;
      v44 = 0LL;
      v29[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::StartActivity(
        (ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v29,
        *((_DWORD *)this + 39));
      if ( !GetWindowThreadProcessId(*((HWND *)this + 33), dwProcessId) )
      {
        v4 = -2147023496;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x29C,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)0x80070578LL);
LABEL_24:
        v29[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
        v12 = v29;
LABEL_25:
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
        return (unsigned int)v4;
      }
      v5 = (struct IUnknownVtbl *)*((_QWORD *)this + 33);
      v6 = (char *)this + 8;
      v23 = (char *)this + 8;
      if ( this != (ViewWrapperBase *)-8LL )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL))((char *)this + 8);
      v61 = this;
      v62 = (char *)this + 8;
      if ( this != (ViewWrapperBase *)-8LL )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL))((char *)this + 8);
      v63 = v5;
      v64 = dwProcessId[0];
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        v65,
        v29);
      v65[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      v7 = *((_DWORD *)this + 38);
      v8 = 0LL;
      v24 = 0LL;
      v9 = (IUnknown *)operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
      v10 = v9;
      if ( v9 )
      {
        v9->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
        HIDWORD(v9[1].lpVtbl) = 1;
        v9->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v10->lpVtbl = (struct IUnknownVtbl *)off_18020D378;
        v10[2].lpVtbl = (struct IUnknownVtbl *)v61;
        v10[3].lpVtbl = (struct IUnknownVtbl *)v62;
        if ( v62 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v62 + 8LL))(v62);
        v10[4].lpVtbl = v63;
        LODWORD(v10[5].lpVtbl) = v64;
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
          &v10[6],
          v65);
        v10[6].lpVtbl = (struct IUnknownVtbl *)&ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
        v8 = v10;
      }
      v25 = v8;
      v4 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v7, 0, v8, 0LL);
      if ( v8 )
        ((void (__fastcall *)(IUnknown *))v8->lpVtbl->Release)(v8);
      v65[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v65);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v65);
      v11 = v62;
      if ( v62 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x2B2,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)(unsigned int)v4);
        if ( this != (ViewWrapperBase *)-8LL )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))((char *)this + 8);
        goto LABEL_24;
      }
      *((_DWORD *)this + 26) |= 2u;
      if ( this != (ViewWrapperBase *)-8LL )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))((char *)this + 8);
      v29[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
      v14 = v29;
      goto LABEL_51;
    }
  }
  else if ( (v3 & 2) != 0 )
  {
    v45[1] = 0LL;
    v45[2] = v45;
    v45[3] = 0LL;
    v46 = 0;
    v47 = &v51;
    v48 = &v49;
    v49 = 0;
    v50 = 0;
    v54 = 0;
    v51 = 0;
    v52 = "RemoveSessionIdleTaskCompletion";
    v53 = 0LL;
    v55 = 1LL;
    v57 = 0LL;
    v58 = 0LL;
    memset(v56, 0, sizeof(v56));
    v59 = 0LL;
    v60 = 0LL;
    v45[0] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
    ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::StartActivity(
      (ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v45,
      *((_DWORD *)this + 39));
    v15 = (char *)this + 8;
    v26 = (char *)this + 8;
    if ( this != (ViewWrapperBase *)-8LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v15 + 8LL))((char *)this + 8);
    v66 = this;
    v67 = (struct IUnknownVtbl *)((char *)this + 8);
    if ( this != (ViewWrapperBase *)-8LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v15 + 8LL))((char *)this + 8);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      v68,
      v45);
    v68[0] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
    v16 = *((_DWORD *)this + 38);
    v17 = 0LL;
    v27 = 0LL;
    v18 = (IUnknown *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
    v19 = v18;
    if ( v18 )
    {
      v18->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
      HIDWORD(v18[1].lpVtbl) = 1;
      v18->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v19->lpVtbl = (struct IUnknownVtbl *)off_18020D2D8;
      v19[2].lpVtbl = (struct IUnknownVtbl *)v66;
      v19[3].lpVtbl = 0LL;
      if ( &v19[3] != (IUnknown *)&v67 )
      {
        v19[3].lpVtbl = v67;
        v67 = 0LL;
      }
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        &v19[4],
        v68);
      v19[4].lpVtbl = (struct IUnknownVtbl *)&ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
      v17 = v19;
    }
    v28 = v17;
    v4 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v16, 0, v17, 0LL);
    if ( v17 )
      ((void (__fastcall *)(IUnknown *))v17->lpVtbl->Release)(v17);
    v68[0] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v68);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v68);
    v20 = (char *)v67;
    if ( v67 )
    {
      v67 = 0LL;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2C9,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v4);
      if ( this != (ViewWrapperBase *)-8LL )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v15 + 16LL))((char *)this + 8);
      v45[0] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v45);
      v12 = v45;
      goto LABEL_25;
    }
    *((_DWORD *)this + 26) &= ~2u;
    if ( this != (ViewWrapperBase *)-8LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v15 + 16LL))((char *)this + 8);
    v45[0] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v45);
    v14 = v45;
LABEL_51:
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v14);
  }
  return 0LL;
}
