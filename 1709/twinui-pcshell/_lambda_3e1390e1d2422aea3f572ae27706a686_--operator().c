/*
 * XREFs of _lambda_3e1390e1d2422aea3f572ae27706a686_::operator() @ 0x18011F56C
 * Callers:
 *     ?PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ @ 0x18011F1E0 (-PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x18011AD7C (-StartActivity@RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x1801208EC (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_3e1390e1d2422aea3f572ae27706a686_::operator()(__int64 a1)
{
  __int64 v2; // r13
  char v3; // r15
  __int64 v4; // rcx
  int v5; // edi
  int *v6; // rbx
  int v7; // ebx
  unsigned int v8; // r12d
  ViewEventDispatcher *v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // eax
  int v15; // eax
  struct IViewWrapperInternal *v16; // rcx
  __int64 v17; // rcx
  struct IViewWrapperInternal *v19; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v21; // [rsp+58h] [rbp-B0h]
  _QWORD v22[3]; // [rsp+60h] [rbp-A8h]
  char v23; // [rsp+78h] [rbp-90h]
  _QWORD v24[4]; // [rsp+88h] [rbp-80h] BYREF
  int v25; // [rsp+A8h] [rbp-60h]
  int *v26; // [rsp+B0h] [rbp-58h]
  int *v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h] BYREF
  char v29; // [rsp+C4h] [rbp-44h]
  int v30; // [rsp+E8h] [rbp-20h] BYREF
  const char *v31; // [rsp+F0h] [rbp-18h]
  __int64 v32; // [rsp+F8h] [rbp-10h]
  char v33; // [rsp+100h] [rbp-8h]
  __int64 v34; // [rsp+108h] [rbp+0h]
  _BYTE v35[144]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v36; // [rsp+1A0h] [rbp+98h]
  __int64 v37; // [rsp+1A8h] [rbp+A0h]
  __int64 v38; // [rsp+1B0h] [rbp+A8h]
  __int64 v39; // [rsp+1B8h] [rbp+B0h]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v22[0] = -2LL;
  v21 = *(_QWORD **)(a1 + 8);
  *(_QWORD *)&v20 = *(_QWORD *)a1;
  v2 = v20;
  *((_QWORD *)&v20 + 1) = v21;
  *(_OWORD *)&v22[1] = v20;
  v3 = 1;
  v23 = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(v20 + 368) + 8LL * *v21);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 576LL))(v4);
  v6 = *(int **)(a1 + 16);
  v24[1] = 0LL;
  v24[2] = v24;
  v24[3] = 0LL;
  v25 = 0;
  v26 = &v30;
  v27 = &v28;
  v28 = 0;
  v29 = 0;
  v33 = 0;
  v30 = 0;
  v31 = "RecoverComponentHostRelationship";
  v32 = 0LL;
  v34 = 1LL;
  v36 = 0LL;
  v37 = 0LL;
  memset(v35, 0, sizeof(v35));
  v38 = 0LL;
  v39 = 0LL;
  v24[0] = &ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::`vftable';
  ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::StartActivity(
    (ViewManagerInteropTraceLogging::RecoverComponentHostRelationship *)v24,
    v5,
    *v6);
  v19 = 0LL;
  v7 = ViewEventDispatcher::_ViewFromViewInstanceId(*(ViewEventDispatcher **)a1, **(_DWORD **)(a1 + 16), &v19);
  if ( v7 >= 0 )
  {
    *(_QWORD *)&v20 = 0LL;
    DWORD1(v20) = **(_DWORD **)(a1 + 16);
    v8 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v19 + 640LL))(v19);
    if ( v8 )
    {
      v9 = *(ViewEventDispatcher **)a1;
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 368LL) + 8LL * **(_QWORD **)(a1 + 8));
      DWORD2(v20) = 0;
      v11 = (__int64 *)*((_QWORD *)v9 + 66);
      v12 = v10;
      v13 = *v11;
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 576LL))(v10);
      v15 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, _QWORD, __int64))(v13 + 48))(
              v11,
              &v20,
              v8,
              v14,
              v12);
      v7 = v15;
      if ( v15 >= 0 )
      {
        ViewEventDispatcher::_PropagateNewRegistration(
          *(ViewEventDispatcher **)a1,
          v19,
          *(struct IViewWrapperInternal **)(*(_QWORD *)(*(_QWORD *)a1 + 368LL) + 8LL * **(_QWORD **)(a1 + 8)));
        v3 = 0;
        v23 = 0;
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v24);
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x551,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v15);
      }
    }
    else
    {
      v7 = -2147024809;
    }
  }
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v24[0] = &ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v24);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v24);
  if ( v3 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(v2 + 368) + 8LL * *v21);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 760LL))(v17, 0LL);
  }
  return (unsigned int)v7;
}
