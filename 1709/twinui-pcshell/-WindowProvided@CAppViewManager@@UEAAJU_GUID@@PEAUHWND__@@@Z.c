/*
 * XREFs of ?WindowProvided@CAppViewManager@@UEAAJU_GUID@@PEAUHWND__@@@Z @ 0x180040890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180040DD0 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1800434B4 (-_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_2727d797a9b3b93bbc18d3ec3a83ce66__&___ptr64_ @ 0x1800462E0 (Microsoft--WRL--Callback_IAsyncCallback__lambda_2727d797a9b3b93bbc18d3ec3a83ce66__-___ptr64_.c)
 *     ?StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z @ 0x1800472D0 (-StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::WindowProvided(CAppViewManager *this, struct _GUID *a2, HWND a3)
{
  char v6; // r14
  CAppViewManager *v7; // rbx
  unsigned int v8; // esi
  struct IAsyncCallback *v9; // rdi
  int v10; // eax
  struct IAsyncCallback *v12; // [rsp+28h] [rbp-E0h] BYREF
  struct IAsyncCallback *v13[2]; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+40h] [rbp-C8h]
  __int128 v15; // [rsp+48h] [rbp-C0h]
  __int64 v16; // [rsp+58h] [rbp-B0h]
  CAppViewManager *v17; // [rsp+60h] [rbp-A8h] BYREF
  struct _GUID v18; // [rsp+68h] [rbp-A0h]
  HWND v19; // [rsp+78h] [rbp-90h]
  _QWORD v20[4]; // [rsp+88h] [rbp-80h] BYREF
  int v21; // [rsp+A8h] [rbp-60h]
  int *v22; // [rsp+B0h] [rbp-58h]
  int *v23; // [rsp+B8h] [rbp-50h]
  int v24; // [rsp+C0h] [rbp-48h] BYREF
  char v25; // [rsp+C4h] [rbp-44h]
  int v26; // [rsp+E8h] [rbp-20h] BYREF
  const char *v27; // [rsp+F0h] [rbp-18h]
  __int64 v28; // [rsp+F8h] [rbp-10h]
  char v29; // [rsp+100h] [rbp-8h]
  __int64 v30; // [rsp+108h] [rbp+0h]
  _BYTE v31[144]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v32; // [rsp+1A0h] [rbp+98h]
  __int64 v33; // [rsp+1A8h] [rbp+A0h]
  __int64 v34; // [rsp+1B0h] [rbp+A8h]
  __int64 v35; // [rsp+1B8h] [rbp+B0h]
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v14 = -2LL;
  v20[1] = 0LL;
  v20[2] = v20;
  v20[3] = 0LL;
  v21 = 0;
  v22 = &v26;
  v23 = &v24;
  v24 = 0;
  v25 = 0;
  v29 = 0;
  v26 = 0;
  v27 = "WindowProvided";
  v28 = 0LL;
  v6 = 1;
  v30 = 1LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(v31, 0, sizeof(v31));
  v34 = 0LL;
  v35 = 0LL;
  v20[0] = &CAppViewManagerTelemetry::WindowProvided::`vftable';
  CAppViewManagerTelemetry::WindowProvided::StartActivity((CAppViewManagerTelemetry::WindowProvided *)v20, a2, a3);
  v7 = (CAppViewManager *)((char *)this - 64);
  v13[0] = v7;
  v13[1] = (struct IAsyncCallback *)a2;
  v15 = *(_OWORD *)v13;
  LOBYTE(v16) = 1;
  if ( a3 )
  {
    v13[0] = v7;
    if ( v7 )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v7 + 8LL))(v7);
    v17 = v7;
    if ( v7 )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v7 + 8LL))(v7);
    v18 = *a2;
    v19 = a3;
    Microsoft::WRL::Callback_IAsyncCallback__lambda_2727d797a9b3b93bbc18d3ec3a83ce66______ptr64_(&v12, &v17);
    v9 = v12;
    v10 = CAppViewManager::_AddDelayedOperation(v7, v12);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v6 = 0;
      LOBYTE(v16) = 0;
      wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v20, 0);
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x43A,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v10);
    }
    if ( v9 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v7 )
    {
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v7 + 16LL))(v7);
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  else
  {
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42B,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)0x80070057LL);
  }
  if ( v6 )
    CAppViewManager::_ObliterateOperation(v7, a2);
  v20[0] = &CAppViewManagerTelemetry::WindowProvided::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v20);
  return v8;
}
