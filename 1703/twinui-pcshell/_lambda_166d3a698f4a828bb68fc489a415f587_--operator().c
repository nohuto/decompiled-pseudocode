/*
 * XREFs of _lambda_166d3a698f4a828bb68fc489a415f587_::operator() @ 0x1800F4780
 * Callers:
 *     ?PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ @ 0x1800F4500 (-PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x1800F5A14 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1800F82C8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@IAEBI@RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAIAEBI@Z @ 0x1800FECCC (--$Start@IAEBI@RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@SA-AV01@$$QEAIAE.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_166d3a698f4a828bb68fc489a415f587_::operator()(__int64 a1)
{
  __int64 v2; // r9
  _QWORD *v3; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  int v6; // ebx
  unsigned int v7; // r15d
  ViewEventDispatcher *v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned int v13; // eax
  int v14; // eax
  char v15; // di
  struct IViewWrapperInternal *v16; // rcx
  __int64 v17; // rcx
  struct IViewWrapperInternal *v19; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h]
  _QWORD v22[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+70h] [rbp-98h]
  __int64 v24; // [rsp+78h] [rbp-90h]
  _QWORD v25[40]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v24 = -2LL;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v20 = *(_QWORD *)a1;
  *((_QWORD *)&v20 + 1) = v2;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v22, &v20);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 296) + 8LL * *v3);
  LODWORD(v21) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 576LL))(v5);
  ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::Start<unsigned int,unsigned int const &>((ViewManagerInteropTraceLogging::RecoverComponentHostRelationship *)v25);
  v19 = 0LL;
  v6 = ViewEventDispatcher::_ViewFromViewInstanceId(*(ViewEventDispatcher **)a1, **(_DWORD **)(a1 + 16), &v19);
  if ( v6 < 0 )
    goto LABEL_6;
  *(_QWORD *)&v20 = 0LL;
  DWORD1(v20) = **(_DWORD **)(a1 + 16);
  v7 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v19 + 640LL))(v19);
  if ( !v7 )
  {
    v6 = -2147024809;
LABEL_6:
    v15 = v23;
    goto LABEL_8;
  }
  v8 = *(ViewEventDispatcher **)a1;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 296LL) + 8LL * **(_QWORD **)(a1 + 8));
  DWORD2(v20) = 0;
  v10 = (__int64 *)*((_QWORD *)v8 + 57);
  v11 = v9;
  v12 = *v10;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 576LL))(v9);
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, _QWORD, __int64))(v12 + 48))(v10, &v20, v7, v13, v11);
  v6 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x54B,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_6;
  }
  ViewEventDispatcher::_PropagateNewRegistration(
    *(ViewEventDispatcher **)a1,
    v19,
    *(struct IViewWrapperInternal **)(*(_QWORD *)(*(_QWORD *)a1 + 296LL) + 8LL * **(_QWORD **)(a1 + 8)));
  v15 = 0;
  LOBYTE(v23) = 0;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v25);
  v6 = 0;
LABEL_8:
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v25[0] = &ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v25);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v25);
  if ( v15 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(v22[0] + 296LL) + 8LL * *(_QWORD *)v22[1]);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 760LL))(v17, 0LL);
  }
  return (unsigned int)v6;
}
