/*
 * XREFs of ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1801141A0
 * Callers:
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1801137F0 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x180113990 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     ?AddSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x180114180 (-AddSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ.c)
 *     ?RemoveSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x180114190 (-RemoveSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x18011749C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180117A28 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??$Start@AEAI@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA?AV01@AEAI@Z @ 0x180119910 (--$Start@AEAI@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA-AV01@AEAI@Z.c)
 *     ??$Start@AEAI@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA?AV01@AEAI@Z @ 0x180119A88 (--$Start@AEAI@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA-AV01@AEAI@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_1a629fb13df2657ee8e744f2b26d8144___ @ 0x18011A270 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_1a629fb13df2657ee8e744f2b26d8144___.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_7f25f51c1118b73fb82a4cf2a862a275___ @ 0x18011A2B4 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_7f25f51c1118b73fb82a4cf2a862a275___.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ViewWrapperBase::_ReconcileSessionIdleTaskCompletion(ViewWrapperBase *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  void **v4; // r15
  int v5; // edi
  void **v6; // rdi
  char *v7; // rbx
  int v8; // edi
  IUnknown **v9; // rax
  __int64 v10; // rcx
  char *v11; // rcx
  char *v13; // rbx
  int v14; // edi
  IUnknown **v15; // rax
  __int64 v16; // rcx
  char *v17; // rcx
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  DWORD dwProcessId[2]; // [rsp+40h] [rbp-C8h] BYREF
  char *v20; // [rsp+48h] [rbp-C0h]
  __int64 v21; // [rsp+50h] [rbp-B8h]
  ViewWrapperBase *v22; // [rsp+58h] [rbp-B0h] BYREF
  char *v23; // [rsp+60h] [rbp-A8h]
  void **v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h]
  _QWORD v26[40]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v27[40]; // [rsp+1B8h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+320h] [rbp+218h]

  v21 = -2LL;
  v2 = (*(__int64 (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 120LL))(this);
  v3 = *((_DWORD *)this + 20);
  if ( (v3 & 1) != 0 && *((_QWORD *)this + 30) && (unsigned int)(v2 - 3) <= 2 )
  {
    if ( (~(v3 >> 1) & 1) != 0 )
    {
      ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::Start<unsigned int &>((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v27);
      v4 = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      if ( !GetWindowThreadProcessId(*((HWND *)this + 30), dwProcessId) )
      {
        v5 = -2147023496;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x29B,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)0x80070578LL);
LABEL_18:
        v27[0] = v4;
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v27);
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v27);
        return (unsigned int)v5;
      }
      v6 = (void **)*((_QWORD *)this + 30);
      v7 = (char *)this + 8;
      v20 = (char *)this + 8;
      if ( this != (ViewWrapperBase *)-8LL )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))((char *)this + 8);
      v22 = this;
      v23 = (char *)this + 8;
      if ( this != (ViewWrapperBase *)-8LL )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))((char *)this + 8);
      v24 = v6;
      LODWORD(v25) = dwProcessId[0];
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        v26,
        v27);
      v26[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      v8 = *((_DWORD *)this + 32);
      v9 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_1a629fb13df2657ee8e744f2b26d8144___(
                          &v18,
                          &v22);
      v5 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v8, 0, *v9, 0LL);
      v10 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v26[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v26);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v26);
      v11 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x2B1,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)(unsigned int)v5);
        if ( this != (ViewWrapperBase *)-8LL )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))((char *)this + 8);
        goto LABEL_18;
      }
      *((_DWORD *)this + 20) |= 2u;
      if ( this != (ViewWrapperBase *)-8LL )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))((char *)this + 8);
      goto LABEL_37;
    }
  }
  else if ( (v3 & 2) != 0 )
  {
    ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::Start<unsigned int &>((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v27);
    v13 = (char *)this + 8;
    v20 = (char *)this + 8;
    if ( this != (ViewWrapperBase *)-8LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v13 + 8LL))((char *)this + 8);
    v22 = this;
    v23 = (char *)this + 8;
    if ( this != (ViewWrapperBase *)-8LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v13 + 8LL))((char *)this + 8);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      &v24,
      v27);
    v4 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
    v24 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
    v14 = *((_DWORD *)this + 32);
    v15 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_7f25f51c1118b73fb82a4cf2a862a275___(
                         &v18,
                         &v22);
    v5 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v14, 0, *v15, 0LL);
    v16 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v24 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v24);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)&v24);
    v17 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2C8,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v5);
      if ( this != (ViewWrapperBase *)-8LL )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v13 + 16LL))((char *)this + 8);
      goto LABEL_18;
    }
    *((_DWORD *)this + 20) &= ~2u;
    if ( this != (ViewWrapperBase *)-8LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v13 + 16LL))((char *)this + 8);
LABEL_37:
    v27[0] = v4;
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v27);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v27);
  }
  return 0LL;
}
